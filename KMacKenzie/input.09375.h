
/* STATEMENT:

GEO_TOP MODELS THE ENERGY AND WATER FLUXES AT LAND SURFACE
GEOtop-Version 0.9375-Subversion Mackenzie

Copyright, 2008 Stefano Endrizzi, Riccardo Rigon, Emanuele Cordano, Matteo Dall'Amico

 LICENSE:

 This file is part of GEOtop 0.9375 Mackenzie.
 GEOtop is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.*/

#ifndef __INPUT_H__
#define __INPUT_H__

#include "times.h"
#include "keywords_file.h"
#include "struct.geotop.09375.h"
#include "get_filenames.h"
#include "geomorphology.0875.h"
#include "pedo.funct.h"
#include "geo_statistic.09375.h"
#include "networks.h"
#include "constant.h"
#include "dtm_resolution.h"
#include "rw_maps.h"
#include "extensions.h"
#include "tabs.h"
#include "snow.09375.h"
#include "micromet.h"
#ifdef USE_NETCDF_MAP
#include "netcdf4geotop.h"
#endif

#include <getopt.h> //Needed for command line parsing

typedef struct {
	DOUBLEMATRIX *land_classes;
	DOUBLEMATRIX *met;
	double u0;
	double D;
	double Dsnow0;
	double agesnow0;
    double rhosnow0;
	double rhoglac0;
	double Dglac0;
	double Tglac0;
	STRINGBIN *met_col_names;
	DOUBLEMATRIX *LU;
} INIT_TOOLS;

/* BEGIN variables used for recovery and meteoio options */
int meteoio_flag;
char recoverdate[15];
static const struct option long_options[] =
	{
		/* These options set a flag. */
		{"meteoio", no_argument,       &meteoio_flag, 1},

		/* These options require an argument */
		{"recover",  required_argument, 0, 'r'},
		{"enddate",  required_argument, 0, 'e'},
		{0, 0, 0, 0}
	};
/* END variables used for recovery and meteoio options */

/****************************************************************************************************/
/* Subroutine that is able to parse the command line arguments given by the user                    */
/****************************************************************************************************/
void parseCommandLineOptions(int argc, char** argv, PAR *par, TIMES *times);

/****************************************************************************************************/
/* Subroutine which get all the input file and put the variables in the apposite structs            */
/****************************************************************************************************/
void get_all_input(int argc, char *argv[], TOPO *top, SOIL *sl, LAND *land, METEO *met, WATER *wat, CHANNEL *cnet,
					PAR *par, ENERGY *egy, SNOW *snow, GLACIER *glac, TIMES *times);




/****************************************************************************************************/
/* Subroutine to find the the coefficents to diffuse the channel-flows ("fraction_spread" matrix):  */
/****************************************************************************************************/
DOUBLEMATRIX * De_Saint_Venant(DOUBLEVECTOR *s0,double u0,double D,double Dt);




/****************************************************************************************************/
/* year_avg_temp: calcola la temprarura media e l'escursione annuale dell'aria                   */
/* Input:	data_meteo: matrice dati meteorolgici                                                   */
/*  		intervallo_escursione [gg]: intervallo in cui viene mediato il dato di temperatura per  */
/*	    	calcolare l'escursione media annuale                                                    */
/* Output:	temp_med_ann: temperatura media annuale                                                 */
/*		    delta_temp_ann: escursione annuale di temperatura                                       */
/****************************************************************************************************/
void year_avg_temp(DOUBLEVECTOR *Tdata, double ndays, double *T, double *DT, double Dt);

long row(double N, long nrows, long i, T_INIT *UV);

long col(double E, long ncols, long i, T_INIT *UV);

void read_inputmaps(TOPO *top, LAND *land, SOIL *sl, PAR *par);

void read_parameterfile(char *name, PAR *par, INIT_TOOLS *itools);

void read_optionsfile_distr(char *name, PAR *par, TIMES *times, DOUBLEMATRIX *Z0);

void read_optionsfile_point(char *name, PAR *par, TOPO *top, LAND *land, SOIL *sl, INIT_TOOLS *IT, TIMES *times);

double **read_horizon(char *name, long i);

void init_meteo_stations(DOUBLEMATRIX *INPUTmeteo, METEO_STATIONS *st);

void ReadMeteoHeader(FILE *f, STRINGBIN *ColDescr, long offset, long *ncols, long *MeteoCont);

double **read_datameteo(FILE *f, long offset, long ncols, double ndef, int numlines);

void read_inpts_par(PAR *par, TIMES *times, char *program, char *ext, char *pos);

void read_soil_parameters(char *name, long *nsoil, SOIL *sl);

DOUBLEMATRIX *depitted(SHORTMATRIX *DD, DOUBLEMATRIX *Z);

void assign_recovered(char *name, double **assign, PAR *par, DOUBLEMATRIX *Z1, DOUBLEMATRIX *Z2);
void assign_recovered_long(char *name, long **assign, PAR *par, DOUBLEMATRIX *Z1, DOUBLEMATRIX *Z2);

void i_lrc_cont(DOUBLEMATRIX *LC, long ***i, LONGMATRIX *lrc);

#endif