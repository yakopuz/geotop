
/* STATEMENT:
 
 Geotop MODELS THE ENERGY AND WATER FLUXES AT THE LAND SURFACE
 Geotop 1.225-15 - 20 Jun 2013
 
 Copyright (c), 2013 - Stefano Endrizzi 
 
 This file is part of Geotop 1.225-15
 
 Geotop 1.225-15  is a free software and is distributed under GNU General Public License v. 3.0 <http://www.gnu.org/licenses/>
 WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE
 
 Geotop 1.225-15  is distributed as a free software in the hope to create and support a community of developers and users that constructively interact.
 If you just use the code, please give feedback to the authors and the community.
 Any way you use the model, may be the most trivial one, is significantly helpful for the future development of the Geotop model. Any feedback will be highly appreciated.
 
 If you have satisfactorily used the code, please acknowledge the authors.
 */
char *keywords_num[num_par_number] = {"TimeStepEnergyAndWater", 
	"InitDateDDMMYYYYhhmm", 
	"EndDateDDMMYYYYhhmm", 
	"NumSimulationTimes", 
	"StandardTimeSimulation", 
	"DtPlotDischarge", 
	"DtPlotPoint", 
	"DtPlotBasin", 
	"NumLowPassFilterOnDemForAll", 
	"NumLowPassFilterOnDemForCurv", 
	"FlagSkyViewFactor", 
	"FormatOutputMaps", 
	"PointSim", 
	"RecoverSim", 
	"NumLandCoverTypes", 
	"SoilRoughness", 
	"ThresSnowSoilRough", 
	"VegHeight", 
	"ThresSnowVegUp", 
	"ThresSnowVegDown", 
	"LSAI", 
	"CanopyFraction",
	"DecayCoeffCanopy", 
	"VegSnowBurying",
	"RootDepth", 
	"MinStomatalRes", 
	"VegReflectVis", 
	"VegReflNIR",
	"VegTransVis", 
	"VegTransNIR", 
	"LeafAngles", 
	"CanDensSurface", 
	"SoilAlbVisDry",
	"SoilAlbNIRDry", 
	"SoilAlbVisWet", 
	"SoilAlbNIRWet",
	"SoilEmissiv", 
	"SurFlowResLand", 
	"RoughElemXUnitArea",
	"RoughElemDiam", 
	"FrozenSoilHydrCondReduction", 
	"FreeDrainageAtBottom",
	"FreeDrainageAtLateralBorder",
	"RichardTol",
	"RichardMaxIter",
	"RichardInitForc", 
	"MinLambdaWater",
	"MaxTimesMinLambdaWater",
	"ExitMinLambdaWater",
	"MinTimeStep",
	"SurFlowResExp", 
	"ThresWaterDepthLandInf", 
	"ThresWaterDepthLandSup", 
	"SurFlowResChannel", 
	"ThresWaterDepthChannel",  
	"RatioChannelWidthPixelWidth", 
	"ChannelDepression",
	"MaxCourantSupFlowLand",
	"MaxCourantSupFlowChannel",
	"MinSupWaterDepthLand",
	"MinSupWaterDepthChannel",
	"MinDiffSupWaterDepthLandChannel",
	"MinTimeStepSupFlow",
	"Latitude", 
	"Longitude", 
	"Vmin" ,
	"RHmin" ,
	"AlphaSnow", 
	"HighestNodeCorrespondsToLayer",
	"HeatEqTol",
	"HeatEqMaxIter",
	"MinLambdaEnergy",
	"MaxTimesMinLambdaEnergy",
	"ExitMinLambdaEnergy",
	"DEMRotationAngle",
	"CanopyMaxIter", 
	"BusingerMaxIter", 
	"TsMaxIter" , 
	"LocMaxIter" , 
	"CanopyStabCorrection" , 
	"Iobsint" , 
	"Dn" , 
	"SlopeWeight" ,
	"CurvatureWeight" , 
	"SlopeWeightD" , 
	"CurvatureWeightD" , 
	"SlopeWeightI" , 
	"CurvatureWeightI" , 
	"ZeroTempAmplitDepth", 
	"ZeroTempAmplitTemp", 
	"BottomBoundaryHeatFlux",
	"InitSWE" , 
	"InitSnowDensity" , 
	"InitSnowTemp" , 
	"InitSnowAge" ,
	"ThresTempRain" ,
	"ThresTempSnow" , 
	"DewTempOrNormTemp" , 
	"AlbExtParSnow" , 
	"FreshSnowReflVis" ,
	"FreshSnowReflNIR" ,
	"IrriducibleWatSatSnow" , 
	"SnowEmissiv" , 
	"SnowRoughness" , 
	"SnowCorrFactor" ,
	"RainCorrFactor" , 
	"MaxSnowPorosity" , 
	"DrySnowDefRate",
	"SnowDensityCutoff",
	"WetSnowDefRate",
	"SnowViscosity",
	"FetchUp",
	"FetchDown",
	"BlowingSnowSoftLayerIceContent", 
	"TimeStepBlowingSnow",
	"SnowSMIN",
	"SnowSMAX",
	"SnowCURV",
	"MaxWaterEqSnowLayerContent",
	"MaxSnowLayersMiddle",
	"SWEbottom",
	"SWEtop",
	"InitGlacierDepth",
	"InitGlacierDensity",
	"InitGlacierTemp",
	"IrriducibleWatSatGlacier",
	"MaxWaterEqGlacLayerContent",
	"MaxGlacLayersMiddle",
	"GWEbottom",
	"GWEtop",
	"LWinParameterization",
	"MoninObukhov",
	"Surroundings",
	"WaterBalance",
	"EnergyBalance",
	"BlowingSnow",
	"MinIceContentForBlowingSnow",
	"PointID",
	"CoordinatePointX",
	"CoordinatePointY",
	"PointElevation",
	"PointLandCoverType",
	"PointSoilType",
	"PointSlope",
	"PointAspect",
	"PointSkyViewFactor",
	"PointCurvatureNorthSouthDirection",
	"PointCurvatureWestEastDirection",
	"PointCurvatureNorthwestSoutheastDirection",
	"PointCurvatureNortheastSouthwestDirection",
	"PointDepthFreeSurface",
	"PointHorizon",
	"PointMaxSWE",
	"PointLatitude",
	"PointLongitude",
	"NONE",
	"SavingPoints",
	"OutputSoilMaps",
	"OutputSnowMaps",
	"OutputGlacierMaps",
	"OutputSurfEBALMaps",
	"OutputVegetationMaps",
	"OutputMeteoMaps",
	"SpecialPlotBegin",
	"SpecialPlotEnd",
	"SoilLayerTypes",
	"InitWaterTableDepth",
	"DefaultSoilTypeLand",
	"DefaultSoilTypeChannel",
	"SoilLayerThicknesses",
	"SoilLayerNumber",
	"InitSoilPressure",
	"InitSoilTemp",
	"NormalHydrConductivity",
	"LateralHydrConductivity",
	"ThetaRes",
	"WiltingPoint",
	"FieldCapacity",
	"ThetaSat",
	"AlphaVanGenuchten",
	"NVanGenuchten",
	"VMualem",
	"ThermalConductivitySoilSolids",
	"ThermalCapacitySoilSolids",
	"SpecificStorativity",
	"InitSoilPressureBedrock",
	"InitSoilTempBedrock",
	"NormalHydrConductivityBedrock",
	"LateralHydrConductivityBedrock",
	"ThetaResBedrock",
	"WiltingPointBedrock",
	"FieldCapacityBedrock",
	"ThetaSatBedrock",
	"AlphaVanGenuchtenBedrock",
	"NVanGenuchtenBedrock",
	"VMualemBedrock",
	"ThermalConductivitySoilSolidsBedrock",
	"ThermalCapacitySoilSolidsBedrock",
	"SpecificStorativityBedrock",	
	"MeteoStationsID",
	"NumberOfMeteoStations",
	"MeteoStationCoordinateX",
	"MeteoStationCoordinateY",
	"MeteoStationLatitude",
	"MeteoStationLongitude",
	"MeteoStationElevation",
	"MeteoStationSkyViewFactor",
	"MeteoStationStandardTime",
	"MeteoStationWindVelocitySensorHeight",
	"MeteoStationTemperatureSensorHeight",
	"LapseRateTemp",
	"LapseRateDewTemp",
	"LapseRatePrec",
	"MinPrecIncreaseFactorWithElev",
	"MaxPrecDecreaseFactorWithElev",
	"DatePoint",
	"JulianDayFromYear0Point",
	"TimeFromStartPoint",
	"PeriodPoint",
	"RunPoint",
	"IDPointPoint",
	"PsnowPoint",
	"PrainPoint",
	"PsnowNetPoint",
	"PrainNetPoint",
	"PrainOnSnowPoint",
	"WindSpeedPoint",
	"WindDirPoint",
	"RHPoint",
	"AirPressPoint",
	"AirTempPoint",
	"TDewPoint",
	"TsurfPoint",
	"TvegPoint",
	"TCanopyAirPoint",
	"SurfaceEBPoint",
	"SoilHeatFluxPoint",
	"SWinPoint",
	"SWbeamPoint",
	"SWdiffPoint",
	"LWinPoint",
	"LWinMinPoint",
	"LWinMaxPoint",
	"SWNetPoint",
	"LWNetPoint",
	"HPoint",
	"LEPoint",
	"CanopyFractionPoint",
	"LSAIPoint",
	"z0vegPoint",
	"d0vegPoint",
	"EstoredCanopyPoint",
	"SWvPoint",
	"LWvPoint",
	"HvPoint",
	"LEvPoint",
	"HgUnvegPoint",
	"LEgUnvegPoint",
	"HgVegPoint",
	"LEgVegPoint",
	"EvapSurfacePoint",
	"TraspCanopyPoint",
	"WaterOnCanopyPoint",
	"SnowOnCanopyPoint",
	"QVegPoint",
	"QSurfPoint",
	"QAirPoint",
	"QCanopyAirPoint",
	"LObukhovPoint",
	"LObukhovCanopyPoint",
	"WindSpeedTopCanopyPoint",
	"DecayKCanopyPoint",
	"SWupPoint",
	"LWupPoint",
	"HupPoint",
	"LEupPoint",
	"SnowDepthPoint",
	"SWEPoint",
	"SnowDensityPoint",
	"SnowTempPoint",
	"SnowMeltedPoint",
	"SnowSublPoint",
	"SWEBlownPoint",
	"SWESublBlownPoint",
	"GlacDepthPoint",
	"GWEPoint",
	"GlacDensityPoint",
	"GlacTempPoint",
	"GlacMeltedPoint",
	"GlacSublPoint",
	"LowestThawedSoilDepthPoint",
	"HighestThawedSoilDepthPoint",
	"LowestWaterTableDepthPoint",
	"HighestWaterTableDepthPoint",
	"PointAll",
	"DateBasin",
	"JulianDayFromYear0Basin",
	"TimeFromStartBasin",
	"PeriodBasin",
	"RunBasin",
	"PRainNetBasin",
	"PSnowNetBasin",
	"PRainBasin",
	"PSnowBasin",
	"PNetBasin",
	"AirTempBasin",
	"TSurfBasin",
	"TvegBasin",
	"EvapSurfaceBasin",
	"TraspCanopyBasin",
	"LEBasin",
	"HBasin",
	"SWNetBasin",
	"LWNetBasin",
	"LEvBasin",
	"HvBasin",
	"SWvBasin",
	"LWvBasin",
	"SWinBasin",
	"LWinBasin",
	"MassErrorBasin",
	"MeanTimeStep",
	"BasinAll",
	"DateSnow",
	"JulianDayFromYear0Snow",
	"TimeFromStartSnow",
	"PeriodSnow",
	"RunSnow",
	"IDPointSnow",
	"NONE",
	"NONE",
	"NONE",
	"NONE",
	"NONE",
	"NONE",
	"SnowAll",
	"DateGlac",
	"JulianDayFromYear0Glac",
	"TimeFromStartGlac",
	"PeriodGlac",
	"RunGlac",
	"IDPointGlac",
	"TempGlac",
	"IceContentGlac",
	"WatContentGlac",
	"DepthGlac",
	"NONE",
	"NONE",
	"GlacAll",
	"DateSoil",
	"JulianDayFromYear0Soil",
	"TimeFromStartSoil",
	"PeriodSoil",
	"RunSoil",
	"IDPointSoil",
	"SoilAll",
	"SoilPlotDepths",
	"SnowPlotDepths",
	"GlacPlotDepths",
	"RicalculateCloudiness",
	"DewTemperatureAsRH",
	"RHAsDewTemperature",
	"NumberDayIntervalsToCalculateCloudiness",
	"CalculateCastShadow",
	"WindAsSpeedAndDirection",
	"WindAsWindXAndWindY",
	"SnowAgingCoeffVis",
	"SnowAgingCoeffNIR",
	"DepthFreeSurfaceAtTheBoundary",
	"PrecAsIntensity",
	"LinearInterpolation",
	"OutputDepthsVertical",
	"UpwindBorderBlowingSnow",
	"UpdateHydraulicConductivity",
	"ContinuousRecovery",
	"ActualOrProjectedArea",
	"MinRatioKactualToKSat",
	"RunIfAnOldRunIsPresent",
	"MaxCourantSupFlowChannelLand",
	"MinDiffSupWaterDepthChannelLand",
	"NONE",
	"SpinUpLayerBottom",
	"InitInNewPeriods",
	"KonzelmannA",
	"KonzelmannB",
	"Lozone",
	"AngstromAlpha",
	"AngstromBeta",
	"ConsiderAlbedoInSWin",
	"ConsiderMicrometeorology",
	"SurfaceEnergyFlux",
	"ConvectiveHeatTransferCoefficient",
	"SurfaceTemperature",
	"BaseAirTemperature",
	"BaseRelativeHumidity",
	"BaseWindSpeed",
	"BaseWindDirection",
	"BaseIPrec",
	"SimulationHours",
	"DefaultSoilTypeBedrock",
	"MinPrecToRestoreFreshSnowAlbedo",
	"SnowThermalConductivityPar",
	"WindCompaction1D",
	"DDChannel",
	"DDLand"};











































































char *keywords_char[num_par_char] = {
	"HeaderDateDDMMYYYYhhmmMeteo",
	"HeaderJulianDayfrom0Meteo",
	"HeaderIPrec",
	"HeaderPrec",	
	"HeaderWindVelocity",
	"HeaderWindDirection", 
	"HeaderWindX",
	"HeaderWindY",
	"HeaderRH", 
	"HeaderAirTemp",
	"HeaderDewTemp",
	"HeaderSWglobal",
	"HeaderSWdirect", 
	"HeaderSWdiffuse", 
	"HeaderCloudSWTransmissivity", 
	"HeaderCloudFactor",
	"HeaderLWin",
	"HeaderSWnet", 
	"HeaderSurfaceTemperature",
	"HeaderSoilDz",
	"HeaderSoilInitPres",
	"HeaderSoilInitTemp",
	"HeaderNormalHydrConductivity", 
	"HeaderLateralHydrConductivity", 
	"HeaderThetaRes",
	"HeaderWiltingPoint", 
	"HeaderFieldCapacity",
	"HeaderThetaSat",
	"HeaderAlpha", 
	"HeaderN", 
	"HeaderV",
	"HeaderKthSoilSolids",
	"HeaderCthSoilSolids",
	"HeaderSpecificStorativity",
	"HeaderHorizonAngle",
	"HeaderHorizonHeight" ,
	"TimeStepsFile",
	"SoilParFile", 
	"MeteoFile",
	"MeteoStationsListFile",
	"LapseRateFile", 
	"HorizonMeteoStationFile",
	"PointFile",
	"HorizonPointFile",
	"TimeDependentVegetationParameterFile", 
	"TimeDependentIncomingDischargeFile", 
	"DemFile", 
	"LandCoverMapFile",
	"SoilMapFile",
	"DaysDelayMapFile",
	"SkyViewFactorMapFile", 
	"SlopeMapFile", 
	"RiverNetwork", 
	"AspectMapFile",
	"CurvaturesMapFile", 
	"BedrockDepthMapFile",
	"InitWaterTableDepthMapFile",
	"InitSnowDepthMapFile",
	"InitSWEMapFile", 
	"InitSnowAgeMapFile", 
	"InitGlacierDepthMapFile",
	"DischargeFile", 
	"BasinOutputFile",
	"BasinOutputFileWriteEnd",
	"PointOutputFile",
	"PointOutputFileWriteEnd",
	"SoilTempProfileFile",
	"SoilTempProfileFileWriteEnd",
	"SoilAveragedTempProfileFile", 
	"SoilAveragedTempProfileFileWriteEnd", 
	"SoilLiqWaterPressProfileFile",
	"SoilLiqWaterPressProfileFileWriteEnd",
	"SoilTotWaterPressProfileFile",
	"SoilTotWaterPressProfileFileWriteEnd",
	"SoilLiqContentProfileFile",
	"SoilLiqContentProfileFileWriteEnd",
	"SoilAveragedLiqContentProfileFile", 
	"SoilAveragedLiqContentProfileFileWriteEnd",
	"SoilIceContentProfileFile", 
	"SoilIceContentProfileFileWriteEnd",
	"SoilAveragedIceContentProfileFile",
	"SoilAveragedIceContentProfileFileWriteEnd",
	"SoilSaturationRatioProfileFile",
	"SnowTempProfileFile",
	"SnowLiqContentProfileFile",
	"SnowIceContentProfileFile",	
	"SnowDepthLayersFile",	
	"SnowTempProfileFileWriteEnd",
	"SnowLiqContentProfileFileWriteEnd",
	"SnowIceContentProfileFileWriteEnd",	
	"SnowDepthLayersFileWriteEnd",	
	"GlacierProfileFile",
	"GlacierProfileFileWriteEnd",
	"SnowCoveredAreaFile",
	"RunSoilAveragedTemperatureFile",
	"RunSoilAveragedTotalSoilMoistureFile",	
	"RunSoilAveragedInternalEnergyFile",	
	"RunSoilAveragedSnowWaterEquivalentFile",	
	"RunSoilMaximumTemperatureFile",
	"RunSoilMinimumTemperatureFile",
	"RunSoilMaximumTotalSoilMoistureFile",	
	"RunSoilMinimumTotalSoilMoistureFile",	
	"SoilTempTensorFile",
	"FirstSoilLayerTempMapFile", 
	"SoilAveragedTempTensorFile",
	"FirstSoilLayerAveragedTempMapFile", 
	"SoilLiqContentTensorFile", 
	"FirstSoilLayerLiqContentMapFile",
	"SoilAveragedLiqContentTensorFile", 
	"SoilIceContentTensorFile", 
	"FirstSoilLayerIceContentMapFile",
	"SoilAveragedIceContentTensorFile", 
	"LandSurfaceWaterDepthMapFile",
	"ChannelSurfaceWaterDepthMapFile", 
	"NetRadiationMapFile",
	"InLongwaveRadiationMapFile", 
	"NetLongwaveRadiationMapFile", 
	"NetShortwaveRadiationMapFile",
	"InShortwaveRadiationMapFile",
	"DirectInShortwaveRadiationMapFile",
	"ShadowFractionTimeMapFile", 
	"SurfaceHeatFluxMapFile", 
	"SurfaceSensibleHeatFluxMapFile", 
	"SurfaceLatentHeatFluxMapFile",
	"SurfaceTempMapFile", 
	"PrecipitationMapFile", 
	"CanopyInterceptedWaterMapFile",
	"SoilLiqWaterPressTensorFile",
	"SoilTotWaterPressTensorFile",
	"SnowDepthMapFile", 
	"GlacierDepthMapFile",
	"SnowMeltedMapFile",
	"SnowSublMapFile", 
	"GlacierMeltedMapFile", 
	"GlacierSublimatedMapFile", 
	"AirTempMapFile",
	"WindSpeedMapFile",
	"WindDirMapFile", 
	"RelHumMapFile",
	"SWEMapFile", 
	"GlacierWaterEqMapFile",
	"SnowDurationMapFile", 
	"ThawedSoilDepthMapFile", 
	"ThawedSoilDepthFromAboveMapFile", 
	"WaterTableDepthMapFile", 
	"WaterTableDepthFromAboveMapFile", 
	"NetPrecipitationMapFile",
	"EvapotranspirationFromSoilMapFile",
	"SpecificPlotSurfaceHeatFluxMapFile",
	"SpecificPlotTotalSensibleHeatFluxMapFile", 
	"SpecificPlotTotalLatentHeatFluxMapFile", 
	"SpecificPlotSurfaceSensibleHeatFluxMapFile", 
	"SpecificPlotSurfaceLatentHeatFluxMapFile",
	"SpecificPlotVegSensibleHeatFluxMapFile", 
	"SpecificPlotVegLatentHeatFluxMapFile", 
	"SpecificPlotIncomingShortwaveRadMapFile", 
	"SpecificPlotNetSurfaceShortwaveRadMapFile", 
	"SpecificPlotNetVegShortwaveRadMapFile", 
	"SpecificPlotIncomingLongwaveRadMapFile", 
	"SpecificPlotNetSurfaceLongwaveRadMapFile", 
	"SpecificPlotNetVegLongwaveRadMapFile", 
	"SpecificPlotCanopyAirTempMapFile", 
	"SpecificPlotSurfaceTempMapFile", 
	"SpecificPlotVegTempMapFile", 
	"SpecificPlotAboveVegAirTempMapFile", 
	"SpecificPlotWindSpeedMapFile", 
	"SpecificPlotWindDirMapFile", 
	"SpecificPlotRelHumMapFile", 
	"SpecificPlotSnowDepthMapFile", 
	"SpecificPlotSurfaceWaterContentMapFile", 
	"RecoverSoilWatPres",
	"RecoverSoilIceCont", 
	"RecoverSoilTemp", 
	"RecoverSnowLayerThick",
	"RecoverSnowLiqMass",
	"RecoverSnowIceMass", 
	"RecoverSnowTemp", 
	"RecoverGlacierLayerThick",
	"RecoverGlacierLiqMass", 
	"RecoverGlacierIceMass",
	"RecoverGlacierTemp", 
	"RecoverSnowLayerNumber", 
	"RecoverGlacierLayerNumber", 
	"RecoverNonDimensionalSnowAge",
	"RecoverLiqWaterOnCanopy",
	"RecoverSnowOnCanopy", 
	"RecoverVegTemp", 
	"RecoverSoilWatPresChannel",
	"RecoverSoilIceContChannel",
	"RecoverSoilTempChannel",
	"RecoverRunSoilAveragedTemperatureFile",
	"RecoverRunSoilAveragedTotalSoilMoistureFile",	
	"RecoverRunSoilAveragedInternalEnergyFile",	
	"RecoverRunSoilAveragedSnowWaterEquivalentFile",	
	"RecoverRunSoilMaximumTemperatureFile",
	"RecoverRunSoilMinimumTemperatureFile",
	"RecoverRunSoilMaximumTotalSoilMoistureFile",	
	"RecoverRunSoilMinimumTotalSoilMoistureFile",	
	"RecoverTime",
	"SuccessfulRecoveryFile",
	"HeaderDatePoint",
	"HeaderJulianDayFromYear0Point",
	"HeaderTimeFromStartPoint",
	"HeaderPeriodPoint",
	"HeaderRunPoint",
	"HeaderIDPointPoint",
	"HeaderPsnowPoint",
	"HeaderPrainPoint",
	"HeaderPsnowNetPoint",
	"HeaderPrainNetPoint",
	"HeaderPrainOnSnowPoint",
	"HeaderWindSpeedPoint",
	"HeaderWindDirPoint",
	"HeaderRHPoint",
	"HeaderAirPressPoint",
	"HeaderAirTempPoint",
	"HeaderTDewPoint",
	"HeaderTsurfPoint",
	"HeaderTvegPoint",
	"HeaderTCanopyAirPoint",
	"HeaderSurfaceEBPoint",
	"HeaderSoilHeatFluxPoint",
	"HeaderSWinPoint",
	"HeaderSWbeamPoint",
	"HeaderSWdiffPoint",
	"HeaderLWinPoint",
	"HeaderLWinMinPoint",
	"HeaderLWinMaxPoint",
	"HeaderSWNetPoint",
	"HeaderLWNetPoint",
	"HeaderHPoint",
	"HeaderLEPoint",
	"HeaderCanopyFractionPoint",
	"HeaderLSAIPoint",
	"Headerz0vegPoint",
	"Headerd0vegPoint",
	"HeaderEstoredCanopyPoint",
	"HeaderSWvPoint",
	"HeaderLWvPoint",
	"HeaderHvPoint",
	"HeaderLEvPoint",
	"HeaderHgUnvegPoint",
	"HeaderLEgUnvegPoint",
	"HeaderHgVegPoint",
	"HeaderLEgVegPoint",
	"HeaderEvapSurfacePoint",
	"HeaderTraspCanopyPoint",
	"HeaderWaterOnCanopyPoint",
	"HeaderSnowOnCanopyPoint",
	"HeaderQVegPoint",
	"HeaderQSurfPoint",
	"HeaderQAirPoint",
	"HeaderQCanopyAirPoint",
	"HeaderLObukhovPoint",
	"HeaderLObukhovCanopyPoint",
	"HeaderWindSpeedTopCanopyPoint",
	"HeaderDecayKCanopyPoint",
	"HeaderSWupPoint",
	"HeaderLWupPoint",
	"HeaderHupPoint",
	"HeaderLEupPoint",
	"HeaderSnowDepthPoint",
	"HeaderSWEPoint",
	"HeaderSnowDensityPoint",
	"HeaderSnowTempPoint",
	"HeaderSnowMeltedPoint",
	"HeaderSnowSublPoint",
	"HeaderSWEBlownPoint",
	"HeaderSWESublBlownPoint",
	"HeaderGlacDepthPoint",
	"HeaderGWEPoint",
	"HeaderGlacDensityPoint",
	"HeaderGlacTempPoint",
	"HeaderGlacMeltedPoint",
	"HeaderGlacSublPoint",
	"HeaderLowestThawedSoilDepthPoint",
	"HeaderHighestThawedSoilDepthPoint",
	"HeaderLowestWaterTableDepthPoint",
	"HeaderHighestWaterTableDepthPoint",	
	"HeaderDateBasin",
	"HeaderJulianDayFromYear0Basin",
	"HeaderTimeFromStartBasin",
	"HeaderPeriodBasin",
	"HeaderRunBasin",
	"HeaderPRainNetBasin",
	"HeaderPSnowNetBasin",
	"HeaderPRainBasin",
	"HeaderPSnowBasin",
	"HeaderPNetBasin",
	"HeaderAirTempBasin",
	"HeaderTSurfBasin",
	"HeaderTvegBasin",
	"HeaderEvapSurfaceBasin",
	"HeaderTraspCanopyBasin",
	"HeaderLEBasin",
	"HeaderHBasin",
	"HeaderSWNetBasin",
	"HeaderLWNetBasin",
	"HeaderLEvBasin",
	"HeaderHvBasin",
	"HeaderSWvBasin",
	"HeaderLWvBasin",
	"HeaderSWinBasin",
	"HeaderLWinBasin",
	"HeaderMeanTimeStep",
	"HeaderTimeStepAverage",
	"HeaderDateSnow",
	"HeaderJulianDayFromYear0Snow",
	"HeaderTimeFromStartSnow",
	"HeaderPeriodSnow",
	"HeaderRunSnow",
	"HeaderIDPointSnow",
	"HeaderTempSnow",
	"HeaderIceContentSnow",
	"HeaderWatContentSnow",
	"HeaderDepthSnow",
	"HeaderDateGlac",
	"HeaderJulianDayFromYear0Glac",
	"HeaderTimeFromStartGlac",
	"HeaderPeriodGlac",
	"HeaderRunGlac",
	"HeaderIDPointGlac",
	"HeaderTempGlac",
	"HeaderIceContentGlac",
	"HeaderWatContentGlac",
	"HeaderDepthGlac",
	"HeaderDateSoil",
	"HeaderJulianDayFromYear0Soil",
	"HeaderTimeFromStartSoil",
	"HeaderPeriodSoil",
	"HeaderRunSoil",
	"HeaderIDPointSoil",
	"HeaderPointID",
	"HeaderCoordinatePointX",
	"HeaderCoordinatePointY",
	"HeaderPointElevation",
	"HeaderPointLandCoverType",
	"HeaderPointSoilType",
	"HeaderPointSlope",
	"HeaderPointAspect",
	"HeaderPointSkyViewFactor",
	"HeaderPointCurvatureNorthSouthDirection",
	"HeaderPointCurvatureWestEastDirection",
	"HeaderPointCurvatureNorthwestSoutheastDirection",
	"HeaderPointCurvatureNortheastSouthwestDirection",
	"HeaderPointDepthFreeSurface",
	"HeaderPointHorizon",
	"HeaderPointMaxSWE",
	"HeaderPointLatitude",
	"HeaderPointLongitude",
	"HeaderPointBedrockDepth",
	"HeaderDateDDMMYYYYhhmmLapseRates",
	"HeaderLapseRateTemp",
	"HeaderLapseRateDewTemp",
	"HeaderLapseRatePrec",
	"HeaderIDMeteoStation",
	"HeaderMeteoStationCoordinateX",
	"HeaderMeteoStationCoordinateY",
	"HeaderMeteoStationLatitude",
	"HeaderMeteoStationLongitude",
	"HeaderMeteoStationElevation",
	"HeaderMeteoStationSkyViewFactor",
	"HeaderMeteoStationStandardTime",
	"SuccessfulRunFile",
	"FailedRunFile",
	"SubfolderRecoveryFiles"};

