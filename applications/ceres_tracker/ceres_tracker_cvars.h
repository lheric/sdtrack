#pragma once

#include "../common/common_cvars.h"

static int& pyramid_levels =
    CVarUtils::CreateCVar<>("sd.PyramidLevels", 3, "");
static int& patch_size =
    CVarUtils::CreateCVar<>("sd.PatchSize", 7, "");
static int& ba_debug_level =
    CVarUtils::CreateCVar<>("debug.BaDebugLevel",-1, "");
static uint32_t& num_ba_poses =
    CVarUtils::CreateCVar<>("sd.NumBAPoses",10u, "");
static int& num_features =
    CVarUtils::CreateCVar<>("sd.NumFeatures",128, "");
static int& feature_cells =
    CVarUtils::CreateCVar<>("sd.FeatureCells",8, "");
static bool& do_outlier_rejection =
    CVarUtils::CreateCVar<>("sd.DoOutlierRejection", true, "");
static bool& reset_outliers =
    CVarUtils::CreateCVar<>("sd.ResetOutliers", false, "");
static double& outlier_threshold =
    CVarUtils::CreateCVar<>("sd.OutlierThreshold", 1.0, "");
static bool& use_dogleg =
    CVarUtils::CreateCVar<>("sd.UseDogleg", true, "");
static bool& do_keyframing =
    CVarUtils::CreateCVar<>("sd.DoKeyframing", true, "");
static bool& use_robust_norm_for_proj =
    CVarUtils::CreateCVar<>("sd.UseRobustNormForProj", true, "");
static int& num_ba_iterations =
    CVarUtils::CreateCVar<>("sd.NumBAIterations", 200, "");
static int& num_ceres_threads =
    CVarUtils::CreateCVar<>("sd.NumCeresThreads", 1, "");
static double& tracker_center_weight =
    CVarUtils::CreateCVar<>("sd.TrackerCenterWeight", 100.0, "");
static double& ncc_threshold =
    CVarUtils::CreateCVar<>("sd.NCCThreshold", 0.875, "");
static bool& do_bundle_adjustment =
    CVarUtils::CreateCVar<>("sd.DoBundleAdjustment", true, "");
static bool& do_calibration =
    CVarUtils::CreateCVar<>("sd.DoCalibration", false, "");
static bool& do_intrinsics_calibration =
    CVarUtils::CreateCVar<>("sd.DoIntrinsicsCalibration", false, "");
static bool& do_extrinsics_calibration =
    CVarUtils::CreateCVar<>("sd.DoExtrinsicsCalibration", false, "");
static bool& do_imu_ext_calibration =
    CVarUtils::CreateCVar<>("sd.DoImuExt", false, "");
static bool& optimize_rotation_only =
    CVarUtils::CreateCVar<>("sd.OptimizeRotationOnly", false, "");
static bool& use_imu =
    CVarUtils::CreateCVar<>("sd.UseImu", true, "");

