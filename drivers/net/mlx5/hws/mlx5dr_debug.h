/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright (c) 2022 NVIDIA Corporation & Affiliates
 */

#ifndef MLX5DR_DEBUG_H_
#define MLX5DR_DEBUG_H_

#define DEBUG_VERSION "1.0.DPDK"

enum mlx5dr_debug_res_type {
	MLX5DR_DEBUG_RES_TYPE_CONTEXT = 4000,
	MLX5DR_DEBUG_RES_TYPE_CONTEXT_ATTR = 4001,
	MLX5DR_DEBUG_RES_TYPE_CONTEXT_CAPS = 4002,
	MLX5DR_DEBUG_RES_TYPE_CONTEXT_SEND_ENGINE = 4003,
	MLX5DR_DEBUG_RES_TYPE_CONTEXT_SEND_RING = 4004,
	MLX5DR_DEBUG_RES_TYPE_CONTEXT_STC = 4005,

	MLX5DR_DEBUG_RES_TYPE_TABLE = 4100,

	MLX5DR_DEBUG_RES_TYPE_MATCHER = 4200,
	MLX5DR_DEBUG_RES_TYPE_MATCHER_ATTR = 4201,
	MLX5DR_DEBUG_RES_TYPE_MATCHER_MATCH_TEMPLATE = 4202,
	MLX5DR_DEBUG_RES_TYPE_MATCHER_TEMPLATE_MATCH_DEFINER = 4203,
	MLX5DR_DEBUG_RES_TYPE_MATCHER_ACTION_TEMPLATE = 4204,
	MLX5DR_DEBUG_RES_TYPE_MATCHER_TEMPLATE_HASH_DEFINER = 4205,
	MLX5DR_DEBUG_RES_TYPE_MATCHER_TEMPLATE_RANGE_DEFINER = 4206,
};

const char *mlx5dr_debug_action_type_to_str(enum mlx5dr_action_type action_type);

#endif /* MLX5DR_DEBUG_H_ */
