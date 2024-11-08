/* SPDX-License-Identifier: MIT */
/*
 * Copyright © 2019 Intel Corporation
 */

#ifndef __INTEL_QUIRKS_H__
#define __INTEL_QUIRKS_H__

#include <linux/types.h>

struct drm_i915_private;
struct intel_dp;
struct drm_dp_dpcd_ident;

enum intel_quirk_id {
	QUIRK_BACKLIGHT_PRESENT,
	QUIRK_INCREASE_DDI_DISABLED_TIME,
	QUIRK_INCREASE_T12_DELAY,
	QUIRK_INVERT_BRIGHTNESS,
	QUIRK_LVDS_SSC_DISABLE,
	QUIRK_NO_PPS_BACKLIGHT_POWER_HOOK,
};

void intel_init_quirks(struct drm_i915_private *i915);
void intel_init_dpcd_quirks(struct intel_dp *intel_dp,
			    const struct drm_dp_dpcd_ident *ident);
bool intel_has_quirk(struct drm_i915_private *i915, enum intel_quirk_id quirk);
bool intel_has_dpcd_quirk(struct intel_dp *intel_dp, enum intel_quirk_id quirk);

#endif /* __INTEL_QUIRKS_H__ */
