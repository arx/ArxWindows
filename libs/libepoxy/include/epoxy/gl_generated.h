/* GL dispatch header.
 * This is code-generated from the GL API XML files from Khronos.
 * 
 * Copyright (c) 2013-2017 The Khronos Group Inc.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 */

#pragma once
#include <inttypes.h>
#include <stddef.h>

#include "epoxy/common.h"
#define __khrplatform_h_ 1
typedef int8_t khronos_int8_t;
typedef int16_t khronos_int16_t;
typedef int32_t khronos_int32_t;
typedef int64_t khronos_int64_t;
typedef uint8_t khronos_uint8_t;
typedef uint16_t khronos_uint16_t;
typedef uint32_t khronos_uint32_t;
typedef uint64_t khronos_uint64_t;
typedef float khronos_float_t;
typedef long khronos_intptr_t;
typedef long khronos_ssize_t;
typedef unsigned long khronos_usize_t;
typedef uint64_t khronos_utime_nanoseconds_t;
typedef int64_t khronos_stime_nanoseconds_t;
#define KHRONOS_MAX_ENUM 0x7FFFFFFF
typedef enum {
    KHRONOS_FALSE = 0,
    KHRONOS_TRUE  = 1,
    KHRONOS_BOOLEAN_ENUM_FORCE_SIZE = KHRONOS_MAX_ENUM
} khronos_boolean_enum_t;
typedef uintptr_t khronos_uintptr_t;
typedef unsigned int GLenum;
typedef unsigned char GLboolean;
typedef unsigned int GLbitfield;
typedef void GLvoid;
typedef signed char GLbyte;
typedef short GLshort;
typedef int GLint;
typedef int GLclampx;
typedef unsigned char GLubyte;
typedef unsigned short GLushort;
typedef unsigned int GLuint;
typedef int GLsizei;
typedef float GLfloat;
typedef float GLclampf;
typedef double GLdouble;
typedef double GLclampd;
typedef void *GLeglClientBufferEXT;
typedef void *GLeglImageOES;
typedef char GLchar;
typedef char GLcharARB;
#ifdef __APPLE__
typedef void *GLhandleARB;
#else
typedef unsigned int GLhandleARB;
#endif
typedef unsigned short GLhalfARB;
typedef unsigned short GLhalf;
typedef GLint GLfixed;
typedef ptrdiff_t GLintptr;
typedef ptrdiff_t GLsizeiptr;
typedef int64_t GLint64;
typedef uint64_t GLuint64;
typedef ptrdiff_t GLintptrARB;
typedef ptrdiff_t GLsizeiptrARB;
typedef int64_t GLint64EXT;
typedef uint64_t GLuint64EXT;
typedef struct __GLsync *GLsync;
struct _cl_context;
struct _cl_event;
typedef void (APIENTRY *GLDEBUGPROC)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
typedef void (APIENTRY *GLDEBUGPROCARB)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
typedef void (APIENTRY *GLDEBUGPROCKHR)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
typedef void (APIENTRY *GLDEBUGPROCAMD)(GLuint id,GLenum category,GLenum severity,GLsizei length,const GLchar *message,void *userParam);
typedef unsigned short GLhalfNV;
typedef GLintptr GLvdpauSurfaceNV;
typedef void (APIENTRY *GLVULKANPROCNV)(void);

#define GL_ES_VERSION_2_0 1
#define GL_ES_VERSION_3_0 1
#define GL_ES_VERSION_3_1 1
#define GL_ES_VERSION_3_2 1
#define GL_SC_VERSION_2_0 1
#define GL_VERSION_1_0 1
#define GL_VERSION_1_1 1
#define GL_VERSION_1_2 1
#define GL_VERSION_1_3 1
#define GL_VERSION_1_4 1
#define GL_VERSION_1_5 1
#define GL_VERSION_2_0 1
#define GL_VERSION_2_1 1
#define GL_VERSION_3_0 1
#define GL_VERSION_3_1 1
#define GL_VERSION_3_2 1
#define GL_VERSION_3_3 1
#define GL_VERSION_4_0 1
#define GL_VERSION_4_1 1
#define GL_VERSION_4_2 1
#define GL_VERSION_4_3 1
#define GL_VERSION_4_4 1
#define GL_VERSION_4_5 1
#define GL_VERSION_4_6 1
#define GL_VERSION_ES_CM_1_0 1

#define GL_3DFX_multisample 1
#define GL_3DFX_tbuffer 1
#define GL_3DFX_texture_compression_FXT1 1
#define GL_AMD_blend_minmax_factor 1
#define GL_AMD_compressed_3DC_texture 1
#define GL_AMD_compressed_ATC_texture 1
#define GL_AMD_conservative_depth 1
#define GL_AMD_debug_output 1
#define GL_AMD_depth_clamp_separate 1
#define GL_AMD_draw_buffers_blend 1
#define GL_AMD_framebuffer_sample_positions 1
#define GL_AMD_gcn_shader 1
#define GL_AMD_gpu_shader_half_float 1
#define GL_AMD_gpu_shader_int16 1
#define GL_AMD_gpu_shader_int64 1
#define GL_AMD_interleaved_elements 1
#define GL_AMD_multi_draw_indirect 1
#define GL_AMD_name_gen_delete 1
#define GL_AMD_occlusion_query_event 1
#define GL_AMD_performance_monitor 1
#define GL_AMD_pinned_memory 1
#define GL_AMD_program_binary_Z400 1
#define GL_AMD_query_buffer_object 1
#define GL_AMD_sample_positions 1
#define GL_AMD_seamless_cubemap_per_texture 1
#define GL_AMD_shader_atomic_counter_ops 1
#define GL_AMD_shader_ballot 1
#define GL_AMD_shader_explicit_vertex_parameter 1
#define GL_AMD_shader_gpu_shader_half_float_fetch 1
#define GL_AMD_shader_image_load_store_lod 1
#define GL_AMD_shader_stencil_export 1
#define GL_AMD_shader_trinary_minmax 1
#define GL_AMD_sparse_texture 1
#define GL_AMD_stencil_operation_extended 1
#define GL_AMD_texture_gather_bias_lod 1
#define GL_AMD_texture_texture4 1
#define GL_AMD_transform_feedback3_lines_triangles 1
#define GL_AMD_transform_feedback4 1
#define GL_AMD_vertex_shader_layer 1
#define GL_AMD_vertex_shader_tessellator 1
#define GL_AMD_vertex_shader_viewport_index 1
#define GL_ANDROID_extension_pack_es31a 1
#define GL_ANGLE_depth_texture 1
#define GL_ANGLE_framebuffer_blit 1
#define GL_ANGLE_framebuffer_multisample 1
#define GL_ANGLE_instanced_arrays 1
#define GL_ANGLE_pack_reverse_row_order 1
#define GL_ANGLE_program_binary 1
#define GL_ANGLE_texture_compression_dxt3 1
#define GL_ANGLE_texture_compression_dxt5 1
#define GL_ANGLE_texture_usage 1
#define GL_ANGLE_translated_shader_source 1
#define GL_APPLE_aux_depth_stencil 1
#define GL_APPLE_client_storage 1
#define GL_APPLE_clip_distance 1
#define GL_APPLE_color_buffer_packed_float 1
#define GL_APPLE_copy_texture_levels 1
#define GL_APPLE_element_array 1
#define GL_APPLE_fence 1
#define GL_APPLE_float_pixels 1
#define GL_APPLE_flush_buffer_range 1
#define GL_APPLE_framebuffer_multisample 1
#define GL_APPLE_object_purgeable 1
#define GL_APPLE_rgb_422 1
#define GL_APPLE_row_bytes 1
#define GL_APPLE_specular_vector 1
#define GL_APPLE_sync 1
#define GL_APPLE_texture_2D_limited_npot 1
#define GL_APPLE_texture_format_BGRA8888 1
#define GL_APPLE_texture_max_level 1
#define GL_APPLE_texture_packed_float 1
#define GL_APPLE_texture_range 1
#define GL_APPLE_transform_hint 1
#define GL_APPLE_vertex_array_object 1
#define GL_APPLE_vertex_array_range 1
#define GL_APPLE_vertex_program_evaluators 1
#define GL_APPLE_ycbcr_422 1
#define GL_ARB_ES2_compatibility 1
#define GL_ARB_ES3_1_compatibility 1
#define GL_ARB_ES3_2_compatibility 1
#define GL_ARB_ES3_compatibility 1
#define GL_ARB_arrays_of_arrays 1
#define GL_ARB_base_instance 1
#define GL_ARB_bindless_texture 1
#define GL_ARB_blend_func_extended 1
#define GL_ARB_buffer_storage 1
#define GL_ARB_cl_event 1
#define GL_ARB_clear_buffer_object 1
#define GL_ARB_clear_texture 1
#define GL_ARB_clip_control 1
#define GL_ARB_color_buffer_float 1
#define GL_ARB_compatibility 1
#define GL_ARB_compressed_texture_pixel_storage 1
#define GL_ARB_compute_shader 1
#define GL_ARB_compute_variable_group_size 1
#define GL_ARB_conditional_render_inverted 1
#define GL_ARB_conservative_depth 1
#define GL_ARB_copy_buffer 1
#define GL_ARB_copy_image 1
#define GL_ARB_cull_distance 1
#define GL_ARB_debug_output 1
#define GL_ARB_depth_buffer_float 1
#define GL_ARB_depth_clamp 1
#define GL_ARB_depth_texture 1
#define GL_ARB_derivative_control 1
#define GL_ARB_direct_state_access 1
#define GL_ARB_draw_buffers 1
#define GL_ARB_draw_buffers_blend 1
#define GL_ARB_draw_elements_base_vertex 1
#define GL_ARB_draw_indirect 1
#define GL_ARB_draw_instanced 1
#define GL_ARB_enhanced_layouts 1
#define GL_ARB_explicit_attrib_location 1
#define GL_ARB_explicit_uniform_location 1
#define GL_ARB_fragment_coord_conventions 1
#define GL_ARB_fragment_layer_viewport 1
#define GL_ARB_fragment_program 1
#define GL_ARB_fragment_program_shadow 1
#define GL_ARB_fragment_shader 1
#define GL_ARB_fragment_shader_interlock 1
#define GL_ARB_framebuffer_no_attachments 1
#define GL_ARB_framebuffer_object 1
#define GL_ARB_framebuffer_sRGB 1
#define GL_ARB_geometry_shader4 1
#define GL_ARB_get_program_binary 1
#define GL_ARB_get_texture_sub_image 1
#define GL_ARB_gl_spirv 1
#define GL_ARB_gpu_shader5 1
#define GL_ARB_gpu_shader_fp64 1
#define GL_ARB_gpu_shader_int64 1
#define GL_ARB_half_float_pixel 1
#define GL_ARB_half_float_vertex 1
#define GL_ARB_imaging 1
#define GL_ARB_indirect_parameters 1
#define GL_ARB_instanced_arrays 1
#define GL_ARB_internalformat_query 1
#define GL_ARB_internalformat_query2 1
#define GL_ARB_invalidate_subdata 1
#define GL_ARB_map_buffer_alignment 1
#define GL_ARB_map_buffer_range 1
#define GL_ARB_matrix_palette 1
#define GL_ARB_multi_bind 1
#define GL_ARB_multi_draw_indirect 1
#define GL_ARB_multisample 1
#define GL_ARB_multitexture 1
#define GL_ARB_occlusion_query 1
#define GL_ARB_occlusion_query2 1
#define GL_ARB_parallel_shader_compile 1
#define GL_ARB_pipeline_statistics_query 1
#define GL_ARB_pixel_buffer_object 1
#define GL_ARB_point_parameters 1
#define GL_ARB_point_sprite 1
#define GL_ARB_polygon_offset_clamp 1
#define GL_ARB_post_depth_coverage 1
#define GL_ARB_program_interface_query 1
#define GL_ARB_provoking_vertex 1
#define GL_ARB_query_buffer_object 1
#define GL_ARB_robust_buffer_access_behavior 1
#define GL_ARB_robustness 1
#define GL_ARB_robustness_isolation 1
#define GL_ARB_sample_locations 1
#define GL_ARB_sample_shading 1
#define GL_ARB_sampler_objects 1
#define GL_ARB_seamless_cube_map 1
#define GL_ARB_seamless_cubemap_per_texture 1
#define GL_ARB_separate_shader_objects 1
#define GL_ARB_shader_atomic_counter_ops 1
#define GL_ARB_shader_atomic_counters 1
#define GL_ARB_shader_ballot 1
#define GL_ARB_shader_bit_encoding 1
#define GL_ARB_shader_clock 1
#define GL_ARB_shader_draw_parameters 1
#define GL_ARB_shader_group_vote 1
#define GL_ARB_shader_image_load_store 1
#define GL_ARB_shader_image_size 1
#define GL_ARB_shader_objects 1
#define GL_ARB_shader_precision 1
#define GL_ARB_shader_stencil_export 1
#define GL_ARB_shader_storage_buffer_object 1
#define GL_ARB_shader_subroutine 1
#define GL_ARB_shader_texture_image_samples 1
#define GL_ARB_shader_texture_lod 1
#define GL_ARB_shader_viewport_layer_array 1
#define GL_ARB_shading_language_100 1
#define GL_ARB_shading_language_420pack 1
#define GL_ARB_shading_language_include 1
#define GL_ARB_shading_language_packing 1
#define GL_ARB_shadow 1
#define GL_ARB_shadow_ambient 1
#define GL_ARB_sparse_buffer 1
#define GL_ARB_sparse_texture 1
#define GL_ARB_sparse_texture2 1
#define GL_ARB_sparse_texture_clamp 1
#define GL_ARB_spirv_extensions 1
#define GL_ARB_stencil_texturing 1
#define GL_ARB_sync 1
#define GL_ARB_tessellation_shader 1
#define GL_ARB_texture_barrier 1
#define GL_ARB_texture_border_clamp 1
#define GL_ARB_texture_buffer_object 1
#define GL_ARB_texture_buffer_object_rgb32 1
#define GL_ARB_texture_buffer_range 1
#define GL_ARB_texture_compression 1
#define GL_ARB_texture_compression_bptc 1
#define GL_ARB_texture_compression_rgtc 1
#define GL_ARB_texture_cube_map 1
#define GL_ARB_texture_cube_map_array 1
#define GL_ARB_texture_env_add 1
#define GL_ARB_texture_env_combine 1
#define GL_ARB_texture_env_crossbar 1
#define GL_ARB_texture_env_dot3 1
#define GL_ARB_texture_filter_anisotropic 1
#define GL_ARB_texture_filter_minmax 1
#define GL_ARB_texture_float 1
#define GL_ARB_texture_gather 1
#define GL_ARB_texture_mirror_clamp_to_edge 1
#define GL_ARB_texture_mirrored_repeat 1
#define GL_ARB_texture_multisample 1
#define GL_ARB_texture_non_power_of_two 1
#define GL_ARB_texture_query_levels 1
#define GL_ARB_texture_query_lod 1
#define GL_ARB_texture_rectangle 1
#define GL_ARB_texture_rg 1
#define GL_ARB_texture_rgb10_a2ui 1
#define GL_ARB_texture_stencil8 1
#define GL_ARB_texture_storage 1
#define GL_ARB_texture_storage_multisample 1
#define GL_ARB_texture_swizzle 1
#define GL_ARB_texture_view 1
#define GL_ARB_timer_query 1
#define GL_ARB_transform_feedback2 1
#define GL_ARB_transform_feedback3 1
#define GL_ARB_transform_feedback_instanced 1
#define GL_ARB_transform_feedback_overflow_query 1
#define GL_ARB_transpose_matrix 1
#define GL_ARB_uniform_buffer_object 1
#define GL_ARB_vertex_array_bgra 1
#define GL_ARB_vertex_array_object 1
#define GL_ARB_vertex_attrib_64bit 1
#define GL_ARB_vertex_attrib_binding 1
#define GL_ARB_vertex_blend 1
#define GL_ARB_vertex_buffer_object 1
#define GL_ARB_vertex_program 1
#define GL_ARB_vertex_shader 1
#define GL_ARB_vertex_type_10f_11f_11f_rev 1
#define GL_ARB_vertex_type_2_10_10_10_rev 1
#define GL_ARB_viewport_array 1
#define GL_ARB_window_pos 1
#define GL_ARM_mali_program_binary 1
#define GL_ARM_mali_shader_binary 1
#define GL_ARM_rgba8 1
#define GL_ARM_shader_framebuffer_fetch 1
#define GL_ARM_shader_framebuffer_fetch_depth_stencil 1
#define GL_ATI_draw_buffers 1
#define GL_ATI_element_array 1
#define GL_ATI_envmap_bumpmap 1
#define GL_ATI_fragment_shader 1
#define GL_ATI_map_object_buffer 1
#define GL_ATI_meminfo 1
#define GL_ATI_pixel_format_float 1
#define GL_ATI_pn_triangles 1
#define GL_ATI_separate_stencil 1
#define GL_ATI_text_fragment_shader 1
#define GL_ATI_texture_env_combine3 1
#define GL_ATI_texture_float 1
#define GL_ATI_texture_mirror_once 1
#define GL_ATI_vertex_array_object 1
#define GL_ATI_vertex_attrib_array_object 1
#define GL_ATI_vertex_streams 1
#define GL_DMP_program_binary 1
#define GL_DMP_shader_binary 1
#define GL_EXT_422_pixels 1
#define GL_EXT_EGL_image_array 1
#define GL_EXT_YUV_target 1
#define GL_EXT_abgr 1
#define GL_EXT_base_instance 1
#define GL_EXT_bgra 1
#define GL_EXT_bindable_uniform 1
#define GL_EXT_blend_color 1
#define GL_EXT_blend_equation_separate 1
#define GL_EXT_blend_func_extended 1
#define GL_EXT_blend_func_separate 1
#define GL_EXT_blend_logic_op 1
#define GL_EXT_blend_minmax 1
#define GL_EXT_blend_subtract 1
#define GL_EXT_buffer_storage 1
#define GL_EXT_clear_texture 1
#define GL_EXT_clip_control 1
#define GL_EXT_clip_cull_distance 1
#define GL_EXT_clip_volume_hint 1
#define GL_EXT_cmyka 1
#define GL_EXT_color_buffer_float 1
#define GL_EXT_color_buffer_half_float 1
#define GL_EXT_color_subtable 1
#define GL_EXT_compiled_vertex_array 1
#define GL_EXT_conservative_depth 1
#define GL_EXT_convolution 1
#define GL_EXT_coordinate_frame 1
#define GL_EXT_copy_image 1
#define GL_EXT_copy_texture 1
#define GL_EXT_cull_vertex 1
#define GL_EXT_debug_label 1
#define GL_EXT_debug_marker 1
#define GL_EXT_depth_bounds_test 1
#define GL_EXT_direct_state_access 1
#define GL_EXT_discard_framebuffer 1
#define GL_EXT_disjoint_timer_query 1
#define GL_EXT_draw_buffers 1
#define GL_EXT_draw_buffers2 1
#define GL_EXT_draw_buffers_indexed 1
#define GL_EXT_draw_elements_base_vertex 1
#define GL_EXT_draw_instanced 1
#define GL_EXT_draw_range_elements 1
#define GL_EXT_draw_transform_feedback 1
#define GL_EXT_external_buffer 1
#define GL_EXT_float_blend 1
#define GL_EXT_fog_coord 1
#define GL_EXT_framebuffer_blit 1
#define GL_EXT_framebuffer_multisample 1
#define GL_EXT_framebuffer_multisample_blit_scaled 1
#define GL_EXT_framebuffer_object 1
#define GL_EXT_framebuffer_sRGB 1
#define GL_EXT_geometry_point_size 1
#define GL_EXT_geometry_shader 1
#define GL_EXT_geometry_shader4 1
#define GL_EXT_gpu_program_parameters 1
#define GL_EXT_gpu_shader4 1
#define GL_EXT_gpu_shader5 1
#define GL_EXT_histogram 1
#define GL_EXT_index_array_formats 1
#define GL_EXT_index_func 1
#define GL_EXT_index_material 1
#define GL_EXT_index_texture 1
#define GL_EXT_instanced_arrays 1
#define GL_EXT_light_texture 1
#define GL_EXT_map_buffer_range 1
#define GL_EXT_memory_object 1
#define GL_EXT_memory_object_fd 1
#define GL_EXT_memory_object_win32 1
#define GL_EXT_misc_attribute 1
#define GL_EXT_multi_draw_arrays 1
#define GL_EXT_multi_draw_indirect 1
#define GL_EXT_multisample 1
#define GL_EXT_multisampled_compatibility 1
#define GL_EXT_multisampled_render_to_texture 1
#define GL_EXT_multiview_draw_buffers 1
#define GL_EXT_occlusion_query_boolean 1
#define GL_EXT_packed_depth_stencil 1
#define GL_EXT_packed_float 1
#define GL_EXT_packed_pixels 1
#define GL_EXT_paletted_texture 1
#define GL_EXT_pixel_buffer_object 1
#define GL_EXT_pixel_transform 1
#define GL_EXT_pixel_transform_color_table 1
#define GL_EXT_point_parameters 1
#define GL_EXT_polygon_offset 1
#define GL_EXT_polygon_offset_clamp 1
#define GL_EXT_post_depth_coverage 1
#define GL_EXT_primitive_bounding_box 1
#define GL_EXT_protected_textures 1
#define GL_EXT_provoking_vertex 1
#define GL_EXT_pvrtc_sRGB 1
#define GL_EXT_raster_multisample 1
#define GL_EXT_read_format_bgra 1
#define GL_EXT_render_snorm 1
#define GL_EXT_rescale_normal 1
#define GL_EXT_robustness 1
#define GL_EXT_sRGB 1
#define GL_EXT_sRGB_write_control 1
#define GL_EXT_secondary_color 1
#define GL_EXT_semaphore 1
#define GL_EXT_semaphore_fd 1
#define GL_EXT_semaphore_win32 1
#define GL_EXT_separate_shader_objects 1
#define GL_EXT_separate_specular_color 1
#define GL_EXT_shader_framebuffer_fetch 1
#define GL_EXT_shader_group_vote 1
#define GL_EXT_shader_image_load_formatted 1
#define GL_EXT_shader_image_load_store 1
#define GL_EXT_shader_implicit_conversions 1
#define GL_EXT_shader_integer_mix 1
#define GL_EXT_shader_io_blocks 1
#define GL_EXT_shader_non_constant_global_initializers 1
#define GL_EXT_shader_pixel_local_storage 1
#define GL_EXT_shader_pixel_local_storage2 1
#define GL_EXT_shader_texture_lod 1
#define GL_EXT_shadow_funcs 1
#define GL_EXT_shadow_samplers 1
#define GL_EXT_shared_texture_palette 1
#define GL_EXT_sparse_texture 1
#define GL_EXT_sparse_texture2 1
#define GL_EXT_stencil_clear_tag 1
#define GL_EXT_stencil_two_side 1
#define GL_EXT_stencil_wrap 1
#define GL_EXT_subtexture 1
#define GL_EXT_tessellation_point_size 1
#define GL_EXT_tessellation_shader 1
#define GL_EXT_texture 1
#define GL_EXT_texture3D 1
#define GL_EXT_texture_array 1
#define GL_EXT_texture_border_clamp 1
#define GL_EXT_texture_buffer 1
#define GL_EXT_texture_buffer_object 1
#define GL_EXT_texture_compression_astc_decode_mode 1
#define GL_EXT_texture_compression_bptc 1
#define GL_EXT_texture_compression_dxt1 1
#define GL_EXT_texture_compression_latc 1
#define GL_EXT_texture_compression_rgtc 1
#define GL_EXT_texture_compression_s3tc 1
#define GL_EXT_texture_compression_s3tc_srgb 1
#define GL_EXT_texture_cube_map 1
#define GL_EXT_texture_cube_map_array 1
#define GL_EXT_texture_env_add 1
#define GL_EXT_texture_env_combine 1
#define GL_EXT_texture_env_dot3 1
#define GL_EXT_texture_filter_anisotropic 1
#define GL_EXT_texture_filter_minmax 1
#define GL_EXT_texture_format_BGRA8888 1
#define GL_EXT_texture_integer 1
#define GL_EXT_texture_lod_bias 1
#define GL_EXT_texture_mirror_clamp 1
#define GL_EXT_texture_mirror_clamp_to_edge 1
#define GL_EXT_texture_norm16 1
#define GL_EXT_texture_object 1
#define GL_EXT_texture_perturb_normal 1
#define GL_EXT_texture_rg 1
#define GL_EXT_texture_sRGB 1
#define GL_EXT_texture_sRGB_R8 1
#define GL_EXT_texture_sRGB_RG8 1
#define GL_EXT_texture_sRGB_decode 1
#define GL_EXT_texture_shared_exponent 1
#define GL_EXT_texture_snorm 1
#define GL_EXT_texture_storage 1
#define GL_EXT_texture_swizzle 1
#define GL_EXT_texture_type_2_10_10_10_REV 1
#define GL_EXT_texture_view 1
#define GL_EXT_timer_query 1
#define GL_EXT_transform_feedback 1
#define GL_EXT_unpack_subimage 1
#define GL_EXT_vertex_array 1
#define GL_EXT_vertex_array_bgra 1
#define GL_EXT_vertex_attrib_64bit 1
#define GL_EXT_vertex_shader 1
#define GL_EXT_vertex_weighting 1
#define GL_EXT_win32_keyed_mutex 1
#define GL_EXT_window_rectangles 1
#define GL_EXT_x11_sync_object 1
#define GL_FJ_shader_binary_GCCSO 1
#define GL_GREMEDY_frame_terminator 1
#define GL_GREMEDY_string_marker 1
#define GL_HP_convolution_border_modes 1
#define GL_HP_image_transform 1
#define GL_HP_occlusion_test 1
#define GL_HP_texture_lighting 1
#define GL_IBM_cull_vertex 1
#define GL_IBM_multimode_draw_arrays 1
#define GL_IBM_rasterpos_clip 1
#define GL_IBM_static_data 1
#define GL_IBM_texture_mirrored_repeat 1
#define GL_IBM_vertex_array_lists 1
#define GL_IMG_bindless_texture 1
#define GL_IMG_framebuffer_downsample 1
#define GL_IMG_multisampled_render_to_texture 1
#define GL_IMG_program_binary 1
#define GL_IMG_read_format 1
#define GL_IMG_shader_binary 1
#define GL_IMG_texture_compression_pvrtc 1
#define GL_IMG_texture_compression_pvrtc2 1
#define GL_IMG_texture_env_enhanced_fixed_function 1
#define GL_IMG_texture_filter_cubic 1
#define GL_IMG_user_clip_plane 1
#define GL_INGR_blend_func_separate 1
#define GL_INGR_color_clamp 1
#define GL_INGR_interlace_read 1
#define GL_INTEL_conservative_rasterization 1
#define GL_INTEL_fragment_shader_ordering 1
#define GL_INTEL_framebuffer_CMAA 1
#define GL_INTEL_map_texture 1
#define GL_INTEL_parallel_arrays 1
#define GL_INTEL_performance_query 1
#define GL_KHR_blend_equation_advanced 1
#define GL_KHR_blend_equation_advanced_coherent 1
#define GL_KHR_context_flush_control 1
#define GL_KHR_debug 1
#define GL_KHR_no_error 1
#define GL_KHR_parallel_shader_compile 1
#define GL_KHR_robust_buffer_access_behavior 1
#define GL_KHR_robustness 1
#define GL_KHR_texture_compression_astc_hdr 1
#define GL_KHR_texture_compression_astc_ldr 1
#define GL_KHR_texture_compression_astc_sliced_3d 1
#define GL_MESAX_texture_stack 1
#define GL_MESA_pack_invert 1
#define GL_MESA_program_binary_formats 1
#define GL_MESA_resize_buffers 1
#define GL_MESA_shader_integer_functions 1
#define GL_MESA_tile_raster_order 1
#define GL_MESA_window_pos 1
#define GL_MESA_ycbcr_texture 1
#define GL_NVX_blend_equation_advanced_multi_draw_buffers 1
#define GL_NVX_conditional_render 1
#define GL_NVX_cross_process_interop 1
#define GL_NVX_gpu_memory_info 1
#define GL_NVX_linked_gpu_multicast 1
#define GL_NV_alpha_to_coverage_dither_control 1
#define GL_NV_bindless_multi_draw_indirect 1
#define GL_NV_bindless_multi_draw_indirect_count 1
#define GL_NV_bindless_texture 1
#define GL_NV_blend_equation_advanced 1
#define GL_NV_blend_equation_advanced_coherent 1
#define GL_NV_blend_minmax_factor 1
#define GL_NV_blend_square 1
#define GL_NV_clip_space_w_scaling 1
#define GL_NV_command_list 1
#define GL_NV_compute_program5 1
#define GL_NV_conditional_render 1
#define GL_NV_conservative_raster 1
#define GL_NV_conservative_raster_dilate 1
#define GL_NV_conservative_raster_pre_snap 1
#define GL_NV_conservative_raster_pre_snap_triangles 1
#define GL_NV_conservative_raster_underestimation 1
#define GL_NV_copy_buffer 1
#define GL_NV_copy_depth_to_color 1
#define GL_NV_copy_image 1
#define GL_NV_coverage_sample 1
#define GL_NV_deep_texture3D 1
#define GL_NV_depth_buffer_float 1
#define GL_NV_depth_clamp 1
#define GL_NV_depth_nonlinear 1
#define GL_NV_draw_buffers 1
#define GL_NV_draw_instanced 1
#define GL_NV_draw_texture 1
#define GL_NV_draw_vulkan_image 1
#define GL_NV_evaluators 1
#define GL_NV_explicit_attrib_location 1
#define GL_NV_explicit_multisample 1
#define GL_NV_fbo_color_attachments 1
#define GL_NV_fence 1
#define GL_NV_fill_rectangle 1
#define GL_NV_float_buffer 1
#define GL_NV_fog_distance 1
#define GL_NV_fragment_coverage_to_color 1
#define GL_NV_fragment_program 1
#define GL_NV_fragment_program2 1
#define GL_NV_fragment_program4 1
#define GL_NV_fragment_program_option 1
#define GL_NV_fragment_shader_interlock 1
#define GL_NV_framebuffer_blit 1
#define GL_NV_framebuffer_mixed_samples 1
#define GL_NV_framebuffer_multisample 1
#define GL_NV_framebuffer_multisample_coverage 1
#define GL_NV_generate_mipmap_sRGB 1
#define GL_NV_geometry_program4 1
#define GL_NV_geometry_shader4 1
#define GL_NV_geometry_shader_passthrough 1
#define GL_NV_gpu_multicast 1
#define GL_NV_gpu_program4 1
#define GL_NV_gpu_program5 1
#define GL_NV_gpu_program5_mem_extended 1
#define GL_NV_gpu_shader5 1
#define GL_NV_half_float 1
#define GL_NV_image_formats 1
#define GL_NV_instanced_arrays 1
#define GL_NV_internalformat_sample_query 1
#define GL_NV_light_max_exponent 1
#define GL_NV_multisample_coverage 1
#define GL_NV_multisample_filter_hint 1
#define GL_NV_non_square_matrices 1
#define GL_NV_occlusion_query 1
#define GL_NV_packed_depth_stencil 1
#define GL_NV_parameter_buffer_object 1
#define GL_NV_parameter_buffer_object2 1
#define GL_NV_path_rendering 1
#define GL_NV_path_rendering_shared_edge 1
#define GL_NV_pixel_buffer_object 1
#define GL_NV_pixel_data_range 1
#define GL_NV_point_sprite 1
#define GL_NV_polygon_mode 1
#define GL_NV_present_video 1
#define GL_NV_primitive_restart 1
#define GL_NV_query_resource 1
#define GL_NV_query_resource_tag 1
#define GL_NV_read_buffer 1
#define GL_NV_read_buffer_front 1
#define GL_NV_read_depth 1
#define GL_NV_read_depth_stencil 1
#define GL_NV_read_stencil 1
#define GL_NV_register_combiners 1
#define GL_NV_register_combiners2 1
#define GL_NV_robustness_video_memory_purge 1
#define GL_NV_sRGB_formats 1
#define GL_NV_sample_locations 1
#define GL_NV_sample_mask_override_coverage 1
#define GL_NV_shader_atomic_counters 1
#define GL_NV_shader_atomic_float 1
#define GL_NV_shader_atomic_float64 1
#define GL_NV_shader_atomic_fp16_vector 1
#define GL_NV_shader_atomic_int64 1
#define GL_NV_shader_buffer_load 1
#define GL_NV_shader_buffer_store 1
#define GL_NV_shader_noperspective_interpolation 1
#define GL_NV_shader_storage_buffer_object 1
#define GL_NV_shader_thread_group 1
#define GL_NV_shader_thread_shuffle 1
#define GL_NV_shadow_samplers_array 1
#define GL_NV_shadow_samplers_cube 1
#define GL_NV_stereo_view_rendering 1
#define GL_NV_tessellation_program5 1
#define GL_NV_texgen_emboss 1
#define GL_NV_texgen_reflection 1
#define GL_NV_texture_barrier 1
#define GL_NV_texture_border_clamp 1
#define GL_NV_texture_compression_s3tc_update 1
#define GL_NV_texture_compression_vtc 1
#define GL_NV_texture_env_combine4 1
#define GL_NV_texture_expand_normal 1
#define GL_NV_texture_multisample 1
#define GL_NV_texture_npot_2D_mipmap 1
#define GL_NV_texture_rectangle 1
#define GL_NV_texture_rectangle_compressed 1
#define GL_NV_texture_shader 1
#define GL_NV_texture_shader2 1
#define GL_NV_texture_shader3 1
#define GL_NV_transform_feedback 1
#define GL_NV_transform_feedback2 1
#define GL_NV_uniform_buffer_unified_memory 1
#define GL_NV_vdpau_interop 1
#define GL_NV_vertex_array_range 1
#define GL_NV_vertex_array_range2 1
#define GL_NV_vertex_attrib_integer_64bit 1
#define GL_NV_vertex_buffer_unified_memory 1
#define GL_NV_vertex_program 1
#define GL_NV_vertex_program1_1 1
#define GL_NV_vertex_program2 1
#define GL_NV_vertex_program2_option 1
#define GL_NV_vertex_program3 1
#define GL_NV_vertex_program4 1
#define GL_NV_video_capture 1
#define GL_NV_viewport_array 1
#define GL_NV_viewport_array2 1
#define GL_NV_viewport_swizzle 1
#define GL_OES_EGL_image 1
#define GL_OES_EGL_image_external 1
#define GL_OES_EGL_image_external_essl3 1
#define GL_OES_blend_equation_separate 1
#define GL_OES_blend_func_separate 1
#define GL_OES_blend_subtract 1
#define GL_OES_byte_coordinates 1
#define GL_OES_compressed_ETC1_RGB8_sub_texture 1
#define GL_OES_compressed_ETC1_RGB8_texture 1
#define GL_OES_compressed_paletted_texture 1
#define GL_OES_copy_image 1
#define GL_OES_depth24 1
#define GL_OES_depth32 1
#define GL_OES_depth_texture 1
#define GL_OES_draw_buffers_indexed 1
#define GL_OES_draw_elements_base_vertex 1
#define GL_OES_draw_texture 1
#define GL_OES_element_index_uint 1
#define GL_OES_extended_matrix_palette 1
#define GL_OES_fbo_render_mipmap 1
#define GL_OES_fixed_point 1
#define GL_OES_fragment_precision_high 1
#define GL_OES_framebuffer_object 1
#define GL_OES_geometry_point_size 1
#define GL_OES_geometry_shader 1
#define GL_OES_get_program_binary 1
#define GL_OES_gpu_shader5 1
#define GL_OES_mapbuffer 1
#define GL_OES_matrix_get 1
#define GL_OES_matrix_palette 1
#define GL_OES_packed_depth_stencil 1
#define GL_OES_point_size_array 1
#define GL_OES_point_sprite 1
#define GL_OES_primitive_bounding_box 1
#define GL_OES_query_matrix 1
#define GL_OES_read_format 1
#define GL_OES_required_internalformat 1
#define GL_OES_rgb8_rgba8 1
#define GL_OES_sample_shading 1
#define GL_OES_sample_variables 1
#define GL_OES_shader_image_atomic 1
#define GL_OES_shader_io_blocks 1
#define GL_OES_shader_multisample_interpolation 1
#define GL_OES_single_precision 1
#define GL_OES_standard_derivatives 1
#define GL_OES_stencil1 1
#define GL_OES_stencil4 1
#define GL_OES_stencil8 1
#define GL_OES_stencil_wrap 1
#define GL_OES_surfaceless_context 1
#define GL_OES_tessellation_point_size 1
#define GL_OES_tessellation_shader 1
#define GL_OES_texture_3D 1
#define GL_OES_texture_border_clamp 1
#define GL_OES_texture_buffer 1
#define GL_OES_texture_compression_astc 1
#define GL_OES_texture_cube_map 1
#define GL_OES_texture_cube_map_array 1
#define GL_OES_texture_env_crossbar 1
#define GL_OES_texture_float 1
#define GL_OES_texture_float_linear 1
#define GL_OES_texture_half_float 1
#define GL_OES_texture_half_float_linear 1
#define GL_OES_texture_mirrored_repeat 1
#define GL_OES_texture_npot 1
#define GL_OES_texture_stencil8 1
#define GL_OES_texture_storage_multisample_2d_array 1
#define GL_OES_texture_view 1
#define GL_OES_vertex_array_object 1
#define GL_OES_vertex_half_float 1
#define GL_OES_vertex_type_10_10_10_2 1
#define GL_OES_viewport_array 1
#define GL_OML_interlace 1
#define GL_OML_resample 1
#define GL_OML_subsample 1
#define GL_OVR_multiview 1
#define GL_OVR_multiview2 1
#define GL_OVR_multiview_multisampled_render_to_texture 1
#define GL_PGI_misc_hints 1
#define GL_PGI_vertex_hints 1
#define GL_QCOM_alpha_test 1
#define GL_QCOM_binning_control 1
#define GL_QCOM_driver_control 1
#define GL_QCOM_extended_get 1
#define GL_QCOM_extended_get2 1
#define GL_QCOM_framebuffer_foveated 1
#define GL_QCOM_perfmon_global_mode 1
#define GL_QCOM_shader_framebuffer_fetch_noncoherent 1
#define GL_QCOM_texture_foveated 1
#define GL_QCOM_tiled_rendering 1
#define GL_QCOM_writeonly_rendering 1
#define GL_REND_screen_coordinates 1
#define GL_S3_s3tc 1
#define GL_SGIS_detail_texture 1
#define GL_SGIS_fog_function 1
#define GL_SGIS_generate_mipmap 1
#define GL_SGIS_multisample 1
#define GL_SGIS_pixel_texture 1
#define GL_SGIS_point_line_texgen 1
#define GL_SGIS_point_parameters 1
#define GL_SGIS_sharpen_texture 1
#define GL_SGIS_texture4D 1
#define GL_SGIS_texture_border_clamp 1
#define GL_SGIS_texture_color_mask 1
#define GL_SGIS_texture_edge_clamp 1
#define GL_SGIS_texture_filter4 1
#define GL_SGIS_texture_lod 1
#define GL_SGIS_texture_select 1
#define GL_SGIX_async 1
#define GL_SGIX_async_histogram 1
#define GL_SGIX_async_pixel 1
#define GL_SGIX_blend_alpha_minmax 1
#define GL_SGIX_calligraphic_fragment 1
#define GL_SGIX_clipmap 1
#define GL_SGIX_convolution_accuracy 1
#define GL_SGIX_depth_pass_instrument 1
#define GL_SGIX_depth_texture 1
#define GL_SGIX_flush_raster 1
#define GL_SGIX_fog_offset 1
#define GL_SGIX_fragment_lighting 1
#define GL_SGIX_framezoom 1
#define GL_SGIX_igloo_interface 1
#define GL_SGIX_instruments 1
#define GL_SGIX_interlace 1
#define GL_SGIX_ir_instrument1 1
#define GL_SGIX_list_priority 1
#define GL_SGIX_pixel_texture 1
#define GL_SGIX_pixel_tiles 1
#define GL_SGIX_polynomial_ffd 1
#define GL_SGIX_reference_plane 1
#define GL_SGIX_resample 1
#define GL_SGIX_scalebias_hint 1
#define GL_SGIX_shadow 1
#define GL_SGIX_shadow_ambient 1
#define GL_SGIX_sprite 1
#define GL_SGIX_subsample 1
#define GL_SGIX_tag_sample_buffer 1
#define GL_SGIX_texture_add_env 1
#define GL_SGIX_texture_coordinate_clamp 1
#define GL_SGIX_texture_lod_bias 1
#define GL_SGIX_texture_multi_buffer 1
#define GL_SGIX_texture_scale_bias 1
#define GL_SGIX_vertex_preclip 1
#define GL_SGIX_ycrcb 1
#define GL_SGIX_ycrcb_subsample 1
#define GL_SGIX_ycrcba 1
#define GL_SGI_color_matrix 1
#define GL_SGI_color_table 1
#define GL_SGI_texture_color_table 1
#define GL_SUNX_constant_data 1
#define GL_SUN_convolution_border_modes 1
#define GL_SUN_global_alpha 1
#define GL_SUN_mesh_array 1
#define GL_SUN_slice_accum 1
#define GL_SUN_triangle_list 1
#define GL_SUN_vertex 1
#define GL_VIV_shader_binary 1
#define GL_WIN_phong_shading 1
#define GL_WIN_specular_fog 1

#define GL_NEXT_BUFFER_NV                                                          -2
#define GL_SKIP_COMPONENTS4_NV                                                     -3
#define GL_SKIP_COMPONENTS3_NV                                                     -4
#define GL_SKIP_COMPONENTS2_NV                                                     -5
#define GL_SKIP_COMPONENTS1_NV                                                     -6
#define GL_FALSE                                                                   0
#define GL_LAYOUT_DEFAULT_INTEL                                                    0
#define GL_NONE                                                                    0
#define GL_NONE_OES                                                                0
#define GL_NO_ERROR                                                                0
#define GL_ZERO                                                                    0
#define GL_CLOSE_PATH_NV                                                           0x00
#define GL_POINTS                                                                  0x0000
#define GL_TERMINATE_SEQUENCE_COMMAND_NV                                           0x0000
#define GL_PERFQUERY_SINGLE_CONTEXT_INTEL                                          0x00000000
#define GL_2X_BIT_ATI                                                              0x00000001
#define GL_CLIENT_PIXEL_STORE_BIT                                                  0x00000001
#define GL_COLOR_BUFFER_BIT0_QCOM                                                  0x00000001
#define GL_CONTEXT_CORE_PROFILE_BIT                                                0x00000001
#define GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT                                     0x00000001
#define GL_CURRENT_BIT                                                             0x00000001
#define GL_FOVEATION_ENABLE_BIT_QCOM                                               0x00000001
#define GL_PERFQUERY_GLOBAL_CONTEXT_INTEL                                          0x00000001
#define GL_QUERY_DEPTH_PASS_EVENT_BIT_AMD                                          0x00000001
#define GL_RED_BIT_ATI                                                             0x00000001
#define GL_SYNC_FLUSH_COMMANDS_BIT                                                 0x00000001
#define GL_SYNC_FLUSH_COMMANDS_BIT_APPLE                                           0x00000001
#define GL_TEXTURE_DEFORMATION_BIT_SGIX                                            0x00000001
#define GL_TEXTURE_STORAGE_SPARSE_BIT_AMD                                          0x00000001
#define GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT                                         0x00000001
#define GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT                                     0x00000001
#define GL_VERTEX_SHADER_BIT                                                       0x00000001
#define GL_VERTEX_SHADER_BIT_EXT                                                   0x00000001
#define GL_4X_BIT_ATI                                                              0x00000002
#define GL_CLIENT_VERTEX_ARRAY_BIT                                                 0x00000002
#define GL_COLOR_BUFFER_BIT1_QCOM                                                  0x00000002
#define GL_COMP_BIT_ATI                                                            0x00000002
#define GL_CONTEXT_COMPATIBILITY_PROFILE_BIT                                       0x00000002
#define GL_CONTEXT_FLAG_DEBUG_BIT                                                  0x00000002
#define GL_CONTEXT_FLAG_DEBUG_BIT_KHR                                              0x00000002
#define GL_ELEMENT_ARRAY_BARRIER_BIT                                               0x00000002
#define GL_ELEMENT_ARRAY_BARRIER_BIT_EXT                                           0x00000002
#define GL_FOVEATION_SCALED_BIN_METHOD_BIT_QCOM                                    0x00000002
#define GL_FRAGMENT_SHADER_BIT                                                     0x00000002
#define GL_FRAGMENT_SHADER_BIT_EXT                                                 0x00000002
#define GL_GEOMETRY_DEFORMATION_BIT_SGIX                                           0x00000002
#define GL_GREEN_BIT_ATI                                                           0x00000002
#define GL_POINT_BIT                                                               0x00000002
#define GL_QUERY_DEPTH_FAIL_EVENT_BIT_AMD                                          0x00000002
#define GL_8X_BIT_ATI                                                              0x00000004
#define GL_BLUE_BIT_ATI                                                            0x00000004
#define GL_COLOR_BUFFER_BIT2_QCOM                                                  0x00000004
#define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT                                          0x00000004
#define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB                                      0x00000004
#define GL_GEOMETRY_SHADER_BIT                                                     0x00000004
#define GL_GEOMETRY_SHADER_BIT_EXT                                                 0x00000004
#define GL_GEOMETRY_SHADER_BIT_OES                                                 0x00000004
#define GL_LINE_BIT                                                                0x00000004
#define GL_NEGATE_BIT_ATI                                                          0x00000004
#define GL_QUERY_STENCIL_FAIL_EVENT_BIT_AMD                                        0x00000004
#define GL_UNIFORM_BARRIER_BIT                                                     0x00000004
#define GL_UNIFORM_BARRIER_BIT_EXT                                                 0x00000004
#define GL_VERTEX23_BIT_PGI                                                        0x00000004
#define GL_BIAS_BIT_ATI                                                            0x00000008
#define GL_COLOR_BUFFER_BIT3_QCOM                                                  0x00000008
#define GL_CONTEXT_FLAG_NO_ERROR_BIT                                               0x00000008
#define GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR                                           0x00000008
#define GL_HALF_BIT_ATI                                                            0x00000008
#define GL_POLYGON_BIT                                                             0x00000008
#define GL_QUERY_DEPTH_BOUNDS_FAIL_EVENT_BIT_AMD                                   0x00000008
#define GL_TESS_CONTROL_SHADER_BIT                                                 0x00000008
#define GL_TESS_CONTROL_SHADER_BIT_EXT                                             0x00000008
#define GL_TESS_CONTROL_SHADER_BIT_OES                                             0x00000008
#define GL_TEXTURE_FETCH_BARRIER_BIT                                               0x00000008
#define GL_TEXTURE_FETCH_BARRIER_BIT_EXT                                           0x00000008
#define GL_VERTEX4_BIT_PGI                                                         0x00000008
#define GL_COLOR_BUFFER_BIT4_QCOM                                                  0x00000010
#define GL_CONTEXT_FLAG_PROTECTED_CONTENT_BIT_EXT                                  0x00000010
#define GL_POLYGON_STIPPLE_BIT                                                     0x00000010
#define GL_QUARTER_BIT_ATI                                                         0x00000010
#define GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV                                     0x00000010
#define GL_TESS_EVALUATION_SHADER_BIT                                              0x00000010
#define GL_TESS_EVALUATION_SHADER_BIT_EXT                                          0x00000010
#define GL_TESS_EVALUATION_SHADER_BIT_OES                                          0x00000010
#define GL_COLOR_BUFFER_BIT5_QCOM                                                  0x00000020
#define GL_COMPUTE_SHADER_BIT                                                      0x00000020
#define GL_EIGHTH_BIT_ATI                                                          0x00000020
#define GL_PIXEL_MODE_BIT                                                          0x00000020
#define GL_SHADER_IMAGE_ACCESS_BARRIER_BIT                                         0x00000020
#define GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT                                     0x00000020
#define GL_COLOR_BUFFER_BIT6_QCOM                                                  0x00000040
#define GL_COMMAND_BARRIER_BIT                                                     0x00000040
#define GL_COMMAND_BARRIER_BIT_EXT                                                 0x00000040
#define GL_LIGHTING_BIT                                                            0x00000040
#define GL_SATURATE_BIT_ATI                                                        0x00000040
#define GL_COLOR_BUFFER_BIT7_QCOM                                                  0x00000080
#define GL_FOG_BIT                                                                 0x00000080
#define GL_PIXEL_BUFFER_BARRIER_BIT                                                0x00000080
#define GL_PIXEL_BUFFER_BARRIER_BIT_EXT                                            0x00000080
#define GL_DEPTH_BUFFER_BIT                                                        0x00000100
#define GL_DEPTH_BUFFER_BIT0_QCOM                                                  0x00000100
#define GL_TEXTURE_UPDATE_BARRIER_BIT                                              0x00000100
#define GL_TEXTURE_UPDATE_BARRIER_BIT_EXT                                          0x00000100
#define GL_ACCUM_BUFFER_BIT                                                        0x00000200
#define GL_BUFFER_UPDATE_BARRIER_BIT                                               0x00000200
#define GL_BUFFER_UPDATE_BARRIER_BIT_EXT                                           0x00000200
#define GL_DEPTH_BUFFER_BIT1_QCOM                                                  0x00000200
#define GL_DEPTH_BUFFER_BIT2_QCOM                                                  0x00000400
#define GL_FRAMEBUFFER_BARRIER_BIT                                                 0x00000400
#define GL_FRAMEBUFFER_BARRIER_BIT_EXT                                             0x00000400
#define GL_STENCIL_BUFFER_BIT                                                      0x00000400
#define GL_DEPTH_BUFFER_BIT3_QCOM                                                  0x00000800
#define GL_TRANSFORM_FEEDBACK_BARRIER_BIT                                          0x00000800
#define GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT                                      0x00000800
#define GL_VIEWPORT_BIT                                                            0x00000800
#define GL_ATOMIC_COUNTER_BARRIER_BIT                                              0x00001000
#define GL_ATOMIC_COUNTER_BARRIER_BIT_EXT                                          0x00001000
#define GL_DEPTH_BUFFER_BIT4_QCOM                                                  0x00001000
#define GL_TRANSFORM_BIT                                                           0x00001000
#define GL_DEPTH_BUFFER_BIT5_QCOM                                                  0x00002000
#define GL_ENABLE_BIT                                                              0x00002000
#define GL_SHADER_STORAGE_BARRIER_BIT                                              0x00002000
#define GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT                                        0x00004000
#define GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT_EXT                                    0x00004000
#define GL_COLOR_BUFFER_BIT                                                        0x00004000
#define GL_DEPTH_BUFFER_BIT6_QCOM                                                  0x00004000
#define GL_COVERAGE_BUFFER_BIT_NV                                                  0x00008000
#define GL_DEPTH_BUFFER_BIT7_QCOM                                                  0x00008000
#define GL_HINT_BIT                                                                0x00008000
#define GL_QUERY_BUFFER_BARRIER_BIT                                                0x00008000
#define GL_LINES                                                                   0x0001
#define GL_MAP_READ_BIT                                                            0x0001
#define GL_MAP_READ_BIT_EXT                                                        0x0001
#define GL_NOP_COMMAND_NV                                                          0x0001
#define GL_RESTART_SUN                                                             0x0001
#define GL_TRACE_OPERATIONS_BIT_MESA                                               0x0001
#define GL_COLOR3_BIT_PGI                                                          0x00010000
#define GL_EVAL_BIT                                                                0x00010000
#define GL_FONT_X_MIN_BOUNDS_BIT_NV                                                0x00010000
#define GL_STENCIL_BUFFER_BIT0_QCOM                                                0x00010000
#define GL_DRAW_ELEMENTS_COMMAND_NV                                                0x0002
#define GL_LINE_LOOP                                                               0x0002
#define GL_MAP_WRITE_BIT                                                           0x0002
#define GL_MAP_WRITE_BIT_EXT                                                       0x0002
#define GL_REPLACE_MIDDLE_SUN                                                      0x0002
#define GL_TRACE_PRIMITIVES_BIT_MESA                                               0x0002
#define GL_COLOR4_BIT_PGI                                                          0x00020000
#define GL_FONT_Y_MIN_BOUNDS_BIT_NV                                                0x00020000
#define GL_LIST_BIT                                                                0x00020000
#define GL_STENCIL_BUFFER_BIT1_QCOM                                                0x00020000
#define GL_DRAW_ARRAYS_COMMAND_NV                                                  0x0003
#define GL_LINE_STRIP                                                              0x0003
#define GL_REPLACE_OLDEST_SUN                                                      0x0003
#define GL_DRAW_ELEMENTS_STRIP_COMMAND_NV                                          0x0004
#define GL_MAP_INVALIDATE_RANGE_BIT                                                0x0004
#define GL_MAP_INVALIDATE_RANGE_BIT_EXT                                            0x0004
#define GL_TRACE_ARRAYS_BIT_MESA                                                   0x0004
#define GL_TRIANGLES                                                               0x0004
#define GL_EDGEFLAG_BIT_PGI                                                        0x00040000
#define GL_FONT_X_MAX_BOUNDS_BIT_NV                                                0x00040000
#define GL_STENCIL_BUFFER_BIT2_QCOM                                                0x00040000
#define GL_TEXTURE_BIT                                                             0x00040000
#define GL_DRAW_ARRAYS_STRIP_COMMAND_NV                                            0x0005
#define GL_TRIANGLE_STRIP                                                          0x0005
#define GL_DRAW_ELEMENTS_INSTANCED_COMMAND_NV                                      0x0006
#define GL_TRIANGLE_FAN                                                            0x0006
#define GL_DRAW_ARRAYS_INSTANCED_COMMAND_NV                                        0x0007
#define GL_QUADS                                                                   0x0007
#define GL_QUADS_EXT                                                               0x0007
#define GL_QUADS_OES                                                               0x0007
#define GL_ELEMENT_ADDRESS_COMMAND_NV                                              0x0008
#define GL_MAP_INVALIDATE_BUFFER_BIT                                               0x0008
#define GL_MAP_INVALIDATE_BUFFER_BIT_EXT                                           0x0008
#define GL_QUAD_STRIP                                                              0x0008
#define GL_TRACE_TEXTURES_BIT_MESA                                                 0x0008
#define GL_FONT_Y_MAX_BOUNDS_BIT_NV                                                0x00080000
#define GL_INDEX_BIT_PGI                                                           0x00080000
#define GL_SCISSOR_BIT                                                             0x00080000
#define GL_STENCIL_BUFFER_BIT3_QCOM                                                0x00080000
#define GL_ATTRIBUTE_ADDRESS_COMMAND_NV                                            0x0009
#define GL_POLYGON                                                                 0x0009
#define GL_LINES_ADJACENCY                                                         0x000A
#define GL_LINES_ADJACENCY_ARB                                                     0x000A
#define GL_LINES_ADJACENCY_EXT                                                     0x000A
#define GL_LINES_ADJACENCY_OES                                                     0x000A
#define GL_UNIFORM_ADDRESS_COMMAND_NV                                              0x000A
#define GL_BLEND_COLOR_COMMAND_NV                                                  0x000B
#define GL_LINE_STRIP_ADJACENCY                                                    0x000B
#define GL_LINE_STRIP_ADJACENCY_ARB                                                0x000B
#define GL_LINE_STRIP_ADJACENCY_EXT                                                0x000B
#define GL_LINE_STRIP_ADJACENCY_OES                                                0x000B
#define GL_STENCIL_REF_COMMAND_NV                                                  0x000C
#define GL_TRIANGLES_ADJACENCY                                                     0x000C
#define GL_TRIANGLES_ADJACENCY_ARB                                                 0x000C
#define GL_TRIANGLES_ADJACENCY_EXT                                                 0x000C
#define GL_TRIANGLES_ADJACENCY_OES                                                 0x000C
#define GL_LINE_WIDTH_COMMAND_NV                                                   0x000D
#define GL_TRIANGLE_STRIP_ADJACENCY                                                0x000D
#define GL_TRIANGLE_STRIP_ADJACENCY_ARB                                            0x000D
#define GL_TRIANGLE_STRIP_ADJACENCY_EXT                                            0x000D
#define GL_TRIANGLE_STRIP_ADJACENCY_OES                                            0x000D
#define GL_PATCHES                                                                 0x000E
#define GL_PATCHES_EXT                                                             0x000E
#define GL_PATCHES_OES                                                             0x000E
#define GL_POLYGON_OFFSET_COMMAND_NV                                               0x000E
#define GL_ALPHA_REF_COMMAND_NV                                                    0x000F
#define GL_ALL_ATTRIB_BITS                                                         0x000FFFFF
#define GL_MAP_FLUSH_EXPLICIT_BIT                                                  0x0010
#define GL_MAP_FLUSH_EXPLICIT_BIT_EXT                                              0x0010
#define GL_TRACE_PIXELS_BIT_MESA                                                   0x0010
#define GL_VIEWPORT_COMMAND_NV                                                     0x0010
#define GL_FONT_UNITS_PER_EM_BIT_NV                                                0x00100000
#define GL_MAT_AMBIENT_BIT_PGI                                                     0x00100000
#define GL_STENCIL_BUFFER_BIT4_QCOM                                                0x00100000
#define GL_SCISSOR_COMMAND_NV                                                      0x0011
#define GL_FRONT_FACE_COMMAND_NV                                                   0x0012
#define GL_MAP_UNSYNCHRONIZED_BIT                                                  0x0020
#define GL_MAP_UNSYNCHRONIZED_BIT_EXT                                              0x0020
#define GL_TRACE_ERRORS_BIT_MESA                                                   0x0020
#define GL_FONT_ASCENDER_BIT_NV                                                    0x00200000
#define GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI                                         0x00200000
#define GL_STENCIL_BUFFER_BIT5_QCOM                                                0x00200000
#define GL_MAP_PERSISTENT_BIT                                                      0x0040
#define GL_MAP_PERSISTENT_BIT_EXT                                                  0x0040
#define GL_FONT_DESCENDER_BIT_NV                                                   0x00400000
#define GL_MAT_DIFFUSE_BIT_PGI                                                     0x00400000
#define GL_STENCIL_BUFFER_BIT6_QCOM                                                0x00400000
#define GL_MAP_COHERENT_BIT                                                        0x0080
#define GL_MAP_COHERENT_BIT_EXT                                                    0x0080
#define GL_FONT_HEIGHT_BIT_NV                                                      0x00800000
#define GL_MAT_EMISSION_BIT_PGI                                                    0x00800000
#define GL_STENCIL_BUFFER_BIT7_QCOM                                                0x00800000
#define GL_BOLD_BIT_NV                                                             0x01
#define GL_GLYPH_WIDTH_BIT_NV                                                      0x01
#define GL_ACCUM                                                                   0x0100
#define GL_DYNAMIC_STORAGE_BIT                                                     0x0100
#define GL_DYNAMIC_STORAGE_BIT_EXT                                                 0x0100
#define GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV                                           0x01000000
#define GL_MAT_COLOR_INDEXES_BIT_PGI                                               0x01000000
#define GL_MULTISAMPLE_BUFFER_BIT0_QCOM                                            0x01000000
#define GL_LOAD                                                                    0x0101
#define GL_RETURN                                                                  0x0102
#define GL_MULT                                                                    0x0103
#define GL_ADD                                                                     0x0104
#define GL_GLYPH_HEIGHT_BIT_NV                                                     0x02
#define GL_ITALIC_BIT_NV                                                           0x02
#define GL_MOVE_TO_NV                                                              0x02
#define GL_CLIENT_STORAGE_BIT                                                      0x0200
#define GL_CLIENT_STORAGE_BIT_EXT                                                  0x0200
#define GL_NEVER                                                                   0x0200
#define GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV                                          0x02000000
#define GL_MAT_SHININESS_BIT_PGI                                                   0x02000000
#define GL_MULTISAMPLE_BUFFER_BIT1_QCOM                                            0x02000000
#define GL_LESS                                                                    0x0201
#define GL_EQUAL                                                                   0x0202
#define GL_LEQUAL                                                                  0x0203
#define GL_GREATER                                                                 0x0204
#define GL_NOTEQUAL                                                                0x0205
#define GL_GEQUAL                                                                  0x0206
#define GL_ALWAYS                                                                  0x0207
#define GL_RELATIVE_MOVE_TO_NV                                                     0x03
#define GL_SRC_COLOR                                                               0x0300
#define GL_ONE_MINUS_SRC_COLOR                                                     0x0301
#define GL_SRC_ALPHA                                                               0x0302
#define GL_ONE_MINUS_SRC_ALPHA                                                     0x0303
#define GL_DST_ALPHA                                                               0x0304
#define GL_ONE_MINUS_DST_ALPHA                                                     0x0305
#define GL_DST_COLOR                                                               0x0306
#define GL_ONE_MINUS_DST_COLOR                                                     0x0307
#define GL_SRC_ALPHA_SATURATE                                                      0x0308
#define GL_SRC_ALPHA_SATURATE_EXT                                                  0x0308
#define GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV                                       0x04
#define GL_LINE_TO_NV                                                              0x04
#define GL_FRONT_LEFT                                                              0x0400
#define GL_SPARSE_STORAGE_BIT_ARB                                                  0x0400
#define GL_FONT_UNDERLINE_POSITION_BIT_NV                                          0x04000000
#define GL_MAT_SPECULAR_BIT_PGI                                                    0x04000000
#define GL_MULTISAMPLE_BUFFER_BIT2_QCOM                                            0x04000000
#define GL_FRONT_RIGHT                                                             0x0401
#define GL_BACK_LEFT                                                               0x0402
#define GL_BACK_RIGHT                                                              0x0403
#define GL_FRONT                                                                   0x0404
#define GL_BACK                                                                    0x0405
#define GL_LEFT                                                                    0x0406
#define GL_RIGHT                                                                   0x0407
#define GL_FRONT_AND_BACK                                                          0x0408
#define GL_AUX0                                                                    0x0409
#define GL_AUX1                                                                    0x040A
#define GL_AUX2                                                                    0x040B
#define GL_AUX3                                                                    0x040C
#define GL_RELATIVE_LINE_TO_NV                                                     0x05
#define GL_INVALID_ENUM                                                            0x0500
#define GL_INVALID_VALUE                                                           0x0501
#define GL_INVALID_OPERATION                                                       0x0502
#define GL_STACK_OVERFLOW                                                          0x0503
#define GL_STACK_OVERFLOW_KHR                                                      0x0503
#define GL_STACK_UNDERFLOW                                                         0x0504
#define GL_STACK_UNDERFLOW_KHR                                                     0x0504
#define GL_OUT_OF_MEMORY                                                           0x0505
#define GL_INVALID_FRAMEBUFFER_OPERATION                                           0x0506
#define GL_INVALID_FRAMEBUFFER_OPERATION_EXT                                       0x0506
#define GL_INVALID_FRAMEBUFFER_OPERATION_OES                                       0x0506
#define GL_CONTEXT_LOST                                                            0x0507
#define GL_CONTEXT_LOST_KHR                                                        0x0507
#define GL_HORIZONTAL_LINE_TO_NV                                                   0x06
#define GL_2D                                                                      0x0600
#define GL_3D                                                                      0x0601
#define GL_3D_COLOR                                                                0x0602
#define GL_3D_COLOR_TEXTURE                                                        0x0603
#define GL_4D_COLOR_TEXTURE                                                        0x0604
#define GL_RELATIVE_HORIZONTAL_LINE_TO_NV                                          0x07
#define GL_PASS_THROUGH_TOKEN                                                      0x0700
#define GL_POINT_TOKEN                                                             0x0701
#define GL_LINE_TOKEN                                                              0x0702
#define GL_POLYGON_TOKEN                                                           0x0703
#define GL_BITMAP_TOKEN                                                            0x0704
#define GL_DRAW_PIXEL_TOKEN                                                        0x0705
#define GL_COPY_PIXEL_TOKEN                                                        0x0706
#define GL_LINE_RESET_TOKEN                                                        0x0707
#define GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV                                       0x08
#define GL_VERTICAL_LINE_TO_NV                                                     0x08
#define GL_EXP                                                                     0x0800
#define GL_LGPU_SEPARATE_STORAGE_BIT_NVX                                           0x0800
#define GL_PER_GPU_STORAGE_BIT_NV                                                  0x0800
#define GL_FONT_UNDERLINE_THICKNESS_BIT_NV                                         0x08000000
#define GL_MULTISAMPLE_BUFFER_BIT3_QCOM                                            0x08000000
#define GL_NORMAL_BIT_PGI                                                          0x08000000
#define GL_EXP2                                                                    0x0801
#define GL_RELATIVE_VERTICAL_LINE_TO_NV                                            0x09
#define GL_CW                                                                      0x0900
#define GL_CCW                                                                     0x0901
#define GL_QUADRATIC_CURVE_TO_NV                                                   0x0A
#define GL_COEFF                                                                   0x0A00
#define GL_ORDER                                                                   0x0A01
#define GL_DOMAIN                                                                  0x0A02
#define GL_RELATIVE_QUADRATIC_CURVE_TO_NV                                          0x0B
#define GL_CURRENT_COLOR                                                           0x0B00
#define GL_CURRENT_INDEX                                                           0x0B01
#define GL_CURRENT_NORMAL                                                          0x0B02
#define GL_CURRENT_TEXTURE_COORDS                                                  0x0B03
#define GL_CURRENT_RASTER_COLOR                                                    0x0B04
#define GL_CURRENT_RASTER_INDEX                                                    0x0B05
#define GL_CURRENT_RASTER_TEXTURE_COORDS                                           0x0B06
#define GL_CURRENT_RASTER_POSITION                                                 0x0B07
#define GL_CURRENT_RASTER_POSITION_VALID                                           0x0B08
#define GL_CURRENT_RASTER_DISTANCE                                                 0x0B09
#define GL_POINT_SMOOTH                                                            0x0B10
#define GL_POINT_SIZE                                                              0x0B11
#define GL_POINT_SIZE_RANGE                                                        0x0B12
#define GL_SMOOTH_POINT_SIZE_RANGE                                                 0x0B12
#define GL_POINT_SIZE_GRANULARITY                                                  0x0B13
#define GL_SMOOTH_POINT_SIZE_GRANULARITY                                           0x0B13
#define GL_LINE_SMOOTH                                                             0x0B20
#define GL_LINE_WIDTH                                                              0x0B21
#define GL_LINE_WIDTH_RANGE                                                        0x0B22
#define GL_SMOOTH_LINE_WIDTH_RANGE                                                 0x0B22
#define GL_LINE_WIDTH_GRANULARITY                                                  0x0B23
#define GL_SMOOTH_LINE_WIDTH_GRANULARITY                                           0x0B23
#define GL_LINE_STIPPLE                                                            0x0B24
#define GL_LINE_STIPPLE_PATTERN                                                    0x0B25
#define GL_LINE_STIPPLE_REPEAT                                                     0x0B26
#define GL_LIST_MODE                                                               0x0B30
#define GL_MAX_LIST_NESTING                                                        0x0B31
#define GL_LIST_BASE                                                               0x0B32
#define GL_LIST_INDEX                                                              0x0B33
#define GL_POLYGON_MODE                                                            0x0B40
#define GL_POLYGON_MODE_NV                                                         0x0B40
#define GL_POLYGON_SMOOTH                                                          0x0B41
#define GL_POLYGON_STIPPLE                                                         0x0B42
#define GL_EDGE_FLAG                                                               0x0B43
#define GL_CULL_FACE                                                               0x0B44
#define GL_CULL_FACE_MODE                                                          0x0B45
#define GL_FRONT_FACE                                                              0x0B46
#define GL_LIGHTING                                                                0x0B50
#define GL_LIGHT_MODEL_LOCAL_VIEWER                                                0x0B51
#define GL_LIGHT_MODEL_TWO_SIDE                                                    0x0B52
#define GL_LIGHT_MODEL_AMBIENT                                                     0x0B53
#define GL_SHADE_MODEL                                                             0x0B54
#define GL_COLOR_MATERIAL_FACE                                                     0x0B55
#define GL_COLOR_MATERIAL_PARAMETER                                                0x0B56
#define GL_COLOR_MATERIAL                                                          0x0B57
#define GL_FOG                                                                     0x0B60
#define GL_FOG_INDEX                                                               0x0B61
#define GL_FOG_DENSITY                                                             0x0B62
#define GL_FOG_START                                                               0x0B63
#define GL_FOG_END                                                                 0x0B64
#define GL_FOG_MODE                                                                0x0B65
#define GL_FOG_COLOR                                                               0x0B66
#define GL_DEPTH_RANGE                                                             0x0B70
#define GL_DEPTH_TEST                                                              0x0B71
#define GL_DEPTH_WRITEMASK                                                         0x0B72
#define GL_DEPTH_CLEAR_VALUE                                                       0x0B73
#define GL_DEPTH_FUNC                                                              0x0B74
#define GL_ACCUM_CLEAR_VALUE                                                       0x0B80
#define GL_STENCIL_TEST                                                            0x0B90
#define GL_STENCIL_CLEAR_VALUE                                                     0x0B91
#define GL_STENCIL_FUNC                                                            0x0B92
#define GL_STENCIL_VALUE_MASK                                                      0x0B93
#define GL_STENCIL_FAIL                                                            0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL                                                 0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS                                                 0x0B96
#define GL_STENCIL_REF                                                             0x0B97
#define GL_STENCIL_WRITEMASK                                                       0x0B98
#define GL_MATRIX_MODE                                                             0x0BA0
#define GL_NORMALIZE                                                               0x0BA1
#define GL_VIEWPORT                                                                0x0BA2
#define GL_MODELVIEW0_STACK_DEPTH_EXT                                              0x0BA3
#define GL_MODELVIEW_STACK_DEPTH                                                   0x0BA3
#define GL_PATH_MODELVIEW_STACK_DEPTH_NV                                           0x0BA3
#define GL_PATH_PROJECTION_STACK_DEPTH_NV                                          0x0BA4
#define GL_PROJECTION_STACK_DEPTH                                                  0x0BA4
#define GL_TEXTURE_STACK_DEPTH                                                     0x0BA5
#define GL_MODELVIEW0_MATRIX_EXT                                                   0x0BA6
#define GL_MODELVIEW_MATRIX                                                        0x0BA6
#define GL_PATH_MODELVIEW_MATRIX_NV                                                0x0BA6
#define GL_PATH_PROJECTION_MATRIX_NV                                               0x0BA7
#define GL_PROJECTION_MATRIX                                                       0x0BA7
#define GL_TEXTURE_MATRIX                                                          0x0BA8
#define GL_ATTRIB_STACK_DEPTH                                                      0x0BB0
#define GL_CLIENT_ATTRIB_STACK_DEPTH                                               0x0BB1
#define GL_ALPHA_TEST                                                              0x0BC0
#define GL_ALPHA_TEST_QCOM                                                         0x0BC0
#define GL_ALPHA_TEST_FUNC                                                         0x0BC1
#define GL_ALPHA_TEST_FUNC_QCOM                                                    0x0BC1
#define GL_ALPHA_TEST_REF                                                          0x0BC2
#define GL_ALPHA_TEST_REF_QCOM                                                     0x0BC2
#define GL_DITHER                                                                  0x0BD0
#define GL_BLEND_DST                                                               0x0BE0
#define GL_BLEND_SRC                                                               0x0BE1
#define GL_BLEND                                                                   0x0BE2
#define GL_LOGIC_OP_MODE                                                           0x0BF0
#define GL_INDEX_LOGIC_OP                                                          0x0BF1
#define GL_LOGIC_OP                                                                0x0BF1
#define GL_COLOR_LOGIC_OP                                                          0x0BF2
#define GL_CUBIC_CURVE_TO_NV                                                       0x0C
#define GL_AUX_BUFFERS                                                             0x0C00
#define GL_DRAW_BUFFER                                                             0x0C01
#define GL_DRAW_BUFFER_EXT                                                         0x0C01
#define GL_READ_BUFFER                                                             0x0C02
#define GL_READ_BUFFER_EXT                                                         0x0C02
#define GL_READ_BUFFER_NV                                                          0x0C02
#define GL_SCISSOR_BOX                                                             0x0C10
#define GL_SCISSOR_TEST                                                            0x0C11
#define GL_INDEX_CLEAR_VALUE                                                       0x0C20
#define GL_INDEX_WRITEMASK                                                         0x0C21
#define GL_COLOR_CLEAR_VALUE                                                       0x0C22
#define GL_COLOR_WRITEMASK                                                         0x0C23
#define GL_INDEX_MODE                                                              0x0C30
#define GL_RGBA_MODE                                                               0x0C31
#define GL_DOUBLEBUFFER                                                            0x0C32
#define GL_STEREO                                                                  0x0C33
#define GL_RENDER_MODE                                                             0x0C40
#define GL_PERSPECTIVE_CORRECTION_HINT                                             0x0C50
#define GL_POINT_SMOOTH_HINT                                                       0x0C51
#define GL_LINE_SMOOTH_HINT                                                        0x0C52
#define GL_POLYGON_SMOOTH_HINT                                                     0x0C53
#define GL_FOG_HINT                                                                0x0C54
#define GL_TEXTURE_GEN_S                                                           0x0C60
#define GL_TEXTURE_GEN_T                                                           0x0C61
#define GL_TEXTURE_GEN_R                                                           0x0C62
#define GL_TEXTURE_GEN_Q                                                           0x0C63
#define GL_PIXEL_MAP_I_TO_I                                                        0x0C70
#define GL_PIXEL_MAP_S_TO_S                                                        0x0C71
#define GL_PIXEL_MAP_I_TO_R                                                        0x0C72
#define GL_PIXEL_MAP_I_TO_G                                                        0x0C73
#define GL_PIXEL_MAP_I_TO_B                                                        0x0C74
#define GL_PIXEL_MAP_I_TO_A                                                        0x0C75
#define GL_PIXEL_MAP_R_TO_R                                                        0x0C76
#define GL_PIXEL_MAP_G_TO_G                                                        0x0C77
#define GL_PIXEL_MAP_B_TO_B                                                        0x0C78
#define GL_PIXEL_MAP_A_TO_A                                                        0x0C79
#define GL_PIXEL_MAP_I_TO_I_SIZE                                                   0x0CB0
#define GL_PIXEL_MAP_S_TO_S_SIZE                                                   0x0CB1
#define GL_PIXEL_MAP_I_TO_R_SIZE                                                   0x0CB2
#define GL_PIXEL_MAP_I_TO_G_SIZE                                                   0x0CB3
#define GL_PIXEL_MAP_I_TO_B_SIZE                                                   0x0CB4
#define GL_PIXEL_MAP_I_TO_A_SIZE                                                   0x0CB5
#define GL_PIXEL_MAP_R_TO_R_SIZE                                                   0x0CB6
#define GL_PIXEL_MAP_G_TO_G_SIZE                                                   0x0CB7
#define GL_PIXEL_MAP_B_TO_B_SIZE                                                   0x0CB8
#define GL_PIXEL_MAP_A_TO_A_SIZE                                                   0x0CB9
#define GL_UNPACK_SWAP_BYTES                                                       0x0CF0
#define GL_UNPACK_LSB_FIRST                                                        0x0CF1
#define GL_UNPACK_ROW_LENGTH                                                       0x0CF2
#define GL_UNPACK_ROW_LENGTH_EXT                                                   0x0CF2
#define GL_UNPACK_SKIP_ROWS                                                        0x0CF3
#define GL_UNPACK_SKIP_ROWS_EXT                                                    0x0CF3
#define GL_UNPACK_SKIP_PIXELS                                                      0x0CF4
#define GL_UNPACK_SKIP_PIXELS_EXT                                                  0x0CF4
#define GL_UNPACK_ALIGNMENT                                                        0x0CF5
#define GL_RELATIVE_CUBIC_CURVE_TO_NV                                              0x0D
#define GL_PACK_SWAP_BYTES                                                         0x0D00
#define GL_PACK_LSB_FIRST                                                          0x0D01
#define GL_PACK_ROW_LENGTH                                                         0x0D02
#define GL_PACK_SKIP_ROWS                                                          0x0D03
#define GL_PACK_SKIP_PIXELS                                                        0x0D04
#define GL_PACK_ALIGNMENT                                                          0x0D05
#define GL_MAP_COLOR                                                               0x0D10
#define GL_MAP_STENCIL                                                             0x0D11
#define GL_INDEX_SHIFT                                                             0x0D12
#define GL_INDEX_OFFSET                                                            0x0D13
#define GL_RED_SCALE                                                               0x0D14
#define GL_RED_BIAS                                                                0x0D15
#define GL_ZOOM_X                                                                  0x0D16
#define GL_ZOOM_Y                                                                  0x0D17
#define GL_GREEN_SCALE                                                             0x0D18
#define GL_GREEN_BIAS                                                              0x0D19
#define GL_BLUE_SCALE                                                              0x0D1A
#define GL_BLUE_BIAS                                                               0x0D1B
#define GL_ALPHA_SCALE                                                             0x0D1C
#define GL_ALPHA_BIAS                                                              0x0D1D
#define GL_DEPTH_SCALE                                                             0x0D1E
#define GL_DEPTH_BIAS                                                              0x0D1F
#define GL_MAX_EVAL_ORDER                                                          0x0D30
#define GL_MAX_LIGHTS                                                              0x0D31
#define GL_MAX_CLIP_DISTANCES                                                      0x0D32
#define GL_MAX_CLIP_DISTANCES_APPLE                                                0x0D32
#define GL_MAX_CLIP_DISTANCES_EXT                                                  0x0D32
#define GL_MAX_CLIP_PLANES                                                         0x0D32
#define GL_MAX_CLIP_PLANES_IMG                                                     0x0D32
#define GL_MAX_TEXTURE_SIZE                                                        0x0D33
#define GL_MAX_PIXEL_MAP_TABLE                                                     0x0D34
#define GL_MAX_ATTRIB_STACK_DEPTH                                                  0x0D35
#define GL_MAX_MODELVIEW_STACK_DEPTH                                               0x0D36
#define GL_PATH_MAX_MODELVIEW_STACK_DEPTH_NV                                       0x0D36
#define GL_MAX_NAME_STACK_DEPTH                                                    0x0D37
#define GL_MAX_PROJECTION_STACK_DEPTH                                              0x0D38
#define GL_PATH_MAX_PROJECTION_STACK_DEPTH_NV                                      0x0D38
#define GL_MAX_TEXTURE_STACK_DEPTH                                                 0x0D39
#define GL_MAX_VIEWPORT_DIMS                                                       0x0D3A
#define GL_MAX_CLIENT_ATTRIB_STACK_DEPTH                                           0x0D3B
#define GL_SUBPIXEL_BITS                                                           0x0D50
#define GL_INDEX_BITS                                                              0x0D51
#define GL_RED_BITS                                                                0x0D52
#define GL_GREEN_BITS                                                              0x0D53
#define GL_BLUE_BITS                                                               0x0D54
#define GL_ALPHA_BITS                                                              0x0D55
#define GL_DEPTH_BITS                                                              0x0D56
#define GL_STENCIL_BITS                                                            0x0D57
#define GL_ACCUM_RED_BITS                                                          0x0D58
#define GL_ACCUM_GREEN_BITS                                                        0x0D59
#define GL_ACCUM_BLUE_BITS                                                         0x0D5A
#define GL_ACCUM_ALPHA_BITS                                                        0x0D5B
#define GL_NAME_STACK_DEPTH                                                        0x0D70
#define GL_AUTO_NORMAL                                                             0x0D80
#define GL_MAP1_COLOR_4                                                            0x0D90
#define GL_MAP1_INDEX                                                              0x0D91
#define GL_MAP1_NORMAL                                                             0x0D92
#define GL_MAP1_TEXTURE_COORD_1                                                    0x0D93
#define GL_MAP1_TEXTURE_COORD_2                                                    0x0D94
#define GL_MAP1_TEXTURE_COORD_3                                                    0x0D95
#define GL_MAP1_TEXTURE_COORD_4                                                    0x0D96
#define GL_MAP1_VERTEX_3                                                           0x0D97
#define GL_MAP1_VERTEX_4                                                           0x0D98
#define GL_MAP2_COLOR_4                                                            0x0DB0
#define GL_MAP2_INDEX                                                              0x0DB1
#define GL_MAP2_NORMAL                                                             0x0DB2
#define GL_MAP2_TEXTURE_COORD_1                                                    0x0DB3
#define GL_MAP2_TEXTURE_COORD_2                                                    0x0DB4
#define GL_MAP2_TEXTURE_COORD_3                                                    0x0DB5
#define GL_MAP2_TEXTURE_COORD_4                                                    0x0DB6
#define GL_MAP2_VERTEX_3                                                           0x0DB7
#define GL_MAP2_VERTEX_4                                                           0x0DB8
#define GL_MAP1_GRID_DOMAIN                                                        0x0DD0
#define GL_MAP1_GRID_SEGMENTS                                                      0x0DD1
#define GL_MAP2_GRID_DOMAIN                                                        0x0DD2
#define GL_MAP2_GRID_SEGMENTS                                                      0x0DD3
#define GL_TEXTURE_1D                                                              0x0DE0
#define GL_TEXTURE_2D                                                              0x0DE1
#define GL_FEEDBACK_BUFFER_POINTER                                                 0x0DF0
#define GL_FEEDBACK_BUFFER_SIZE                                                    0x0DF1
#define GL_FEEDBACK_BUFFER_TYPE                                                    0x0DF2
#define GL_SELECTION_BUFFER_POINTER                                                0x0DF3
#define GL_SELECTION_BUFFER_SIZE                                                   0x0DF4
#define GL_SMOOTH_QUADRATIC_CURVE_TO_NV                                            0x0E
#define GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV                                   0x0F
#define GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV                                 0x10
#define GL_SMOOTH_CUBIC_CURVE_TO_NV                                                0x10
#define GL_GLYPH_HAS_KERNING_BIT_NV                                                0x100
#define GL_TEXTURE_WIDTH                                                           0x1000
#define GL_FONT_HAS_KERNING_BIT_NV                                                 0x10000000
#define GL_MULTISAMPLE_BUFFER_BIT4_QCOM                                            0x10000000
#define GL_TEXCOORD1_BIT_PGI                                                       0x10000000
#define GL_TEXTURE_HEIGHT                                                          0x1001
#define GL_TEXTURE_COMPONENTS                                                      0x1003
#define GL_TEXTURE_INTERNAL_FORMAT                                                 0x1003
#define GL_TEXTURE_BORDER_COLOR                                                    0x1004
#define GL_TEXTURE_BORDER_COLOR_EXT                                                0x1004
#define GL_TEXTURE_BORDER_COLOR_NV                                                 0x1004
#define GL_TEXTURE_BORDER_COLOR_OES                                                0x1004
#define GL_TEXTURE_BORDER                                                          0x1005
#define GL_TEXTURE_TARGET                                                          0x1006
#define GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV                                       0x11
#define GL_DONT_CARE                                                               0x1100
#define GL_FASTEST                                                                 0x1101
#define GL_NICEST                                                                  0x1102
#define GL_SMALL_CCW_ARC_TO_NV                                                     0x12
#define GL_AMBIENT                                                                 0x1200
#define GL_DIFFUSE                                                                 0x1201
#define GL_SPECULAR                                                                0x1202
#define GL_POSITION                                                                0x1203
#define GL_SPOT_DIRECTION                                                          0x1204
#define GL_SPOT_EXPONENT                                                           0x1205
#define GL_SPOT_CUTOFF                                                             0x1206
#define GL_CONSTANT_ATTENUATION                                                    0x1207
#define GL_LINEAR_ATTENUATION                                                      0x1208
#define GL_QUADRATIC_ATTENUATION                                                   0x1209
#define GL_RELATIVE_SMALL_CCW_ARC_TO_NV                                            0x13
#define GL_COMPILE                                                                 0x1300
#define GL_COMPILE_AND_EXECUTE                                                     0x1301
#define GL_SMALL_CW_ARC_TO_NV                                                      0x14
#define GL_BYTE                                                                    0x1400
#define GL_UNSIGNED_BYTE                                                           0x1401
#define GL_SHORT                                                                   0x1402
#define GL_UNSIGNED_SHORT                                                          0x1403
#define GL_INT                                                                     0x1404
#define GL_UNSIGNED_INT                                                            0x1405
#define GL_FLOAT                                                                   0x1406
#define GL_2_BYTES                                                                 0x1407
#define GL_2_BYTES_NV                                                              0x1407
#define GL_3_BYTES                                                                 0x1408
#define GL_3_BYTES_NV                                                              0x1408
#define GL_4_BYTES                                                                 0x1409
#define GL_4_BYTES_NV                                                              0x1409
#define GL_DOUBLE                                                                  0x140A
#define GL_DOUBLE_EXT                                                              0x140A
#define GL_HALF_APPLE                                                              0x140B
#define GL_HALF_FLOAT                                                              0x140B
#define GL_HALF_FLOAT_ARB                                                          0x140B
#define GL_HALF_FLOAT_NV                                                           0x140B
#define GL_FIXED                                                                   0x140C
#define GL_FIXED_OES                                                               0x140C
#define GL_INT64_ARB                                                               0x140E
#define GL_INT64_NV                                                                0x140E
#define GL_UNSIGNED_INT64_ARB                                                      0x140F
#define GL_UNSIGNED_INT64_NV                                                       0x140F
#define GL_RELATIVE_SMALL_CW_ARC_TO_NV                                             0x15
#define GL_CLEAR                                                                   0x1500
#define GL_AND                                                                     0x1501
#define GL_AND_REVERSE                                                             0x1502
#define GL_COPY                                                                    0x1503
#define GL_AND_INVERTED                                                            0x1504
#define GL_NOOP                                                                    0x1505
#define GL_XOR                                                                     0x1506
#define GL_XOR_NV                                                                  0x1506
#define GL_OR                                                                      0x1507
#define GL_NOR                                                                     0x1508
#define GL_EQUIV                                                                   0x1509
#define GL_INVERT                                                                  0x150A
#define GL_OR_REVERSE                                                              0x150B
#define GL_COPY_INVERTED                                                           0x150C
#define GL_OR_INVERTED                                                             0x150D
#define GL_NAND                                                                    0x150E
#define GL_SET                                                                     0x150F
#define GL_LARGE_CCW_ARC_TO_NV                                                     0x16
#define GL_EMISSION                                                                0x1600
#define GL_SHININESS                                                               0x1601
#define GL_AMBIENT_AND_DIFFUSE                                                     0x1602
#define GL_COLOR_INDEXES                                                           0x1603
#define GL_RELATIVE_LARGE_CCW_ARC_TO_NV                                            0x17
#define GL_MODELVIEW                                                               0x1700
#define GL_MODELVIEW0_ARB                                                          0x1700
#define GL_MODELVIEW0_EXT                                                          0x1700
#define GL_PATH_MODELVIEW_NV                                                       0x1700
#define GL_PATH_PROJECTION_NV                                                      0x1701
#define GL_PROJECTION                                                              0x1701
#define GL_TEXTURE                                                                 0x1702
#define GL_LARGE_CW_ARC_TO_NV                                                      0x18
#define GL_COLOR                                                                   0x1800
#define GL_COLOR_EXT                                                               0x1800
#define GL_DEPTH                                                                   0x1801
#define GL_DEPTH_EXT                                                               0x1801
#define GL_STENCIL                                                                 0x1802
#define GL_STENCIL_EXT                                                             0x1802
#define GL_RELATIVE_LARGE_CW_ARC_TO_NV                                             0x19
#define GL_COLOR_INDEX                                                             0x1900
#define GL_STENCIL_INDEX                                                           0x1901
#define GL_STENCIL_INDEX_OES                                                       0x1901
#define GL_DEPTH_COMPONENT                                                         0x1902
#define GL_RED                                                                     0x1903
#define GL_RED_EXT                                                                 0x1903
#define GL_RED_NV                                                                  0x1903
#define GL_GREEN                                                                   0x1904
#define GL_GREEN_NV                                                                0x1904
#define GL_BLUE                                                                    0x1905
#define GL_BLUE_NV                                                                 0x1905
#define GL_ALPHA                                                                   0x1906
#define GL_RGB                                                                     0x1907
#define GL_RGBA                                                                    0x1908
#define GL_LUMINANCE                                                               0x1909
#define GL_LUMINANCE_ALPHA                                                         0x190A
#define GL_RASTER_POSITION_UNCLIPPED_IBM                                           0x19262
#define GL_CONIC_CURVE_TO_NV                                                       0x1A
#define GL_BITMAP                                                                  0x1A00
#define GL_PREFER_DOUBLEBUFFER_HINT_PGI                                            0x1A1F8
#define GL_CONSERVE_MEMORY_HINT_PGI                                                0x1A1FD
#define GL_RECLAIM_MEMORY_HINT_PGI                                                 0x1A1FE
#define GL_NATIVE_GRAPHICS_HANDLE_PGI                                              0x1A202
#define GL_NATIVE_GRAPHICS_BEGIN_HINT_PGI                                          0x1A203
#define GL_NATIVE_GRAPHICS_END_HINT_PGI                                            0x1A204
#define GL_ALWAYS_FAST_HINT_PGI                                                    0x1A20C
#define GL_ALWAYS_SOFT_HINT_PGI                                                    0x1A20D
#define GL_ALLOW_DRAW_OBJ_HINT_PGI                                                 0x1A20E
#define GL_ALLOW_DRAW_WIN_HINT_PGI                                                 0x1A20F
#define GL_ALLOW_DRAW_FRG_HINT_PGI                                                 0x1A210
#define GL_ALLOW_DRAW_MEM_HINT_PGI                                                 0x1A211
#define GL_STRICT_DEPTHFUNC_HINT_PGI                                               0x1A216
#define GL_STRICT_LIGHTING_HINT_PGI                                                0x1A217
#define GL_STRICT_SCISSOR_HINT_PGI                                                 0x1A218
#define GL_FULL_STIPPLE_HINT_PGI                                                   0x1A219
#define GL_CLIP_NEAR_HINT_PGI                                                      0x1A220
#define GL_CLIP_FAR_HINT_PGI                                                       0x1A221
#define GL_WIDE_LINE_HINT_PGI                                                      0x1A222
#define GL_BACK_NORMALS_HINT_PGI                                                   0x1A223
#define GL_VERTEX_DATA_HINT_PGI                                                    0x1A22A
#define GL_VERTEX_CONSISTENT_HINT_PGI                                              0x1A22B
#define GL_MATERIAL_SIDE_HINT_PGI                                                  0x1A22C
#define GL_MAX_VERTEX_HINT_PGI                                                     0x1A22D
#define GL_RELATIVE_CONIC_CURVE_TO_NV                                              0x1B
#define GL_POINT                                                                   0x1B00
#define GL_POINT_NV                                                                0x1B00
#define GL_LINE                                                                    0x1B01
#define GL_LINE_NV                                                                 0x1B01
#define GL_FILL                                                                    0x1B02
#define GL_FILL_NV                                                                 0x1B02
#define GL_RENDER                                                                  0x1C00
#define GL_FEEDBACK                                                                0x1C01
#define GL_SELECT                                                                  0x1C02
#define GL_FLAT                                                                    0x1D00
#define GL_SMOOTH                                                                  0x1D01
#define GL_KEEP                                                                    0x1E00
#define GL_REPLACE                                                                 0x1E01
#define GL_INCR                                                                    0x1E02
#define GL_DECR                                                                    0x1E03
#define GL_VENDOR                                                                  0x1F00
#define GL_RENDERER                                                                0x1F01
#define GL_VERSION                                                                 0x1F02
#define GL_EXTENSIONS                                                              0x1F03
#define GL_GLYPH_VERTICAL_BEARING_X_BIT_NV                                         0x20
#define GL_EXTERNAL_STORAGE_BIT_NVX                                                0x2000
#define GL_S                                                                       0x2000
#define GL_FONT_NUM_GLYPH_INDICES_BIT_NV                                           0x20000000
#define GL_MULTISAMPLE_BIT                                                         0x20000000
#define GL_MULTISAMPLE_BIT_3DFX                                                    0x20000000
#define GL_MULTISAMPLE_BIT_ARB                                                     0x20000000
#define GL_MULTISAMPLE_BIT_EXT                                                     0x20000000
#define GL_MULTISAMPLE_BUFFER_BIT5_QCOM                                            0x20000000
#define GL_TEXCOORD2_BIT_PGI                                                       0x20000000
#define GL_T                                                                       0x2001
#define GL_R                                                                       0x2002
#define GL_Q                                                                       0x2003
#define GL_MODULATE                                                                0x2100
#define GL_DECAL                                                                   0x2101
#define GL_TEXTURE_ENV_MODE                                                        0x2200
#define GL_TEXTURE_ENV_COLOR                                                       0x2201
#define GL_TEXTURE_ENV                                                             0x2300
#define GL_EYE_LINEAR                                                              0x2400
#define GL_EYE_LINEAR_NV                                                           0x2400
#define GL_OBJECT_LINEAR                                                           0x2401
#define GL_OBJECT_LINEAR_NV                                                        0x2401
#define GL_SPHERE_MAP                                                              0x2402
#define GL_TEXTURE_GEN_MODE                                                        0x2500
#define GL_TEXTURE_GEN_MODE_OES                                                    0x2500
#define GL_OBJECT_PLANE                                                            0x2501
#define GL_EYE_PLANE                                                               0x2502
#define GL_NEAREST                                                                 0x2600
#define GL_LINEAR                                                                  0x2601
#define GL_NEAREST_MIPMAP_NEAREST                                                  0x2700
#define GL_LINEAR_MIPMAP_NEAREST                                                   0x2701
#define GL_NEAREST_MIPMAP_LINEAR                                                   0x2702
#define GL_LINEAR_MIPMAP_LINEAR                                                    0x2703
#define GL_TEXTURE_MAG_FILTER                                                      0x2800
#define GL_TEXTURE_MIN_FILTER                                                      0x2801
#define GL_TEXTURE_WRAP_S                                                          0x2802
#define GL_TEXTURE_WRAP_T                                                          0x2803
#define GL_CLAMP                                                                   0x2900
#define GL_REPEAT                                                                  0x2901
#define GL_POLYGON_OFFSET_UNITS                                                    0x2A00
#define GL_POLYGON_OFFSET_POINT                                                    0x2A01
#define GL_POLYGON_OFFSET_POINT_NV                                                 0x2A01
#define GL_POLYGON_OFFSET_LINE                                                     0x2A02
#define GL_POLYGON_OFFSET_LINE_NV                                                  0x2A02
#define GL_R3_G3_B2                                                                0x2A10
#define GL_V2F                                                                     0x2A20
#define GL_V3F                                                                     0x2A21
#define GL_C4UB_V2F                                                                0x2A22
#define GL_C4UB_V3F                                                                0x2A23
#define GL_C3F_V3F                                                                 0x2A24
#define GL_N3F_V3F                                                                 0x2A25
#define GL_C4F_N3F_V3F                                                             0x2A26
#define GL_T2F_V3F                                                                 0x2A27
#define GL_T4F_V4F                                                                 0x2A28
#define GL_T2F_C4UB_V3F                                                            0x2A29
#define GL_T2F_C3F_V3F                                                             0x2A2A
#define GL_T2F_N3F_V3F                                                             0x2A2B
#define GL_T2F_C4F_N3F_V3F                                                         0x2A2C
#define GL_T4F_C4F_N3F_V4F                                                         0x2A2D
#define GL_CLIP_DISTANCE0                                                          0x3000
#define GL_CLIP_DISTANCE0_APPLE                                                    0x3000
#define GL_CLIP_DISTANCE0_EXT                                                      0x3000
#define GL_CLIP_PLANE0                                                             0x3000
#define GL_CLIP_PLANE0_IMG                                                         0x3000
#define GL_CLIP_DISTANCE1                                                          0x3001
#define GL_CLIP_DISTANCE1_APPLE                                                    0x3001
#define GL_CLIP_DISTANCE1_EXT                                                      0x3001
#define GL_CLIP_PLANE1                                                             0x3001
#define GL_CLIP_PLANE1_IMG                                                         0x3001
#define GL_CLIP_DISTANCE2                                                          0x3002
#define GL_CLIP_DISTANCE2_APPLE                                                    0x3002
#define GL_CLIP_DISTANCE2_EXT                                                      0x3002
#define GL_CLIP_PLANE2                                                             0x3002
#define GL_CLIP_PLANE2_IMG                                                         0x3002
#define GL_CLIP_DISTANCE3                                                          0x3003
#define GL_CLIP_DISTANCE3_APPLE                                                    0x3003
#define GL_CLIP_DISTANCE3_EXT                                                      0x3003
#define GL_CLIP_PLANE3                                                             0x3003
#define GL_CLIP_PLANE3_IMG                                                         0x3003
#define GL_CLIP_DISTANCE4                                                          0x3004
#define GL_CLIP_DISTANCE4_APPLE                                                    0x3004
#define GL_CLIP_DISTANCE4_EXT                                                      0x3004
#define GL_CLIP_PLANE4                                                             0x3004
#define GL_CLIP_PLANE4_IMG                                                         0x3004
#define GL_CLIP_DISTANCE5                                                          0x3005
#define GL_CLIP_DISTANCE5_APPLE                                                    0x3005
#define GL_CLIP_DISTANCE5_EXT                                                      0x3005
#define GL_CLIP_PLANE5                                                             0x3005
#define GL_CLIP_PLANE5_IMG                                                         0x3005
#define GL_CLIP_DISTANCE6                                                          0x3006
#define GL_CLIP_DISTANCE6_APPLE                                                    0x3006
#define GL_CLIP_DISTANCE6_EXT                                                      0x3006
#define GL_CLIP_DISTANCE7                                                          0x3007
#define GL_CLIP_DISTANCE7_APPLE                                                    0x3007
#define GL_CLIP_DISTANCE7_EXT                                                      0x3007
#define GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV                                         0x40
#define GL_LIGHT0                                                                  0x4000
#define GL_MULTISAMPLE_BUFFER_BIT6_QCOM                                            0x40000000
#define GL_TEXCOORD3_BIT_PGI                                                       0x40000000
#define GL_LIGHT1                                                                  0x4001
#define GL_LIGHT2                                                                  0x4002
#define GL_LIGHT3                                                                  0x4003
#define GL_LIGHT4                                                                  0x4004
#define GL_LIGHT5                                                                  0x4005
#define GL_LIGHT6                                                                  0x4006
#define GL_LIGHT7                                                                  0x4007
#define GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV                                   0x80
#define GL_ABGR_EXT                                                                0x8000
#define GL_MULTISAMPLE_BUFFER_BIT7_QCOM                                            0x80000000
#define GL_TEXCOORD4_BIT_PGI                                                       0x80000000
#define GL_CONSTANT_COLOR                                                          0x8001
#define GL_CONSTANT_COLOR_EXT                                                      0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR                                                0x8002
#define GL_ONE_MINUS_CONSTANT_COLOR_EXT                                            0x8002
#define GL_CONSTANT_ALPHA                                                          0x8003
#define GL_CONSTANT_ALPHA_EXT                                                      0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA                                                0x8004
#define GL_ONE_MINUS_CONSTANT_ALPHA_EXT                                            0x8004
#define GL_BLEND_COLOR                                                             0x8005
#define GL_BLEND_COLOR_EXT                                                         0x8005
#define GL_FUNC_ADD                                                                0x8006
#define GL_FUNC_ADD_EXT                                                            0x8006
#define GL_FUNC_ADD_OES                                                            0x8006
#define GL_MIN                                                                     0x8007
#define GL_MIN_EXT                                                                 0x8007
#define GL_MAX                                                                     0x8008
#define GL_MAX_EXT                                                                 0x8008
#define GL_BLEND_EQUATION                                                          0x8009
#define GL_BLEND_EQUATION_EXT                                                      0x8009
#define GL_BLEND_EQUATION_OES                                                      0x8009
#define GL_BLEND_EQUATION_RGB                                                      0x8009
#define GL_BLEND_EQUATION_RGB_EXT                                                  0x8009
#define GL_BLEND_EQUATION_RGB_OES                                                  0x8009
#define GL_FUNC_SUBTRACT                                                           0x800A
#define GL_FUNC_SUBTRACT_EXT                                                       0x800A
#define GL_FUNC_SUBTRACT_OES                                                       0x800A
#define GL_FUNC_REVERSE_SUBTRACT                                                   0x800B
#define GL_FUNC_REVERSE_SUBTRACT_EXT                                               0x800B
#define GL_FUNC_REVERSE_SUBTRACT_OES                                               0x800B
#define GL_CMYK_EXT                                                                0x800C
#define GL_CMYKA_EXT                                                               0x800D
#define GL_PACK_CMYK_HINT_EXT                                                      0x800E
#define GL_UNPACK_CMYK_HINT_EXT                                                    0x800F
#define GL_CONVOLUTION_1D                                                          0x8010
#define GL_CONVOLUTION_1D_EXT                                                      0x8010
#define GL_CONVOLUTION_2D                                                          0x8011
#define GL_CONVOLUTION_2D_EXT                                                      0x8011
#define GL_SEPARABLE_2D                                                            0x8012
#define GL_SEPARABLE_2D_EXT                                                        0x8012
#define GL_CONVOLUTION_BORDER_MODE                                                 0x8013
#define GL_CONVOLUTION_BORDER_MODE_EXT                                             0x8013
#define GL_CONVOLUTION_FILTER_SCALE                                                0x8014
#define GL_CONVOLUTION_FILTER_SCALE_EXT                                            0x8014
#define GL_CONVOLUTION_FILTER_BIAS                                                 0x8015
#define GL_CONVOLUTION_FILTER_BIAS_EXT                                             0x8015
#define GL_REDUCE                                                                  0x8016
#define GL_REDUCE_EXT                                                              0x8016
#define GL_CONVOLUTION_FORMAT                                                      0x8017
#define GL_CONVOLUTION_FORMAT_EXT                                                  0x8017
#define GL_CONVOLUTION_WIDTH                                                       0x8018
#define GL_CONVOLUTION_WIDTH_EXT                                                   0x8018
#define GL_CONVOLUTION_HEIGHT                                                      0x8019
#define GL_CONVOLUTION_HEIGHT_EXT                                                  0x8019
#define GL_MAX_CONVOLUTION_WIDTH                                                   0x801A
#define GL_MAX_CONVOLUTION_WIDTH_EXT                                               0x801A
#define GL_MAX_CONVOLUTION_HEIGHT                                                  0x801B
#define GL_MAX_CONVOLUTION_HEIGHT_EXT                                              0x801B
#define GL_POST_CONVOLUTION_RED_SCALE                                              0x801C
#define GL_POST_CONVOLUTION_RED_SCALE_EXT                                          0x801C
#define GL_POST_CONVOLUTION_GREEN_SCALE                                            0x801D
#define GL_POST_CONVOLUTION_GREEN_SCALE_EXT                                        0x801D
#define GL_POST_CONVOLUTION_BLUE_SCALE                                             0x801E
#define GL_POST_CONVOLUTION_BLUE_SCALE_EXT                                         0x801E
#define GL_POST_CONVOLUTION_ALPHA_SCALE                                            0x801F
#define GL_POST_CONVOLUTION_ALPHA_SCALE_EXT                                        0x801F
#define GL_POST_CONVOLUTION_RED_BIAS                                               0x8020
#define GL_POST_CONVOLUTION_RED_BIAS_EXT                                           0x8020
#define GL_POST_CONVOLUTION_GREEN_BIAS                                             0x8021
#define GL_POST_CONVOLUTION_GREEN_BIAS_EXT                                         0x8021
#define GL_POST_CONVOLUTION_BLUE_BIAS                                              0x8022
#define GL_POST_CONVOLUTION_BLUE_BIAS_EXT                                          0x8022
#define GL_POST_CONVOLUTION_ALPHA_BIAS                                             0x8023
#define GL_POST_CONVOLUTION_ALPHA_BIAS_EXT                                         0x8023
#define GL_HISTOGRAM                                                               0x8024
#define GL_HISTOGRAM_EXT                                                           0x8024
#define GL_PROXY_HISTOGRAM                                                         0x8025
#define GL_PROXY_HISTOGRAM_EXT                                                     0x8025
#define GL_HISTOGRAM_WIDTH                                                         0x8026
#define GL_HISTOGRAM_WIDTH_EXT                                                     0x8026
#define GL_HISTOGRAM_FORMAT                                                        0x8027
#define GL_HISTOGRAM_FORMAT_EXT                                                    0x8027
#define GL_HISTOGRAM_RED_SIZE                                                      0x8028
#define GL_HISTOGRAM_RED_SIZE_EXT                                                  0x8028
#define GL_HISTOGRAM_GREEN_SIZE                                                    0x8029
#define GL_HISTOGRAM_GREEN_SIZE_EXT                                                0x8029
#define GL_HISTOGRAM_BLUE_SIZE                                                     0x802A
#define GL_HISTOGRAM_BLUE_SIZE_EXT                                                 0x802A
#define GL_HISTOGRAM_ALPHA_SIZE                                                    0x802B
#define GL_HISTOGRAM_ALPHA_SIZE_EXT                                                0x802B
#define GL_HISTOGRAM_LUMINANCE_SIZE                                                0x802C
#define GL_HISTOGRAM_LUMINANCE_SIZE_EXT                                            0x802C
#define GL_HISTOGRAM_SINK                                                          0x802D
#define GL_HISTOGRAM_SINK_EXT                                                      0x802D
#define GL_MINMAX                                                                  0x802E
#define GL_MINMAX_EXT                                                              0x802E
#define GL_MINMAX_FORMAT                                                           0x802F
#define GL_MINMAX_FORMAT_EXT                                                       0x802F
#define GL_MINMAX_SINK                                                             0x8030
#define GL_MINMAX_SINK_EXT                                                         0x8030
#define GL_TABLE_TOO_LARGE                                                         0x8031
#define GL_TABLE_TOO_LARGE_EXT                                                     0x8031
#define GL_UNSIGNED_BYTE_3_3_2                                                     0x8032
#define GL_UNSIGNED_BYTE_3_3_2_EXT                                                 0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4                                                  0x8033
#define GL_UNSIGNED_SHORT_4_4_4_4_EXT                                              0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1                                                  0x8034
#define GL_UNSIGNED_SHORT_5_5_5_1_EXT                                              0x8034
#define GL_UNSIGNED_INT_8_8_8_8                                                    0x8035
#define GL_UNSIGNED_INT_8_8_8_8_EXT                                                0x8035
#define GL_UNSIGNED_INT_10_10_10_2                                                 0x8036
#define GL_UNSIGNED_INT_10_10_10_2_EXT                                             0x8036
#define GL_POLYGON_OFFSET_EXT                                                      0x8037
#define GL_POLYGON_OFFSET_FILL                                                     0x8037
#define GL_POLYGON_OFFSET_FACTOR                                                   0x8038
#define GL_POLYGON_OFFSET_FACTOR_EXT                                               0x8038
#define GL_POLYGON_OFFSET_BIAS_EXT                                                 0x8039
#define GL_RESCALE_NORMAL                                                          0x803A
#define GL_RESCALE_NORMAL_EXT                                                      0x803A
#define GL_ALPHA4                                                                  0x803B
#define GL_ALPHA4_EXT                                                              0x803B
#define GL_ALPHA8                                                                  0x803C
#define GL_ALPHA8_EXT                                                              0x803C
#define GL_ALPHA8_OES                                                              0x803C
#define GL_ALPHA12                                                                 0x803D
#define GL_ALPHA12_EXT                                                             0x803D
#define GL_ALPHA16                                                                 0x803E
#define GL_ALPHA16_EXT                                                             0x803E
#define GL_LUMINANCE4                                                              0x803F
#define GL_LUMINANCE4_EXT                                                          0x803F
#define GL_LUMINANCE8                                                              0x8040
#define GL_LUMINANCE8_EXT                                                          0x8040
#define GL_LUMINANCE8_OES                                                          0x8040
#define GL_LUMINANCE12                                                             0x8041
#define GL_LUMINANCE12_EXT                                                         0x8041
#define GL_LUMINANCE16                                                             0x8042
#define GL_LUMINANCE16_EXT                                                         0x8042
#define GL_LUMINANCE4_ALPHA4                                                       0x8043
#define GL_LUMINANCE4_ALPHA4_EXT                                                   0x8043
#define GL_LUMINANCE4_ALPHA4_OES                                                   0x8043
#define GL_LUMINANCE6_ALPHA2                                                       0x8044
#define GL_LUMINANCE6_ALPHA2_EXT                                                   0x8044
#define GL_LUMINANCE8_ALPHA8                                                       0x8045
#define GL_LUMINANCE8_ALPHA8_EXT                                                   0x8045
#define GL_LUMINANCE8_ALPHA8_OES                                                   0x8045
#define GL_LUMINANCE12_ALPHA4                                                      0x8046
#define GL_LUMINANCE12_ALPHA4_EXT                                                  0x8046
#define GL_LUMINANCE12_ALPHA12                                                     0x8047
#define GL_LUMINANCE12_ALPHA12_EXT                                                 0x8047
#define GL_LUMINANCE16_ALPHA16                                                     0x8048
#define GL_LUMINANCE16_ALPHA16_EXT                                                 0x8048
#define GL_INTENSITY                                                               0x8049
#define GL_INTENSITY_EXT                                                           0x8049
#define GL_INTENSITY4                                                              0x804A
#define GL_INTENSITY4_EXT                                                          0x804A
#define GL_INTENSITY8                                                              0x804B
#define GL_INTENSITY8_EXT                                                          0x804B
#define GL_INTENSITY12                                                             0x804C
#define GL_INTENSITY12_EXT                                                         0x804C
#define GL_INTENSITY16                                                             0x804D
#define GL_INTENSITY16_EXT                                                         0x804D
#define GL_RGB2_EXT                                                                0x804E
#define GL_RGB4                                                                    0x804F
#define GL_RGB4_EXT                                                                0x804F
#define GL_RGB5                                                                    0x8050
#define GL_RGB5_EXT                                                                0x8050
#define GL_RGB8                                                                    0x8051
#define GL_RGB8_EXT                                                                0x8051
#define GL_RGB8_OES                                                                0x8051
#define GL_RGB10                                                                   0x8052
#define GL_RGB10_EXT                                                               0x8052
#define GL_RGB12                                                                   0x8053
#define GL_RGB12_EXT                                                               0x8053
#define GL_RGB16                                                                   0x8054
#define GL_RGB16_EXT                                                               0x8054
#define GL_RGBA2                                                                   0x8055
#define GL_RGBA2_EXT                                                               0x8055
#define GL_RGBA4                                                                   0x8056
#define GL_RGBA4_EXT                                                               0x8056
#define GL_RGBA4_OES                                                               0x8056
#define GL_RGB5_A1                                                                 0x8057
#define GL_RGB5_A1_EXT                                                             0x8057
#define GL_RGB5_A1_OES                                                             0x8057
#define GL_RGBA8                                                                   0x8058
#define GL_RGBA8_EXT                                                               0x8058
#define GL_RGBA8_OES                                                               0x8058
#define GL_RGB10_A2                                                                0x8059
#define GL_RGB10_A2_EXT                                                            0x8059
#define GL_RGBA12                                                                  0x805A
#define GL_RGBA12_EXT                                                              0x805A
#define GL_RGBA16                                                                  0x805B
#define GL_RGBA16_EXT                                                              0x805B
#define GL_TEXTURE_RED_SIZE                                                        0x805C
#define GL_TEXTURE_RED_SIZE_EXT                                                    0x805C
#define GL_TEXTURE_GREEN_SIZE                                                      0x805D
#define GL_TEXTURE_GREEN_SIZE_EXT                                                  0x805D
#define GL_TEXTURE_BLUE_SIZE                                                       0x805E
#define GL_TEXTURE_BLUE_SIZE_EXT                                                   0x805E
#define GL_TEXTURE_ALPHA_SIZE                                                      0x805F
#define GL_TEXTURE_ALPHA_SIZE_EXT                                                  0x805F
#define GL_TEXTURE_LUMINANCE_SIZE                                                  0x8060
#define GL_TEXTURE_LUMINANCE_SIZE_EXT                                              0x8060
#define GL_TEXTURE_INTENSITY_SIZE                                                  0x8061
#define GL_TEXTURE_INTENSITY_SIZE_EXT                                              0x8061
#define GL_REPLACE_EXT                                                             0x8062
#define GL_PROXY_TEXTURE_1D                                                        0x8063
#define GL_PROXY_TEXTURE_1D_EXT                                                    0x8063
#define GL_PROXY_TEXTURE_2D                                                        0x8064
#define GL_PROXY_TEXTURE_2D_EXT                                                    0x8064
#define GL_TEXTURE_TOO_LARGE_EXT                                                   0x8065
#define GL_TEXTURE_PRIORITY                                                        0x8066
#define GL_TEXTURE_PRIORITY_EXT                                                    0x8066
#define GL_TEXTURE_RESIDENT                                                        0x8067
#define GL_TEXTURE_RESIDENT_EXT                                                    0x8067
#define GL_TEXTURE_1D_BINDING_EXT                                                  0x8068
#define GL_TEXTURE_BINDING_1D                                                      0x8068
#define GL_TEXTURE_2D_BINDING_EXT                                                  0x8069
#define GL_TEXTURE_BINDING_2D                                                      0x8069
#define GL_TEXTURE_3D_BINDING_EXT                                                  0x806A
#define GL_TEXTURE_3D_BINDING_OES                                                  0x806A
#define GL_TEXTURE_BINDING_3D                                                      0x806A
#define GL_TEXTURE_BINDING_3D_OES                                                  0x806A
#define GL_PACK_SKIP_IMAGES                                                        0x806B
#define GL_PACK_SKIP_IMAGES_EXT                                                    0x806B
#define GL_PACK_IMAGE_HEIGHT                                                       0x806C
#define GL_PACK_IMAGE_HEIGHT_EXT                                                   0x806C
#define GL_UNPACK_SKIP_IMAGES                                                      0x806D
#define GL_UNPACK_SKIP_IMAGES_EXT                                                  0x806D
#define GL_UNPACK_IMAGE_HEIGHT                                                     0x806E
#define GL_UNPACK_IMAGE_HEIGHT_EXT                                                 0x806E
#define GL_TEXTURE_3D                                                              0x806F
#define GL_TEXTURE_3D_EXT                                                          0x806F
#define GL_TEXTURE_3D_OES                                                          0x806F
#define GL_PROXY_TEXTURE_3D                                                        0x8070
#define GL_PROXY_TEXTURE_3D_EXT                                                    0x8070
#define GL_TEXTURE_DEPTH                                                           0x8071
#define GL_TEXTURE_DEPTH_EXT                                                       0x8071
#define GL_TEXTURE_WRAP_R                                                          0x8072
#define GL_TEXTURE_WRAP_R_EXT                                                      0x8072
#define GL_TEXTURE_WRAP_R_OES                                                      0x8072
#define GL_MAX_3D_TEXTURE_SIZE                                                     0x8073
#define GL_MAX_3D_TEXTURE_SIZE_EXT                                                 0x8073
#define GL_MAX_3D_TEXTURE_SIZE_OES                                                 0x8073
#define GL_VERTEX_ARRAY                                                            0x8074
#define GL_VERTEX_ARRAY_EXT                                                        0x8074
#define GL_VERTEX_ARRAY_KHR                                                        0x8074
#define GL_NORMAL_ARRAY                                                            0x8075
#define GL_NORMAL_ARRAY_EXT                                                        0x8075
#define GL_COLOR_ARRAY                                                             0x8076
#define GL_COLOR_ARRAY_EXT                                                         0x8076
#define GL_INDEX_ARRAY                                                             0x8077
#define GL_INDEX_ARRAY_EXT                                                         0x8077
#define GL_TEXTURE_COORD_ARRAY                                                     0x8078
#define GL_TEXTURE_COORD_ARRAY_EXT                                                 0x8078
#define GL_EDGE_FLAG_ARRAY                                                         0x8079
#define GL_EDGE_FLAG_ARRAY_EXT                                                     0x8079
#define GL_VERTEX_ARRAY_SIZE                                                       0x807A
#define GL_VERTEX_ARRAY_SIZE_EXT                                                   0x807A
#define GL_VERTEX_ARRAY_TYPE                                                       0x807B
#define GL_VERTEX_ARRAY_TYPE_EXT                                                   0x807B
#define GL_VERTEX_ARRAY_STRIDE                                                     0x807C
#define GL_VERTEX_ARRAY_STRIDE_EXT                                                 0x807C
#define GL_VERTEX_ARRAY_COUNT_EXT                                                  0x807D
#define GL_NORMAL_ARRAY_TYPE                                                       0x807E
#define GL_NORMAL_ARRAY_TYPE_EXT                                                   0x807E
#define GL_NORMAL_ARRAY_STRIDE                                                     0x807F
#define GL_NORMAL_ARRAY_STRIDE_EXT                                                 0x807F
#define GL_NORMAL_ARRAY_COUNT_EXT                                                  0x8080
#define GL_COLOR_ARRAY_SIZE                                                        0x8081
#define GL_COLOR_ARRAY_SIZE_EXT                                                    0x8081
#define GL_COLOR_ARRAY_TYPE                                                        0x8082
#define GL_COLOR_ARRAY_TYPE_EXT                                                    0x8082
#define GL_COLOR_ARRAY_STRIDE                                                      0x8083
#define GL_COLOR_ARRAY_STRIDE_EXT                                                  0x8083
#define GL_COLOR_ARRAY_COUNT_EXT                                                   0x8084
#define GL_INDEX_ARRAY_TYPE                                                        0x8085
#define GL_INDEX_ARRAY_TYPE_EXT                                                    0x8085
#define GL_INDEX_ARRAY_STRIDE                                                      0x8086
#define GL_INDEX_ARRAY_STRIDE_EXT                                                  0x8086
#define GL_INDEX_ARRAY_COUNT_EXT                                                   0x8087
#define GL_TEXTURE_COORD_ARRAY_SIZE                                                0x8088
#define GL_TEXTURE_COORD_ARRAY_SIZE_EXT                                            0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE                                                0x8089
#define GL_TEXTURE_COORD_ARRAY_TYPE_EXT                                            0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE                                              0x808A
#define GL_TEXTURE_COORD_ARRAY_STRIDE_EXT                                          0x808A
#define GL_TEXTURE_COORD_ARRAY_COUNT_EXT                                           0x808B
#define GL_EDGE_FLAG_ARRAY_STRIDE                                                  0x808C
#define GL_EDGE_FLAG_ARRAY_STRIDE_EXT                                              0x808C
#define GL_EDGE_FLAG_ARRAY_COUNT_EXT                                               0x808D
#define GL_VERTEX_ARRAY_POINTER                                                    0x808E
#define GL_VERTEX_ARRAY_POINTER_EXT                                                0x808E
#define GL_NORMAL_ARRAY_POINTER                                                    0x808F
#define GL_NORMAL_ARRAY_POINTER_EXT                                                0x808F
#define GL_COLOR_ARRAY_POINTER                                                     0x8090
#define GL_COLOR_ARRAY_POINTER_EXT                                                 0x8090
#define GL_INDEX_ARRAY_POINTER                                                     0x8091
#define GL_INDEX_ARRAY_POINTER_EXT                                                 0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER                                             0x8092
#define GL_TEXTURE_COORD_ARRAY_POINTER_EXT                                         0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER                                                 0x8093
#define GL_EDGE_FLAG_ARRAY_POINTER_EXT                                             0x8093
#define GL_INTERLACE_SGIX                                                          0x8094
#define GL_DETAIL_TEXTURE_2D_SGIS                                                  0x8095
#define GL_DETAIL_TEXTURE_2D_BINDING_SGIS                                          0x8096
#define GL_LINEAR_DETAIL_SGIS                                                      0x8097
#define GL_LINEAR_DETAIL_ALPHA_SGIS                                                0x8098
#define GL_LINEAR_DETAIL_COLOR_SGIS                                                0x8099
#define GL_DETAIL_TEXTURE_LEVEL_SGIS                                               0x809A
#define GL_DETAIL_TEXTURE_MODE_SGIS                                                0x809B
#define GL_DETAIL_TEXTURE_FUNC_POINTS_SGIS                                         0x809C
#define GL_MULTISAMPLE                                                             0x809D
#define GL_MULTISAMPLE_ARB                                                         0x809D
#define GL_MULTISAMPLE_EXT                                                         0x809D
#define GL_MULTISAMPLE_SGIS                                                        0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE                                                0x809E
#define GL_SAMPLE_ALPHA_TO_COVERAGE_ARB                                            0x809E
#define GL_SAMPLE_ALPHA_TO_MASK_EXT                                                0x809E
#define GL_SAMPLE_ALPHA_TO_MASK_SGIS                                               0x809E
#define GL_SAMPLE_ALPHA_TO_ONE                                                     0x809F
#define GL_SAMPLE_ALPHA_TO_ONE_ARB                                                 0x809F
#define GL_SAMPLE_ALPHA_TO_ONE_EXT                                                 0x809F
#define GL_SAMPLE_ALPHA_TO_ONE_SGIS                                                0x809F
#define GL_SAMPLE_COVERAGE                                                         0x80A0
#define GL_SAMPLE_COVERAGE_ARB                                                     0x80A0
#define GL_SAMPLE_MASK_EXT                                                         0x80A0
#define GL_SAMPLE_MASK_SGIS                                                        0x80A0
#define GL_1PASS_EXT                                                               0x80A1
#define GL_1PASS_SGIS                                                              0x80A1
#define GL_2PASS_0_EXT                                                             0x80A2
#define GL_2PASS_0_SGIS                                                            0x80A2
#define GL_2PASS_1_EXT                                                             0x80A3
#define GL_2PASS_1_SGIS                                                            0x80A3
#define GL_4PASS_0_EXT                                                             0x80A4
#define GL_4PASS_0_SGIS                                                            0x80A4
#define GL_4PASS_1_EXT                                                             0x80A5
#define GL_4PASS_1_SGIS                                                            0x80A5
#define GL_4PASS_2_EXT                                                             0x80A6
#define GL_4PASS_2_SGIS                                                            0x80A6
#define GL_4PASS_3_EXT                                                             0x80A7
#define GL_4PASS_3_SGIS                                                            0x80A7
#define GL_SAMPLE_BUFFERS                                                          0x80A8
#define GL_SAMPLE_BUFFERS_ARB                                                      0x80A8
#define GL_SAMPLE_BUFFERS_EXT                                                      0x80A8
#define GL_SAMPLE_BUFFERS_SGIS                                                     0x80A8
#define GL_SAMPLES                                                                 0x80A9
#define GL_SAMPLES_ARB                                                             0x80A9
#define GL_SAMPLES_EXT                                                             0x80A9
#define GL_SAMPLES_SGIS                                                            0x80A9
#define GL_SAMPLE_COVERAGE_VALUE                                                   0x80AA
#define GL_SAMPLE_COVERAGE_VALUE_ARB                                               0x80AA
#define GL_SAMPLE_MASK_VALUE_EXT                                                   0x80AA
#define GL_SAMPLE_MASK_VALUE_SGIS                                                  0x80AA
#define GL_SAMPLE_COVERAGE_INVERT                                                  0x80AB
#define GL_SAMPLE_COVERAGE_INVERT_ARB                                              0x80AB
#define GL_SAMPLE_MASK_INVERT_EXT                                                  0x80AB
#define GL_SAMPLE_MASK_INVERT_SGIS                                                 0x80AB
#define GL_SAMPLE_PATTERN_EXT                                                      0x80AC
#define GL_SAMPLE_PATTERN_SGIS                                                     0x80AC
#define GL_LINEAR_SHARPEN_SGIS                                                     0x80AD
#define GL_LINEAR_SHARPEN_ALPHA_SGIS                                               0x80AE
#define GL_LINEAR_SHARPEN_COLOR_SGIS                                               0x80AF
#define GL_SHARPEN_TEXTURE_FUNC_POINTS_SGIS                                        0x80B0
#define GL_COLOR_MATRIX                                                            0x80B1
#define GL_COLOR_MATRIX_SGI                                                        0x80B1
#define GL_COLOR_MATRIX_STACK_DEPTH                                                0x80B2
#define GL_COLOR_MATRIX_STACK_DEPTH_SGI                                            0x80B2
#define GL_MAX_COLOR_MATRIX_STACK_DEPTH                                            0x80B3
#define GL_MAX_COLOR_MATRIX_STACK_DEPTH_SGI                                        0x80B3
#define GL_POST_COLOR_MATRIX_RED_SCALE                                             0x80B4
#define GL_POST_COLOR_MATRIX_RED_SCALE_SGI                                         0x80B4
#define GL_POST_COLOR_MATRIX_GREEN_SCALE                                           0x80B5
#define GL_POST_COLOR_MATRIX_GREEN_SCALE_SGI                                       0x80B5
#define GL_POST_COLOR_MATRIX_BLUE_SCALE                                            0x80B6
#define GL_POST_COLOR_MATRIX_BLUE_SCALE_SGI                                        0x80B6
#define GL_POST_COLOR_MATRIX_ALPHA_SCALE                                           0x80B7
#define GL_POST_COLOR_MATRIX_ALPHA_SCALE_SGI                                       0x80B7
#define GL_POST_COLOR_MATRIX_RED_BIAS                                              0x80B8
#define GL_POST_COLOR_MATRIX_RED_BIAS_SGI                                          0x80B8
#define GL_POST_COLOR_MATRIX_GREEN_BIAS                                            0x80B9
#define GL_POST_COLOR_MATRIX_GREEN_BIAS_SGI                                        0x80B9
#define GL_POST_COLOR_MATRIX_BLUE_BIAS                                             0x80BA
#define GL_POST_COLOR_MATRIX_BLUE_BIAS_SGI                                         0x80BA
#define GL_POST_COLOR_MATRIX_ALPHA_BIAS                                            0x80BB
#define GL_POST_COLOR_MATRIX_ALPHA_BIAS_SGI                                        0x80BB
#define GL_TEXTURE_COLOR_TABLE_SGI                                                 0x80BC
#define GL_PROXY_TEXTURE_COLOR_TABLE_SGI                                           0x80BD
#define GL_TEXTURE_ENV_BIAS_SGIX                                                   0x80BE
#define GL_SHADOW_AMBIENT_SGIX                                                     0x80BF
#define GL_TEXTURE_COMPARE_FAIL_VALUE_ARB                                          0x80BF
#define GL_BLEND_DST_RGB                                                           0x80C8
#define GL_BLEND_DST_RGB_EXT                                                       0x80C8
#define GL_BLEND_DST_RGB_OES                                                       0x80C8
#define GL_BLEND_SRC_RGB                                                           0x80C9
#define GL_BLEND_SRC_RGB_EXT                                                       0x80C9
#define GL_BLEND_SRC_RGB_OES                                                       0x80C9
#define GL_BLEND_DST_ALPHA                                                         0x80CA
#define GL_BLEND_DST_ALPHA_EXT                                                     0x80CA
#define GL_BLEND_DST_ALPHA_OES                                                     0x80CA
#define GL_BLEND_SRC_ALPHA                                                         0x80CB
#define GL_BLEND_SRC_ALPHA_EXT                                                     0x80CB
#define GL_BLEND_SRC_ALPHA_OES                                                     0x80CB
#define GL_422_EXT                                                                 0x80CC
#define GL_422_REV_EXT                                                             0x80CD
#define GL_422_AVERAGE_EXT                                                         0x80CE
#define GL_422_REV_AVERAGE_EXT                                                     0x80CF
#define GL_COLOR_TABLE                                                             0x80D0
#define GL_COLOR_TABLE_SGI                                                         0x80D0
#define GL_POST_CONVOLUTION_COLOR_TABLE                                            0x80D1
#define GL_POST_CONVOLUTION_COLOR_TABLE_SGI                                        0x80D1
#define GL_POST_COLOR_MATRIX_COLOR_TABLE                                           0x80D2
#define GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI                                       0x80D2
#define GL_PROXY_COLOR_TABLE                                                       0x80D3
#define GL_PROXY_COLOR_TABLE_SGI                                                   0x80D3
#define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE                                      0x80D4
#define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE_SGI                                  0x80D4
#define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE                                     0x80D5
#define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE_SGI                                 0x80D5
#define GL_COLOR_TABLE_SCALE                                                       0x80D6
#define GL_COLOR_TABLE_SCALE_SGI                                                   0x80D6
#define GL_COLOR_TABLE_BIAS                                                        0x80D7
#define GL_COLOR_TABLE_BIAS_SGI                                                    0x80D7
#define GL_COLOR_TABLE_FORMAT                                                      0x80D8
#define GL_COLOR_TABLE_FORMAT_SGI                                                  0x80D8
#define GL_COLOR_TABLE_WIDTH                                                       0x80D9
#define GL_COLOR_TABLE_WIDTH_SGI                                                   0x80D9
#define GL_COLOR_TABLE_RED_SIZE                                                    0x80DA
#define GL_COLOR_TABLE_RED_SIZE_SGI                                                0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE                                                  0x80DB
#define GL_COLOR_TABLE_GREEN_SIZE_SGI                                              0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE                                                   0x80DC
#define GL_COLOR_TABLE_BLUE_SIZE_SGI                                               0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE                                                  0x80DD
#define GL_COLOR_TABLE_ALPHA_SIZE_SGI                                              0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE                                              0x80DE
#define GL_COLOR_TABLE_LUMINANCE_SIZE_SGI                                          0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE                                              0x80DF
#define GL_COLOR_TABLE_INTENSITY_SIZE_SGI                                          0x80DF
#define GL_BGR                                                                     0x80E0
#define GL_BGR_EXT                                                                 0x80E0
#define GL_BGRA                                                                    0x80E1
#define GL_BGRA_EXT                                                                0x80E1
#define GL_BGRA_IMG                                                                0x80E1
#define GL_COLOR_INDEX1_EXT                                                        0x80E2
#define GL_COLOR_INDEX2_EXT                                                        0x80E3
#define GL_COLOR_INDEX4_EXT                                                        0x80E4
#define GL_COLOR_INDEX8_EXT                                                        0x80E5
#define GL_COLOR_INDEX12_EXT                                                       0x80E6
#define GL_COLOR_INDEX16_EXT                                                       0x80E7
#define GL_MAX_ELEMENTS_VERTICES                                                   0x80E8
#define GL_MAX_ELEMENTS_VERTICES_EXT                                               0x80E8
#define GL_MAX_ELEMENTS_INDICES                                                    0x80E9
#define GL_MAX_ELEMENTS_INDICES_EXT                                                0x80E9
#define GL_PHONG_WIN                                                               0x80EA
#define GL_PHONG_HINT_WIN                                                          0x80EB
#define GL_FOG_SPECULAR_TEXTURE_WIN                                                0x80EC
#define GL_TEXTURE_INDEX_SIZE_EXT                                                  0x80ED
#define GL_PARAMETER_BUFFER                                                        0x80EE
#define GL_PARAMETER_BUFFER_ARB                                                    0x80EE
#define GL_PARAMETER_BUFFER_BINDING                                                0x80EF
#define GL_PARAMETER_BUFFER_BINDING_ARB                                            0x80EF
#define GL_CLIP_VOLUME_CLIPPING_HINT_EXT                                           0x80F0
#define GL_DUAL_ALPHA4_SGIS                                                        0x8110
#define GL_DUAL_ALPHA8_SGIS                                                        0x8111
#define GL_DUAL_ALPHA12_SGIS                                                       0x8112
#define GL_DUAL_ALPHA16_SGIS                                                       0x8113
#define GL_DUAL_LUMINANCE4_SGIS                                                    0x8114
#define GL_DUAL_LUMINANCE8_SGIS                                                    0x8115
#define GL_DUAL_LUMINANCE12_SGIS                                                   0x8116
#define GL_DUAL_LUMINANCE16_SGIS                                                   0x8117
#define GL_DUAL_INTENSITY4_SGIS                                                    0x8118
#define GL_DUAL_INTENSITY8_SGIS                                                    0x8119
#define GL_DUAL_INTENSITY12_SGIS                                                   0x811A
#define GL_DUAL_INTENSITY16_SGIS                                                   0x811B
#define GL_DUAL_LUMINANCE_ALPHA4_SGIS                                              0x811C
#define GL_DUAL_LUMINANCE_ALPHA8_SGIS                                              0x811D
#define GL_QUAD_ALPHA4_SGIS                                                        0x811E
#define GL_QUAD_ALPHA8_SGIS                                                        0x811F
#define GL_QUAD_LUMINANCE4_SGIS                                                    0x8120
#define GL_QUAD_LUMINANCE8_SGIS                                                    0x8121
#define GL_QUAD_INTENSITY4_SGIS                                                    0x8122
#define GL_QUAD_INTENSITY8_SGIS                                                    0x8123
#define GL_DUAL_TEXTURE_SELECT_SGIS                                                0x8124
#define GL_QUAD_TEXTURE_SELECT_SGIS                                                0x8125
#define GL_POINT_SIZE_MIN                                                          0x8126
#define GL_POINT_SIZE_MIN_ARB                                                      0x8126
#define GL_POINT_SIZE_MIN_EXT                                                      0x8126
#define GL_POINT_SIZE_MIN_SGIS                                                     0x8126
#define GL_POINT_SIZE_MAX                                                          0x8127
#define GL_POINT_SIZE_MAX_ARB                                                      0x8127
#define GL_POINT_SIZE_MAX_EXT                                                      0x8127
#define GL_POINT_SIZE_MAX_SGIS                                                     0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE                                               0x8128
#define GL_POINT_FADE_THRESHOLD_SIZE_ARB                                           0x8128
#define GL_POINT_FADE_THRESHOLD_SIZE_EXT                                           0x8128
#define GL_POINT_FADE_THRESHOLD_SIZE_SGIS                                          0x8128
#define GL_DISTANCE_ATTENUATION_EXT                                                0x8129
#define GL_DISTANCE_ATTENUATION_SGIS                                               0x8129
#define GL_POINT_DISTANCE_ATTENUATION                                              0x8129
#define GL_POINT_DISTANCE_ATTENUATION_ARB                                          0x8129
#define GL_FOG_FUNC_SGIS                                                           0x812A
#define GL_FOG_FUNC_POINTS_SGIS                                                    0x812B
#define GL_MAX_FOG_FUNC_POINTS_SGIS                                                0x812C
#define GL_CLAMP_TO_BORDER                                                         0x812D
#define GL_CLAMP_TO_BORDER_ARB                                                     0x812D
#define GL_CLAMP_TO_BORDER_EXT                                                     0x812D
#define GL_CLAMP_TO_BORDER_NV                                                      0x812D
#define GL_CLAMP_TO_BORDER_OES                                                     0x812D
#define GL_CLAMP_TO_BORDER_SGIS                                                    0x812D
#define GL_TEXTURE_MULTI_BUFFER_HINT_SGIX                                          0x812E
#define GL_CLAMP_TO_EDGE                                                           0x812F
#define GL_CLAMP_TO_EDGE_SGIS                                                      0x812F
#define GL_PACK_SKIP_VOLUMES_SGIS                                                  0x8130
#define GL_PACK_IMAGE_DEPTH_SGIS                                                   0x8131
#define GL_UNPACK_SKIP_VOLUMES_SGIS                                                0x8132
#define GL_UNPACK_IMAGE_DEPTH_SGIS                                                 0x8133
#define GL_TEXTURE_4D_SGIS                                                         0x8134
#define GL_PROXY_TEXTURE_4D_SGIS                                                   0x8135
#define GL_TEXTURE_4DSIZE_SGIS                                                     0x8136
#define GL_TEXTURE_WRAP_Q_SGIS                                                     0x8137
#define GL_MAX_4D_TEXTURE_SIZE_SGIS                                                0x8138
#define GL_PIXEL_TEX_GEN_SGIX                                                      0x8139
#define GL_TEXTURE_MIN_LOD                                                         0x813A
#define GL_TEXTURE_MIN_LOD_SGIS                                                    0x813A
#define GL_TEXTURE_MAX_LOD                                                         0x813B
#define GL_TEXTURE_MAX_LOD_SGIS                                                    0x813B
#define GL_TEXTURE_BASE_LEVEL                                                      0x813C
#define GL_TEXTURE_BASE_LEVEL_SGIS                                                 0x813C
#define GL_TEXTURE_MAX_LEVEL                                                       0x813D
#define GL_TEXTURE_MAX_LEVEL_APPLE                                                 0x813D
#define GL_TEXTURE_MAX_LEVEL_SGIS                                                  0x813D
#define GL_PIXEL_TILE_BEST_ALIGNMENT_SGIX                                          0x813E
#define GL_PIXEL_TILE_CACHE_INCREMENT_SGIX                                         0x813F
#define GL_PIXEL_TILE_WIDTH_SGIX                                                   0x8140
#define GL_PIXEL_TILE_HEIGHT_SGIX                                                  0x8141
#define GL_PIXEL_TILE_GRID_WIDTH_SGIX                                              0x8142
#define GL_PIXEL_TILE_GRID_HEIGHT_SGIX                                             0x8143
#define GL_PIXEL_TILE_GRID_DEPTH_SGIX                                              0x8144
#define GL_PIXEL_TILE_CACHE_SIZE_SGIX                                              0x8145
#define GL_FILTER4_SGIS                                                            0x8146
#define GL_TEXTURE_FILTER4_SIZE_SGIS                                               0x8147
#define GL_SPRITE_SGIX                                                             0x8148
#define GL_SPRITE_MODE_SGIX                                                        0x8149
#define GL_SPRITE_AXIS_SGIX                                                        0x814A
#define GL_SPRITE_TRANSLATION_SGIX                                                 0x814B
#define GL_SPRITE_AXIAL_SGIX                                                       0x814C
#define GL_SPRITE_OBJECT_ALIGNED_SGIX                                              0x814D
#define GL_SPRITE_EYE_ALIGNED_SGIX                                                 0x814E
#define GL_TEXTURE_4D_BINDING_SGIS                                                 0x814F
#define GL_IGNORE_BORDER_HP                                                        0x8150
#define GL_CONSTANT_BORDER                                                         0x8151
#define GL_CONSTANT_BORDER_HP                                                      0x8151
#define GL_REPLICATE_BORDER                                                        0x8153
#define GL_REPLICATE_BORDER_HP                                                     0x8153
#define GL_CONVOLUTION_BORDER_COLOR                                                0x8154
#define GL_CONVOLUTION_BORDER_COLOR_HP                                             0x8154
#define GL_IMAGE_SCALE_X_HP                                                        0x8155
#define GL_IMAGE_SCALE_Y_HP                                                        0x8156
#define GL_IMAGE_TRANSLATE_X_HP                                                    0x8157
#define GL_IMAGE_TRANSLATE_Y_HP                                                    0x8158
#define GL_IMAGE_ROTATE_ANGLE_HP                                                   0x8159
#define GL_IMAGE_ROTATE_ORIGIN_X_HP                                                0x815A
#define GL_IMAGE_ROTATE_ORIGIN_Y_HP                                                0x815B
#define GL_IMAGE_MAG_FILTER_HP                                                     0x815C
#define GL_IMAGE_MIN_FILTER_HP                                                     0x815D
#define GL_IMAGE_CUBIC_WEIGHT_HP                                                   0x815E
#define GL_CUBIC_HP                                                                0x815F
#define GL_AVERAGE_HP                                                              0x8160
#define GL_IMAGE_TRANSFORM_2D_HP                                                   0x8161
#define GL_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP                                     0x8162
#define GL_PROXY_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP                               0x8163
#define GL_OCCLUSION_TEST_HP                                                       0x8165
#define GL_OCCLUSION_TEST_RESULT_HP                                                0x8166
#define GL_TEXTURE_LIGHTING_MODE_HP                                                0x8167
#define GL_TEXTURE_POST_SPECULAR_HP                                                0x8168
#define GL_TEXTURE_PRE_SPECULAR_HP                                                 0x8169
#define GL_LINEAR_CLIPMAP_LINEAR_SGIX                                              0x8170
#define GL_TEXTURE_CLIPMAP_CENTER_SGIX                                             0x8171
#define GL_TEXTURE_CLIPMAP_FRAME_SGIX                                              0x8172
#define GL_TEXTURE_CLIPMAP_OFFSET_SGIX                                             0x8173
#define GL_TEXTURE_CLIPMAP_VIRTUAL_DEPTH_SGIX                                      0x8174
#define GL_TEXTURE_CLIPMAP_LOD_OFFSET_SGIX                                         0x8175
#define GL_TEXTURE_CLIPMAP_DEPTH_SGIX                                              0x8176
#define GL_MAX_CLIPMAP_DEPTH_SGIX                                                  0x8177
#define GL_MAX_CLIPMAP_VIRTUAL_DEPTH_SGIX                                          0x8178
#define GL_POST_TEXTURE_FILTER_BIAS_SGIX                                           0x8179
#define GL_POST_TEXTURE_FILTER_SCALE_SGIX                                          0x817A
#define GL_POST_TEXTURE_FILTER_BIAS_RANGE_SGIX                                     0x817B
#define GL_POST_TEXTURE_FILTER_SCALE_RANGE_SGIX                                    0x817C
#define GL_REFERENCE_PLANE_SGIX                                                    0x817D
#define GL_REFERENCE_PLANE_EQUATION_SGIX                                           0x817E
#define GL_IR_INSTRUMENT1_SGIX                                                     0x817F
#define GL_INSTRUMENT_BUFFER_POINTER_SGIX                                          0x8180
#define GL_INSTRUMENT_MEASUREMENTS_SGIX                                            0x8181
#define GL_LIST_PRIORITY_SGIX                                                      0x8182
#define GL_CALLIGRAPHIC_FRAGMENT_SGIX                                              0x8183
#define GL_PIXEL_TEX_GEN_Q_CEILING_SGIX                                            0x8184
#define GL_PIXEL_TEX_GEN_Q_ROUND_SGIX                                              0x8185
#define GL_PIXEL_TEX_GEN_Q_FLOOR_SGIX                                              0x8186
#define GL_PIXEL_TEX_GEN_ALPHA_REPLACE_SGIX                                        0x8187
#define GL_PIXEL_TEX_GEN_ALPHA_NO_REPLACE_SGIX                                     0x8188
#define GL_PIXEL_TEX_GEN_ALPHA_LS_SGIX                                             0x8189
#define GL_PIXEL_TEX_GEN_ALPHA_MS_SGIX                                             0x818A
#define GL_FRAMEZOOM_SGIX                                                          0x818B
#define GL_FRAMEZOOM_FACTOR_SGIX                                                   0x818C
#define GL_MAX_FRAMEZOOM_FACTOR_SGIX                                               0x818D
#define GL_TEXTURE_LOD_BIAS_S_SGIX                                                 0x818E
#define GL_TEXTURE_LOD_BIAS_T_SGIX                                                 0x818F
#define GL_TEXTURE_LOD_BIAS_R_SGIX                                                 0x8190
#define GL_GENERATE_MIPMAP                                                         0x8191
#define GL_GENERATE_MIPMAP_SGIS                                                    0x8191
#define GL_GENERATE_MIPMAP_HINT                                                    0x8192
#define GL_GENERATE_MIPMAP_HINT_SGIS                                               0x8192
#define GL_GEOMETRY_DEFORMATION_SGIX                                               0x8194
#define GL_TEXTURE_DEFORMATION_SGIX                                                0x8195
#define GL_DEFORMATIONS_MASK_SGIX                                                  0x8196
#define GL_MAX_DEFORMATION_ORDER_SGIX                                              0x8197
#define GL_FOG_OFFSET_SGIX                                                         0x8198
#define GL_FOG_OFFSET_VALUE_SGIX                                                   0x8199
#define GL_TEXTURE_COMPARE_SGIX                                                    0x819A
#define GL_TEXTURE_COMPARE_OPERATOR_SGIX                                           0x819B
#define GL_TEXTURE_LEQUAL_R_SGIX                                                   0x819C
#define GL_TEXTURE_GEQUAL_R_SGIX                                                   0x819D
#define GL_DEPTH_COMPONENT16                                                       0x81A5
#define GL_DEPTH_COMPONENT16_ARB                                                   0x81A5
#define GL_DEPTH_COMPONENT16_OES                                                   0x81A5
#define GL_DEPTH_COMPONENT16_SGIX                                                  0x81A5
#define GL_DEPTH_COMPONENT24                                                       0x81A6
#define GL_DEPTH_COMPONENT24_ARB                                                   0x81A6
#define GL_DEPTH_COMPONENT24_OES                                                   0x81A6
#define GL_DEPTH_COMPONENT24_SGIX                                                  0x81A6
#define GL_DEPTH_COMPONENT32                                                       0x81A7
#define GL_DEPTH_COMPONENT32_ARB                                                   0x81A7
#define GL_DEPTH_COMPONENT32_OES                                                   0x81A7
#define GL_DEPTH_COMPONENT32_SGIX                                                  0x81A7
#define GL_ARRAY_ELEMENT_LOCK_FIRST_EXT                                            0x81A8
#define GL_ARRAY_ELEMENT_LOCK_COUNT_EXT                                            0x81A9
#define GL_CULL_VERTEX_EXT                                                         0x81AA
#define GL_CULL_VERTEX_EYE_POSITION_EXT                                            0x81AB
#define GL_CULL_VERTEX_OBJECT_POSITION_EXT                                         0x81AC
#define GL_IUI_V2F_EXT                                                             0x81AD
#define GL_IUI_V3F_EXT                                                             0x81AE
#define GL_IUI_N3F_V2F_EXT                                                         0x81AF
#define GL_IUI_N3F_V3F_EXT                                                         0x81B0
#define GL_T2F_IUI_V2F_EXT                                                         0x81B1
#define GL_T2F_IUI_V3F_EXT                                                         0x81B2
#define GL_T2F_IUI_N3F_V2F_EXT                                                     0x81B3
#define GL_T2F_IUI_N3F_V3F_EXT                                                     0x81B4
#define GL_INDEX_TEST_EXT                                                          0x81B5
#define GL_INDEX_TEST_FUNC_EXT                                                     0x81B6
#define GL_INDEX_TEST_REF_EXT                                                      0x81B7
#define GL_INDEX_MATERIAL_EXT                                                      0x81B8
#define GL_INDEX_MATERIAL_PARAMETER_EXT                                            0x81B9
#define GL_INDEX_MATERIAL_FACE_EXT                                                 0x81BA
#define GL_YCRCB_422_SGIX                                                          0x81BB
#define GL_YCRCB_444_SGIX                                                          0x81BC
#define GL_WRAP_BORDER_SUN                                                         0x81D4
#define GL_UNPACK_CONSTANT_DATA_SUNX                                               0x81D5
#define GL_TEXTURE_CONSTANT_DATA_SUNX                                              0x81D6
#define GL_TRIANGLE_LIST_SUN                                                       0x81D7
#define GL_REPLACEMENT_CODE_SUN                                                    0x81D8
#define GL_GLOBAL_ALPHA_SUN                                                        0x81D9
#define GL_GLOBAL_ALPHA_FACTOR_SUN                                                 0x81DA
#define GL_TEXTURE_COLOR_WRITEMASK_SGIS                                            0x81EF
#define GL_EYE_DISTANCE_TO_POINT_SGIS                                              0x81F0
#define GL_OBJECT_DISTANCE_TO_POINT_SGIS                                           0x81F1
#define GL_EYE_DISTANCE_TO_LINE_SGIS                                               0x81F2
#define GL_OBJECT_DISTANCE_TO_LINE_SGIS                                            0x81F3
#define GL_EYE_POINT_SGIS                                                          0x81F4
#define GL_OBJECT_POINT_SGIS                                                       0x81F5
#define GL_EYE_LINE_SGIS                                                           0x81F6
#define GL_OBJECT_LINE_SGIS                                                        0x81F7
#define GL_LIGHT_MODEL_COLOR_CONTROL                                               0x81F8
#define GL_LIGHT_MODEL_COLOR_CONTROL_EXT                                           0x81F8
#define GL_SINGLE_COLOR                                                            0x81F9
#define GL_SINGLE_COLOR_EXT                                                        0x81F9
#define GL_SEPARATE_SPECULAR_COLOR                                                 0x81FA
#define GL_SEPARATE_SPECULAR_COLOR_EXT                                             0x81FA
#define GL_SHARED_TEXTURE_PALETTE_EXT                                              0x81FB
#define GL_TEXT_FRAGMENT_SHADER_ATI                                                0x8200
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING                                   0x8210
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT                               0x8210
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE                                   0x8211
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT                               0x8211
#define GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE                                         0x8212
#define GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE                                       0x8213
#define GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE                                        0x8214
#define GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE                                       0x8215
#define GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE                                       0x8216
#define GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE                                     0x8217
#define GL_FRAMEBUFFER_DEFAULT                                                     0x8218
#define GL_FRAMEBUFFER_UNDEFINED                                                   0x8219
#define GL_FRAMEBUFFER_UNDEFINED_OES                                               0x8219
#define GL_DEPTH_STENCIL_ATTACHMENT                                                0x821A
#define GL_MAJOR_VERSION                                                           0x821B
#define GL_MINOR_VERSION                                                           0x821C
#define GL_NUM_EXTENSIONS                                                          0x821D
#define GL_CONTEXT_FLAGS                                                           0x821E
#define GL_BUFFER_IMMUTABLE_STORAGE                                                0x821F
#define GL_BUFFER_IMMUTABLE_STORAGE_EXT                                            0x821F
#define GL_BUFFER_STORAGE_FLAGS                                                    0x8220
#define GL_BUFFER_STORAGE_FLAGS_EXT                                                0x8220
#define GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED                                 0x8221
#define GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED_OES                             0x8221
#define GL_INDEX                                                                   0x8222
#define GL_COMPRESSED_RED                                                          0x8225
#define GL_COMPRESSED_RG                                                           0x8226
#define GL_RG                                                                      0x8227
#define GL_RG_EXT                                                                  0x8227
#define GL_RG_INTEGER                                                              0x8228
#define GL_R8                                                                      0x8229
#define GL_R8_EXT                                                                  0x8229
#define GL_R16                                                                     0x822A
#define GL_R16_EXT                                                                 0x822A
#define GL_RG8                                                                     0x822B
#define GL_RG8_EXT                                                                 0x822B
#define GL_RG16                                                                    0x822C
#define GL_RG16_EXT                                                                0x822C
#define GL_R16F                                                                    0x822D
#define GL_R16F_EXT                                                                0x822D
#define GL_R32F                                                                    0x822E
#define GL_R32F_EXT                                                                0x822E
#define GL_RG16F                                                                   0x822F
#define GL_RG16F_EXT                                                               0x822F
#define GL_RG32F                                                                   0x8230
#define GL_RG32F_EXT                                                               0x8230
#define GL_R8I                                                                     0x8231
#define GL_R8UI                                                                    0x8232
#define GL_R16I                                                                    0x8233
#define GL_R16UI                                                                   0x8234
#define GL_R32I                                                                    0x8235
#define GL_R32UI                                                                   0x8236
#define GL_RG8I                                                                    0x8237
#define GL_RG8UI                                                                   0x8238
#define GL_RG16I                                                                   0x8239
#define GL_RG16UI                                                                  0x823A
#define GL_RG32I                                                                   0x823B
#define GL_RG32UI                                                                  0x823C
#define GL_SYNC_CL_EVENT_ARB                                                       0x8240
#define GL_SYNC_CL_EVENT_COMPLETE_ARB                                              0x8241
#define GL_DEBUG_OUTPUT_SYNCHRONOUS                                                0x8242
#define GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB                                            0x8242
#define GL_DEBUG_OUTPUT_SYNCHRONOUS_KHR                                            0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH                                        0x8243
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_ARB                                    0x8243
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_KHR                                    0x8243
#define GL_DEBUG_CALLBACK_FUNCTION                                                 0x8244
#define GL_DEBUG_CALLBACK_FUNCTION_ARB                                             0x8244
#define GL_DEBUG_CALLBACK_FUNCTION_KHR                                             0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM                                               0x8245
#define GL_DEBUG_CALLBACK_USER_PARAM_ARB                                           0x8245
#define GL_DEBUG_CALLBACK_USER_PARAM_KHR                                           0x8245
#define GL_DEBUG_SOURCE_API                                                        0x8246
#define GL_DEBUG_SOURCE_API_ARB                                                    0x8246
#define GL_DEBUG_SOURCE_API_KHR                                                    0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM                                              0x8247
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB                                          0x8247
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR                                          0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER                                            0x8248
#define GL_DEBUG_SOURCE_SHADER_COMPILER_ARB                                        0x8248
#define GL_DEBUG_SOURCE_SHADER_COMPILER_KHR                                        0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY                                                0x8249
#define GL_DEBUG_SOURCE_THIRD_PARTY_ARB                                            0x8249
#define GL_DEBUG_SOURCE_THIRD_PARTY_KHR                                            0x8249
#define GL_DEBUG_SOURCE_APPLICATION                                                0x824A
#define GL_DEBUG_SOURCE_APPLICATION_ARB                                            0x824A
#define GL_DEBUG_SOURCE_APPLICATION_KHR                                            0x824A
#define GL_DEBUG_SOURCE_OTHER                                                      0x824B
#define GL_DEBUG_SOURCE_OTHER_ARB                                                  0x824B
#define GL_DEBUG_SOURCE_OTHER_KHR                                                  0x824B
#define GL_DEBUG_TYPE_ERROR                                                        0x824C
#define GL_DEBUG_TYPE_ERROR_ARB                                                    0x824C
#define GL_DEBUG_TYPE_ERROR_KHR                                                    0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR                                          0x824D
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB                                      0x824D
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR                                      0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR                                           0x824E
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB                                       0x824E
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR                                       0x824E
#define GL_DEBUG_TYPE_PORTABILITY                                                  0x824F
#define GL_DEBUG_TYPE_PORTABILITY_ARB                                              0x824F
#define GL_DEBUG_TYPE_PORTABILITY_KHR                                              0x824F
#define GL_DEBUG_TYPE_PERFORMANCE                                                  0x8250
#define GL_DEBUG_TYPE_PERFORMANCE_ARB                                              0x8250
#define GL_DEBUG_TYPE_PERFORMANCE_KHR                                              0x8250
#define GL_DEBUG_TYPE_OTHER                                                        0x8251
#define GL_DEBUG_TYPE_OTHER_ARB                                                    0x8251
#define GL_DEBUG_TYPE_OTHER_KHR                                                    0x8251
#define GL_LOSE_CONTEXT_ON_RESET                                                   0x8252
#define GL_LOSE_CONTEXT_ON_RESET_ARB                                               0x8252
#define GL_LOSE_CONTEXT_ON_RESET_EXT                                               0x8252
#define GL_LOSE_CONTEXT_ON_RESET_KHR                                               0x8252
#define GL_GUILTY_CONTEXT_RESET                                                    0x8253
#define GL_GUILTY_CONTEXT_RESET_ARB                                                0x8253
#define GL_GUILTY_CONTEXT_RESET_EXT                                                0x8253
#define GL_GUILTY_CONTEXT_RESET_KHR                                                0x8253
#define GL_INNOCENT_CONTEXT_RESET                                                  0x8254
#define GL_INNOCENT_CONTEXT_RESET_ARB                                              0x8254
#define GL_INNOCENT_CONTEXT_RESET_EXT                                              0x8254
#define GL_INNOCENT_CONTEXT_RESET_KHR                                              0x8254
#define GL_UNKNOWN_CONTEXT_RESET                                                   0x8255
#define GL_UNKNOWN_CONTEXT_RESET_ARB                                               0x8255
#define GL_UNKNOWN_CONTEXT_RESET_EXT                                               0x8255
#define GL_UNKNOWN_CONTEXT_RESET_KHR                                               0x8255
#define GL_RESET_NOTIFICATION_STRATEGY                                             0x8256
#define GL_RESET_NOTIFICATION_STRATEGY_ARB                                         0x8256
#define GL_RESET_NOTIFICATION_STRATEGY_EXT                                         0x8256
#define GL_RESET_NOTIFICATION_STRATEGY_KHR                                         0x8256
#define GL_PROGRAM_BINARY_RETRIEVABLE_HINT                                         0x8257
#define GL_PROGRAM_SEPARABLE                                                       0x8258
#define GL_PROGRAM_SEPARABLE_EXT                                                   0x8258
#define GL_ACTIVE_PROGRAM                                                          0x8259
#define GL_PROGRAM_PIPELINE_BINDING                                                0x825A
#define GL_PROGRAM_PIPELINE_BINDING_EXT                                            0x825A
#define GL_MAX_VIEWPORTS                                                           0x825B
#define GL_MAX_VIEWPORTS_NV                                                        0x825B
#define GL_MAX_VIEWPORTS_OES                                                       0x825B
#define GL_VIEWPORT_SUBPIXEL_BITS                                                  0x825C
#define GL_VIEWPORT_SUBPIXEL_BITS_EXT                                              0x825C
#define GL_VIEWPORT_SUBPIXEL_BITS_NV                                               0x825C
#define GL_VIEWPORT_SUBPIXEL_BITS_OES                                              0x825C
#define GL_VIEWPORT_BOUNDS_RANGE                                                   0x825D
#define GL_VIEWPORT_BOUNDS_RANGE_EXT                                               0x825D
#define GL_VIEWPORT_BOUNDS_RANGE_NV                                                0x825D
#define GL_VIEWPORT_BOUNDS_RANGE_OES                                               0x825D
#define GL_LAYER_PROVOKING_VERTEX                                                  0x825E
#define GL_LAYER_PROVOKING_VERTEX_EXT                                              0x825E
#define GL_LAYER_PROVOKING_VERTEX_OES                                              0x825E
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX                                         0x825F
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX_EXT                                     0x825F
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX_NV                                      0x825F
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX_OES                                     0x825F
#define GL_UNDEFINED_VERTEX                                                        0x8260
#define GL_UNDEFINED_VERTEX_EXT                                                    0x8260
#define GL_UNDEFINED_VERTEX_OES                                                    0x8260
#define GL_NO_RESET_NOTIFICATION                                                   0x8261
#define GL_NO_RESET_NOTIFICATION_ARB                                               0x8261
#define GL_NO_RESET_NOTIFICATION_EXT                                               0x8261
#define GL_NO_RESET_NOTIFICATION_KHR                                               0x8261
#define GL_MAX_COMPUTE_SHARED_MEMORY_SIZE                                          0x8262
#define GL_MAX_COMPUTE_UNIFORM_COMPONENTS                                          0x8263
#define GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS                                      0x8264
#define GL_MAX_COMPUTE_ATOMIC_COUNTERS                                             0x8265
#define GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS                                 0x8266
#define GL_COMPUTE_WORK_GROUP_SIZE                                                 0x8267
#define GL_DEBUG_TYPE_MARKER                                                       0x8268
#define GL_DEBUG_TYPE_MARKER_KHR                                                   0x8268
#define GL_DEBUG_TYPE_PUSH_GROUP                                                   0x8269
#define GL_DEBUG_TYPE_PUSH_GROUP_KHR                                               0x8269
#define GL_DEBUG_TYPE_POP_GROUP                                                    0x826A
#define GL_DEBUG_TYPE_POP_GROUP_KHR                                                0x826A
#define GL_DEBUG_SEVERITY_NOTIFICATION                                             0x826B
#define GL_DEBUG_SEVERITY_NOTIFICATION_KHR                                         0x826B
#define GL_MAX_DEBUG_GROUP_STACK_DEPTH                                             0x826C
#define GL_MAX_DEBUG_GROUP_STACK_DEPTH_KHR                                         0x826C
#define GL_DEBUG_GROUP_STACK_DEPTH                                                 0x826D
#define GL_DEBUG_GROUP_STACK_DEPTH_KHR                                             0x826D
#define GL_MAX_UNIFORM_LOCATIONS                                                   0x826E
#define GL_INTERNALFORMAT_SUPPORTED                                                0x826F
#define GL_INTERNALFORMAT_PREFERRED                                                0x8270
#define GL_INTERNALFORMAT_RED_SIZE                                                 0x8271
#define GL_INTERNALFORMAT_GREEN_SIZE                                               0x8272
#define GL_INTERNALFORMAT_BLUE_SIZE                                                0x8273
#define GL_INTERNALFORMAT_ALPHA_SIZE                                               0x8274
#define GL_INTERNALFORMAT_DEPTH_SIZE                                               0x8275
#define GL_INTERNALFORMAT_STENCIL_SIZE                                             0x8276
#define GL_INTERNALFORMAT_SHARED_SIZE                                              0x8277
#define GL_INTERNALFORMAT_RED_TYPE                                                 0x8278
#define GL_INTERNALFORMAT_GREEN_TYPE                                               0x8279
#define GL_INTERNALFORMAT_BLUE_TYPE                                                0x827A
#define GL_INTERNALFORMAT_ALPHA_TYPE                                               0x827B
#define GL_INTERNALFORMAT_DEPTH_TYPE                                               0x827C
#define GL_INTERNALFORMAT_STENCIL_TYPE                                             0x827D
#define GL_MAX_WIDTH                                                               0x827E
#define GL_MAX_HEIGHT                                                              0x827F
#define GL_MAX_DEPTH                                                               0x8280
#define GL_MAX_LAYERS                                                              0x8281
#define GL_MAX_COMBINED_DIMENSIONS                                                 0x8282
#define GL_COLOR_COMPONENTS                                                        0x8283
#define GL_DEPTH_COMPONENTS                                                        0x8284
#define GL_STENCIL_COMPONENTS                                                      0x8285
#define GL_COLOR_RENDERABLE                                                        0x8286
#define GL_DEPTH_RENDERABLE                                                        0x8287
#define GL_STENCIL_RENDERABLE                                                      0x8288
#define GL_FRAMEBUFFER_RENDERABLE                                                  0x8289
#define GL_FRAMEBUFFER_RENDERABLE_LAYERED                                          0x828A
#define GL_FRAMEBUFFER_BLEND                                                       0x828B
#define GL_READ_PIXELS                                                             0x828C
#define GL_READ_PIXELS_FORMAT                                                      0x828D
#define GL_READ_PIXELS_TYPE                                                        0x828E
#define GL_TEXTURE_IMAGE_FORMAT                                                    0x828F
#define GL_TEXTURE_IMAGE_TYPE                                                      0x8290
#define GL_GET_TEXTURE_IMAGE_FORMAT                                                0x8291
#define GL_GET_TEXTURE_IMAGE_TYPE                                                  0x8292
#define GL_MIPMAP                                                                  0x8293
#define GL_MANUAL_GENERATE_MIPMAP                                                  0x8294
#define GL_AUTO_GENERATE_MIPMAP                                                    0x8295
#define GL_COLOR_ENCODING                                                          0x8296
#define GL_SRGB_READ                                                               0x8297
#define GL_SRGB_WRITE                                                              0x8298
#define GL_SRGB_DECODE_ARB                                                         0x8299
#define GL_FILTER                                                                  0x829A
#define GL_VERTEX_TEXTURE                                                          0x829B
#define GL_TESS_CONTROL_TEXTURE                                                    0x829C
#define GL_TESS_EVALUATION_TEXTURE                                                 0x829D
#define GL_GEOMETRY_TEXTURE                                                        0x829E
#define GL_FRAGMENT_TEXTURE                                                        0x829F
#define GL_COMPUTE_TEXTURE                                                         0x82A0
#define GL_TEXTURE_SHADOW                                                          0x82A1
#define GL_TEXTURE_GATHER                                                          0x82A2
#define GL_TEXTURE_GATHER_SHADOW                                                   0x82A3
#define GL_SHADER_IMAGE_LOAD                                                       0x82A4
#define GL_SHADER_IMAGE_STORE                                                      0x82A5
#define GL_SHADER_IMAGE_ATOMIC                                                     0x82A6
#define GL_IMAGE_TEXEL_SIZE                                                        0x82A7
#define GL_IMAGE_COMPATIBILITY_CLASS                                               0x82A8
#define GL_IMAGE_PIXEL_FORMAT                                                      0x82A9
#define GL_IMAGE_PIXEL_TYPE                                                        0x82AA
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST                                     0x82AC
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST                                   0x82AD
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE                                    0x82AE
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE                                  0x82AF
#define GL_TEXTURE_COMPRESSED_BLOCK_WIDTH                                          0x82B1
#define GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT                                         0x82B2
#define GL_TEXTURE_COMPRESSED_BLOCK_SIZE                                           0x82B3
#define GL_CLEAR_BUFFER                                                            0x82B4
#define GL_TEXTURE_VIEW                                                            0x82B5
#define GL_VIEW_COMPATIBILITY_CLASS                                                0x82B6
#define GL_FULL_SUPPORT                                                            0x82B7
#define GL_CAVEAT_SUPPORT                                                          0x82B8
#define GL_IMAGE_CLASS_4_X_32                                                      0x82B9
#define GL_IMAGE_CLASS_2_X_32                                                      0x82BA
#define GL_IMAGE_CLASS_1_X_32                                                      0x82BB
#define GL_IMAGE_CLASS_4_X_16                                                      0x82BC
#define GL_IMAGE_CLASS_2_X_16                                                      0x82BD
#define GL_IMAGE_CLASS_1_X_16                                                      0x82BE
#define GL_IMAGE_CLASS_4_X_8                                                       0x82BF
#define GL_IMAGE_CLASS_2_X_8                                                       0x82C0
#define GL_IMAGE_CLASS_1_X_8                                                       0x82C1
#define GL_IMAGE_CLASS_11_11_10                                                    0x82C2
#define GL_IMAGE_CLASS_10_10_10_2                                                  0x82C3
#define GL_VIEW_CLASS_128_BITS                                                     0x82C4
#define GL_VIEW_CLASS_96_BITS                                                      0x82C5
#define GL_VIEW_CLASS_64_BITS                                                      0x82C6
#define GL_VIEW_CLASS_48_BITS                                                      0x82C7
#define GL_VIEW_CLASS_32_BITS                                                      0x82C8
#define GL_VIEW_CLASS_24_BITS                                                      0x82C9
#define GL_VIEW_CLASS_16_BITS                                                      0x82CA
#define GL_VIEW_CLASS_8_BITS                                                       0x82CB
#define GL_VIEW_CLASS_S3TC_DXT1_RGB                                                0x82CC
#define GL_VIEW_CLASS_S3TC_DXT1_RGBA                                               0x82CD
#define GL_VIEW_CLASS_S3TC_DXT3_RGBA                                               0x82CE
#define GL_VIEW_CLASS_S3TC_DXT5_RGBA                                               0x82CF
#define GL_VIEW_CLASS_RGTC1_RED                                                    0x82D0
#define GL_VIEW_CLASS_RGTC2_RG                                                     0x82D1
#define GL_VIEW_CLASS_BPTC_UNORM                                                   0x82D2
#define GL_VIEW_CLASS_BPTC_FLOAT                                                   0x82D3
#define GL_VERTEX_ATTRIB_BINDING                                                   0x82D4
#define GL_VERTEX_ATTRIB_RELATIVE_OFFSET                                           0x82D5
#define GL_VERTEX_BINDING_DIVISOR                                                  0x82D6
#define GL_VERTEX_BINDING_OFFSET                                                   0x82D7
#define GL_VERTEX_BINDING_STRIDE                                                   0x82D8
#define GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET                                       0x82D9
#define GL_MAX_VERTEX_ATTRIB_BINDINGS                                              0x82DA
#define GL_TEXTURE_VIEW_MIN_LEVEL                                                  0x82DB
#define GL_TEXTURE_VIEW_MIN_LEVEL_EXT                                              0x82DB
#define GL_TEXTURE_VIEW_MIN_LEVEL_OES                                              0x82DB
#define GL_TEXTURE_VIEW_NUM_LEVELS                                                 0x82DC
#define GL_TEXTURE_VIEW_NUM_LEVELS_EXT                                             0x82DC
#define GL_TEXTURE_VIEW_NUM_LEVELS_OES                                             0x82DC
#define GL_TEXTURE_VIEW_MIN_LAYER                                                  0x82DD
#define GL_TEXTURE_VIEW_MIN_LAYER_EXT                                              0x82DD
#define GL_TEXTURE_VIEW_MIN_LAYER_OES                                              0x82DD
#define GL_TEXTURE_VIEW_NUM_LAYERS                                                 0x82DE
#define GL_TEXTURE_VIEW_NUM_LAYERS_EXT                                             0x82DE
#define GL_TEXTURE_VIEW_NUM_LAYERS_OES                                             0x82DE
#define GL_TEXTURE_IMMUTABLE_LEVELS                                                0x82DF
#define GL_BUFFER                                                                  0x82E0
#define GL_BUFFER_KHR                                                              0x82E0
#define GL_SHADER                                                                  0x82E1
#define GL_SHADER_KHR                                                              0x82E1
#define GL_PROGRAM                                                                 0x82E2
#define GL_PROGRAM_KHR                                                             0x82E2
#define GL_QUERY                                                                   0x82E3
#define GL_QUERY_KHR                                                               0x82E3
#define GL_PROGRAM_PIPELINE                                                        0x82E4
#define GL_PROGRAM_PIPELINE_KHR                                                    0x82E4
#define GL_MAX_VERTEX_ATTRIB_STRIDE                                                0x82E5
#define GL_SAMPLER                                                                 0x82E6
#define GL_SAMPLER_KHR                                                             0x82E6
#define GL_DISPLAY_LIST                                                            0x82E7
#define GL_MAX_LABEL_LENGTH                                                        0x82E8
#define GL_MAX_LABEL_LENGTH_KHR                                                    0x82E8
#define GL_NUM_SHADING_LANGUAGE_VERSIONS                                           0x82E9
#define GL_QUERY_TARGET                                                            0x82EA
#define GL_TRANSFORM_FEEDBACK_OVERFLOW                                             0x82EC
#define GL_TRANSFORM_FEEDBACK_OVERFLOW_ARB                                         0x82EC
#define GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW                                      0x82ED
#define GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW_ARB                                  0x82ED
#define GL_VERTICES_SUBMITTED                                                      0x82EE
#define GL_VERTICES_SUBMITTED_ARB                                                  0x82EE
#define GL_PRIMITIVES_SUBMITTED                                                    0x82EF
#define GL_PRIMITIVES_SUBMITTED_ARB                                                0x82EF
#define GL_VERTEX_SHADER_INVOCATIONS                                               0x82F0
#define GL_VERTEX_SHADER_INVOCATIONS_ARB                                           0x82F0
#define GL_TESS_CONTROL_SHADER_PATCHES                                             0x82F1
#define GL_TESS_CONTROL_SHADER_PATCHES_ARB                                         0x82F1
#define GL_TESS_EVALUATION_SHADER_INVOCATIONS                                      0x82F2
#define GL_TESS_EVALUATION_SHADER_INVOCATIONS_ARB                                  0x82F2
#define GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED                                      0x82F3
#define GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED_ARB                                  0x82F3
#define GL_FRAGMENT_SHADER_INVOCATIONS                                             0x82F4
#define GL_FRAGMENT_SHADER_INVOCATIONS_ARB                                         0x82F4
#define GL_COMPUTE_SHADER_INVOCATIONS                                              0x82F5
#define GL_COMPUTE_SHADER_INVOCATIONS_ARB                                          0x82F5
#define GL_CLIPPING_INPUT_PRIMITIVES                                               0x82F6
#define GL_CLIPPING_INPUT_PRIMITIVES_ARB                                           0x82F6
#define GL_CLIPPING_OUTPUT_PRIMITIVES                                              0x82F7
#define GL_CLIPPING_OUTPUT_PRIMITIVES_ARB                                          0x82F7
#define GL_SPARSE_BUFFER_PAGE_SIZE_ARB                                             0x82F8
#define GL_MAX_CULL_DISTANCES                                                      0x82F9
#define GL_MAX_CULL_DISTANCES_EXT                                                  0x82F9
#define GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES                                    0x82FA
#define GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES_EXT                                0x82FA
#define GL_CONTEXT_RELEASE_BEHAVIOR                                                0x82FB
#define GL_CONTEXT_RELEASE_BEHAVIOR_KHR                                            0x82FB
#define GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH                                          0x82FC
#define GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_KHR                                      0x82FC
#define GL_ROBUST_GPU_TIMEOUT_MS_KHR                                               0x82FD
#define GL_DEPTH_PASS_INSTRUMENT_SGIX                                              0x8310
#define GL_DEPTH_PASS_INSTRUMENT_COUNTERS_SGIX                                     0x8311
#define GL_DEPTH_PASS_INSTRUMENT_MAX_SGIX                                          0x8312
#define GL_FRAGMENTS_INSTRUMENT_SGIX                                               0x8313
#define GL_FRAGMENTS_INSTRUMENT_COUNTERS_SGIX                                      0x8314
#define GL_FRAGMENTS_INSTRUMENT_MAX_SGIX                                           0x8315
#define GL_CONVOLUTION_HINT_SGIX                                                   0x8316
#define GL_YCRCB_SGIX                                                              0x8318
#define GL_YCRCBA_SGIX                                                             0x8319
#define GL_UNPACK_COMPRESSED_SIZE_SGIX                                             0x831A
#define GL_PACK_MAX_COMPRESSED_SIZE_SGIX                                           0x831B
#define GL_PACK_COMPRESSED_SIZE_SGIX                                               0x831C
#define GL_SLIM8U_SGIX                                                             0x831D
#define GL_SLIM10U_SGIX                                                            0x831E
#define GL_SLIM12S_SGIX                                                            0x831F
#define GL_ALPHA_MIN_SGIX                                                          0x8320
#define GL_ALPHA_MAX_SGIX                                                          0x8321
#define GL_SCALEBIAS_HINT_SGIX                                                     0x8322
#define GL_ASYNC_MARKER_SGIX                                                       0x8329
#define GL_PIXEL_TEX_GEN_MODE_SGIX                                                 0x832B
#define GL_ASYNC_HISTOGRAM_SGIX                                                    0x832C
#define GL_MAX_ASYNC_HISTOGRAM_SGIX                                                0x832D
#define GL_PIXEL_TRANSFORM_2D_EXT                                                  0x8330
#define GL_PIXEL_MAG_FILTER_EXT                                                    0x8331
#define GL_PIXEL_MIN_FILTER_EXT                                                    0x8332
#define GL_PIXEL_CUBIC_WEIGHT_EXT                                                  0x8333
#define GL_CUBIC_EXT                                                               0x8334
#define GL_AVERAGE_EXT                                                             0x8335
#define GL_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT                                      0x8336
#define GL_MAX_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT                                  0x8337
#define GL_PIXEL_TRANSFORM_2D_MATRIX_EXT                                           0x8338
#define GL_FRAGMENT_MATERIAL_EXT                                                   0x8349
#define GL_FRAGMENT_NORMAL_EXT                                                     0x834A
#define GL_FRAGMENT_COLOR_EXT                                                      0x834C
#define GL_ATTENUATION_EXT                                                         0x834D
#define GL_SHADOW_ATTENUATION_EXT                                                  0x834E
#define GL_TEXTURE_APPLICATION_MODE_EXT                                            0x834F
#define GL_TEXTURE_LIGHT_EXT                                                       0x8350
#define GL_TEXTURE_MATERIAL_FACE_EXT                                               0x8351
#define GL_TEXTURE_MATERIAL_PARAMETER_EXT                                          0x8352
#define GL_PIXEL_TEXTURE_SGIS                                                      0x8353
#define GL_PIXEL_FRAGMENT_RGB_SOURCE_SGIS                                          0x8354
#define GL_PIXEL_FRAGMENT_ALPHA_SOURCE_SGIS                                        0x8355
#define GL_PIXEL_GROUP_COLOR_SGIS                                                  0x8356
#define GL_LINE_QUALITY_HINT_SGIX                                                  0x835B
#define GL_ASYNC_TEX_IMAGE_SGIX                                                    0x835C
#define GL_ASYNC_DRAW_PIXELS_SGIX                                                  0x835D
#define GL_ASYNC_READ_PIXELS_SGIX                                                  0x835E
#define GL_MAX_ASYNC_TEX_IMAGE_SGIX                                                0x835F
#define GL_MAX_ASYNC_DRAW_PIXELS_SGIX                                              0x8360
#define GL_MAX_ASYNC_READ_PIXELS_SGIX                                              0x8361
#define GL_UNSIGNED_BYTE_2_3_3_REV                                                 0x8362
#define GL_UNSIGNED_BYTE_2_3_3_REV_EXT                                             0x8362
#define GL_UNSIGNED_SHORT_5_6_5                                                    0x8363
#define GL_UNSIGNED_SHORT_5_6_5_EXT                                                0x8363
#define GL_UNSIGNED_SHORT_5_6_5_REV                                                0x8364
#define GL_UNSIGNED_SHORT_5_6_5_REV_EXT                                            0x8364
#define GL_UNSIGNED_SHORT_4_4_4_4_REV                                              0x8365
#define GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT                                          0x8365
#define GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG                                          0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV                                              0x8366
#define GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT                                          0x8366
#define GL_UNSIGNED_INT_8_8_8_8_REV                                                0x8367
#define GL_UNSIGNED_INT_8_8_8_8_REV_EXT                                            0x8367
#define GL_UNSIGNED_INT_2_10_10_10_REV                                             0x8368
#define GL_UNSIGNED_INT_2_10_10_10_REV_EXT                                         0x8368
#define GL_TEXTURE_MAX_CLAMP_S_SGIX                                                0x8369
#define GL_TEXTURE_MAX_CLAMP_T_SGIX                                                0x836A
#define GL_TEXTURE_MAX_CLAMP_R_SGIX                                                0x836B
#define GL_MIRRORED_REPEAT                                                         0x8370
#define GL_MIRRORED_REPEAT_ARB                                                     0x8370
#define GL_MIRRORED_REPEAT_IBM                                                     0x8370
#define GL_MIRRORED_REPEAT_OES                                                     0x8370
#define GL_RGB_S3TC                                                                0x83A0
#define GL_RGB4_S3TC                                                               0x83A1
#define GL_RGBA_S3TC                                                               0x83A2
#define GL_RGBA4_S3TC                                                              0x83A3
#define GL_RGBA_DXT5_S3TC                                                          0x83A4
#define GL_RGBA4_DXT5_S3TC                                                         0x83A5
#define GL_VERTEX_PRECLIP_SGIX                                                     0x83EE
#define GL_VERTEX_PRECLIP_HINT_SGIX                                                0x83EF
#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT                                            0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT                                           0x83F1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE                                         0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT3_EXT                                           0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE                                         0x83F3
#define GL_COMPRESSED_RGBA_S3TC_DXT5_EXT                                           0x83F3
#define GL_PARALLEL_ARRAYS_INTEL                                                   0x83F4
#define GL_VERTEX_ARRAY_PARALLEL_POINTERS_INTEL                                    0x83F5
#define GL_NORMAL_ARRAY_PARALLEL_POINTERS_INTEL                                    0x83F6
#define GL_COLOR_ARRAY_PARALLEL_POINTERS_INTEL                                     0x83F7
#define GL_TEXTURE_COORD_ARRAY_PARALLEL_POINTERS_INTEL                             0x83F8
#define GL_PERFQUERY_DONOT_FLUSH_INTEL                                             0x83F9
#define GL_PERFQUERY_FLUSH_INTEL                                                   0x83FA
#define GL_PERFQUERY_WAIT_INTEL                                                    0x83FB
#define GL_CONSERVATIVE_RASTERIZATION_INTEL                                        0x83FE
#define GL_TEXTURE_MEMORY_LAYOUT_INTEL                                             0x83FF
#define GL_FRAGMENT_LIGHTING_SGIX                                                  0x8400
#define GL_FRAGMENT_COLOR_MATERIAL_SGIX                                            0x8401
#define GL_FRAGMENT_COLOR_MATERIAL_FACE_SGIX                                       0x8402
#define GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_SGIX                                  0x8403
#define GL_MAX_FRAGMENT_LIGHTS_SGIX                                                0x8404
#define GL_MAX_ACTIVE_LIGHTS_SGIX                                                  0x8405
#define GL_CURRENT_RASTER_NORMAL_SGIX                                              0x8406
#define GL_LIGHT_ENV_MODE_SGIX                                                     0x8407
#define GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_SGIX                                  0x8408
#define GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_SGIX                                      0x8409
#define GL_FRAGMENT_LIGHT_MODEL_AMBIENT_SGIX                                       0x840A
#define GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_SGIX                          0x840B
#define GL_FRAGMENT_LIGHT0_SGIX                                                    0x840C
#define GL_FRAGMENT_LIGHT1_SGIX                                                    0x840D
#define GL_FRAGMENT_LIGHT2_SGIX                                                    0x840E
#define GL_FRAGMENT_LIGHT3_SGIX                                                    0x840F
#define GL_FRAGMENT_LIGHT4_SGIX                                                    0x8410
#define GL_FRAGMENT_LIGHT5_SGIX                                                    0x8411
#define GL_FRAGMENT_LIGHT6_SGIX                                                    0x8412
#define GL_FRAGMENT_LIGHT7_SGIX                                                    0x8413
#define GL_PACK_RESAMPLE_SGIX                                                      0x842E
#define GL_UNPACK_RESAMPLE_SGIX                                                    0x842F
#define GL_RESAMPLE_DECIMATE_SGIX                                                  0x8430
#define GL_RESAMPLE_REPLICATE_SGIX                                                 0x8433
#define GL_RESAMPLE_ZERO_FILL_SGIX                                                 0x8434
#define GL_TANGENT_ARRAY_EXT                                                       0x8439
#define GL_BINORMAL_ARRAY_EXT                                                      0x843A
#define GL_CURRENT_TANGENT_EXT                                                     0x843B
#define GL_CURRENT_BINORMAL_EXT                                                    0x843C
#define GL_TANGENT_ARRAY_TYPE_EXT                                                  0x843E
#define GL_TANGENT_ARRAY_STRIDE_EXT                                                0x843F
#define GL_BINORMAL_ARRAY_TYPE_EXT                                                 0x8440
#define GL_BINORMAL_ARRAY_STRIDE_EXT                                               0x8441
#define GL_TANGENT_ARRAY_POINTER_EXT                                               0x8442
#define GL_BINORMAL_ARRAY_POINTER_EXT                                              0x8443
#define GL_MAP1_TANGENT_EXT                                                        0x8444
#define GL_MAP2_TANGENT_EXT                                                        0x8445
#define GL_MAP1_BINORMAL_EXT                                                       0x8446
#define GL_MAP2_BINORMAL_EXT                                                       0x8447
#define GL_NEAREST_CLIPMAP_NEAREST_SGIX                                            0x844D
#define GL_NEAREST_CLIPMAP_LINEAR_SGIX                                             0x844E
#define GL_LINEAR_CLIPMAP_NEAREST_SGIX                                             0x844F
#define GL_FOG_COORDINATE_SOURCE                                                   0x8450
#define GL_FOG_COORDINATE_SOURCE_EXT                                               0x8450
#define GL_FOG_COORD_SRC                                                           0x8450
#define GL_FOG_COORD                                                               0x8451
#define GL_FOG_COORDINATE                                                          0x8451
#define GL_FOG_COORDINATE_EXT                                                      0x8451
#define GL_FRAGMENT_DEPTH                                                          0x8452
#define GL_FRAGMENT_DEPTH_EXT                                                      0x8452
#define GL_CURRENT_FOG_COORD                                                       0x8453
#define GL_CURRENT_FOG_COORDINATE                                                  0x8453
#define GL_CURRENT_FOG_COORDINATE_EXT                                              0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE                                               0x8454
#define GL_FOG_COORDINATE_ARRAY_TYPE_EXT                                           0x8454
#define GL_FOG_COORD_ARRAY_TYPE                                                    0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE                                             0x8455
#define GL_FOG_COORDINATE_ARRAY_STRIDE_EXT                                         0x8455
#define GL_FOG_COORD_ARRAY_STRIDE                                                  0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER                                            0x8456
#define GL_FOG_COORDINATE_ARRAY_POINTER_EXT                                        0x8456
#define GL_FOG_COORD_ARRAY_POINTER                                                 0x8456
#define GL_FOG_COORDINATE_ARRAY                                                    0x8457
#define GL_FOG_COORDINATE_ARRAY_EXT                                                0x8457
#define GL_FOG_COORD_ARRAY                                                         0x8457
#define GL_COLOR_SUM                                                               0x8458
#define GL_COLOR_SUM_ARB                                                           0x8458
#define GL_COLOR_SUM_EXT                                                           0x8458
#define GL_CURRENT_SECONDARY_COLOR                                                 0x8459
#define GL_CURRENT_SECONDARY_COLOR_EXT                                             0x8459
#define GL_SECONDARY_COLOR_ARRAY_SIZE                                              0x845A
#define GL_SECONDARY_COLOR_ARRAY_SIZE_EXT                                          0x845A
#define GL_SECONDARY_COLOR_ARRAY_TYPE                                              0x845B
#define GL_SECONDARY_COLOR_ARRAY_TYPE_EXT                                          0x845B
#define GL_SECONDARY_COLOR_ARRAY_STRIDE                                            0x845C
#define GL_SECONDARY_COLOR_ARRAY_STRIDE_EXT                                        0x845C
#define GL_SECONDARY_COLOR_ARRAY_POINTER                                           0x845D
#define GL_SECONDARY_COLOR_ARRAY_POINTER_EXT                                       0x845D
#define GL_SECONDARY_COLOR_ARRAY                                                   0x845E
#define GL_SECONDARY_COLOR_ARRAY_EXT                                               0x845E
#define GL_CURRENT_RASTER_SECONDARY_COLOR                                          0x845F
#define GL_ALIASED_POINT_SIZE_RANGE                                                0x846D
#define GL_ALIASED_LINE_WIDTH_RANGE                                                0x846E
#define GL_SCREEN_COORDINATES_REND                                                 0x8490
#define GL_INVERTED_SCREEN_W_REND                                                  0x8491
#define GL_TEXTURE0                                                                0x84C0
#define GL_TEXTURE0_ARB                                                            0x84C0
#define GL_TEXTURE1                                                                0x84C1
#define GL_TEXTURE1_ARB                                                            0x84C1
#define GL_TEXTURE2                                                                0x84C2
#define GL_TEXTURE2_ARB                                                            0x84C2
#define GL_TEXTURE3                                                                0x84C3
#define GL_TEXTURE3_ARB                                                            0x84C3
#define GL_TEXTURE4                                                                0x84C4
#define GL_TEXTURE4_ARB                                                            0x84C4
#define GL_TEXTURE5                                                                0x84C5
#define GL_TEXTURE5_ARB                                                            0x84C5
#define GL_TEXTURE6                                                                0x84C6
#define GL_TEXTURE6_ARB                                                            0x84C6
#define GL_TEXTURE7                                                                0x84C7
#define GL_TEXTURE7_ARB                                                            0x84C7
#define GL_TEXTURE8                                                                0x84C8
#define GL_TEXTURE8_ARB                                                            0x84C8
#define GL_TEXTURE9                                                                0x84C9
#define GL_TEXTURE9_ARB                                                            0x84C9
#define GL_TEXTURE10                                                               0x84CA
#define GL_TEXTURE10_ARB                                                           0x84CA
#define GL_TEXTURE11                                                               0x84CB
#define GL_TEXTURE11_ARB                                                           0x84CB
#define GL_TEXTURE12                                                               0x84CC
#define GL_TEXTURE12_ARB                                                           0x84CC
#define GL_TEXTURE13                                                               0x84CD
#define GL_TEXTURE13_ARB                                                           0x84CD
#define GL_TEXTURE14                                                               0x84CE
#define GL_TEXTURE14_ARB                                                           0x84CE
#define GL_TEXTURE15                                                               0x84CF
#define GL_TEXTURE15_ARB                                                           0x84CF
#define GL_TEXTURE16                                                               0x84D0
#define GL_TEXTURE16_ARB                                                           0x84D0
#define GL_TEXTURE17                                                               0x84D1
#define GL_TEXTURE17_ARB                                                           0x84D1
#define GL_TEXTURE18                                                               0x84D2
#define GL_TEXTURE18_ARB                                                           0x84D2
#define GL_TEXTURE19                                                               0x84D3
#define GL_TEXTURE19_ARB                                                           0x84D3
#define GL_TEXTURE20                                                               0x84D4
#define GL_TEXTURE20_ARB                                                           0x84D4
#define GL_TEXTURE21                                                               0x84D5
#define GL_TEXTURE21_ARB                                                           0x84D5
#define GL_TEXTURE22                                                               0x84D6
#define GL_TEXTURE22_ARB                                                           0x84D6
#define GL_TEXTURE23                                                               0x84D7
#define GL_TEXTURE23_ARB                                                           0x84D7
#define GL_TEXTURE24                                                               0x84D8
#define GL_TEXTURE24_ARB                                                           0x84D8
#define GL_TEXTURE25                                                               0x84D9
#define GL_TEXTURE25_ARB                                                           0x84D9
#define GL_TEXTURE26                                                               0x84DA
#define GL_TEXTURE26_ARB                                                           0x84DA
#define GL_TEXTURE27                                                               0x84DB
#define GL_TEXTURE27_ARB                                                           0x84DB
#define GL_TEXTURE28                                                               0x84DC
#define GL_TEXTURE28_ARB                                                           0x84DC
#define GL_TEXTURE29                                                               0x84DD
#define GL_TEXTURE29_ARB                                                           0x84DD
#define GL_TEXTURE30                                                               0x84DE
#define GL_TEXTURE30_ARB                                                           0x84DE
#define GL_TEXTURE31                                                               0x84DF
#define GL_TEXTURE31_ARB                                                           0x84DF
#define GL_ACTIVE_TEXTURE                                                          0x84E0
#define GL_ACTIVE_TEXTURE_ARB                                                      0x84E0
#define GL_CLIENT_ACTIVE_TEXTURE                                                   0x84E1
#define GL_CLIENT_ACTIVE_TEXTURE_ARB                                               0x84E1
#define GL_MAX_TEXTURE_UNITS                                                       0x84E2
#define GL_MAX_TEXTURE_UNITS_ARB                                                   0x84E2
#define GL_PATH_TRANSPOSE_MODELVIEW_MATRIX_NV                                      0x84E3
#define GL_TRANSPOSE_MODELVIEW_MATRIX                                              0x84E3
#define GL_TRANSPOSE_MODELVIEW_MATRIX_ARB                                          0x84E3
#define GL_PATH_TRANSPOSE_PROJECTION_MATRIX_NV                                     0x84E4
#define GL_TRANSPOSE_PROJECTION_MATRIX                                             0x84E4
#define GL_TRANSPOSE_PROJECTION_MATRIX_ARB                                         0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX                                                0x84E5
#define GL_TRANSPOSE_TEXTURE_MATRIX_ARB                                            0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX                                                  0x84E6
#define GL_TRANSPOSE_COLOR_MATRIX_ARB                                              0x84E6
#define GL_SUBTRACT                                                                0x84E7
#define GL_SUBTRACT_ARB                                                            0x84E7
#define GL_MAX_RENDERBUFFER_SIZE                                                   0x84E8
#define GL_MAX_RENDERBUFFER_SIZE_EXT                                               0x84E8
#define GL_MAX_RENDERBUFFER_SIZE_OES                                               0x84E8
#define GL_COMPRESSED_ALPHA                                                        0x84E9
#define GL_COMPRESSED_ALPHA_ARB                                                    0x84E9
#define GL_COMPRESSED_LUMINANCE                                                    0x84EA
#define GL_COMPRESSED_LUMINANCE_ARB                                                0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA                                              0x84EB
#define GL_COMPRESSED_LUMINANCE_ALPHA_ARB                                          0x84EB
#define GL_COMPRESSED_INTENSITY                                                    0x84EC
#define GL_COMPRESSED_INTENSITY_ARB                                                0x84EC
#define GL_COMPRESSED_RGB                                                          0x84ED
#define GL_COMPRESSED_RGB_ARB                                                      0x84ED
#define GL_COMPRESSED_RGBA                                                         0x84EE
#define GL_COMPRESSED_RGBA_ARB                                                     0x84EE
#define GL_TEXTURE_COMPRESSION_HINT                                                0x84EF
#define GL_TEXTURE_COMPRESSION_HINT_ARB                                            0x84EF
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER                         0x84F0
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER                      0x84F1
#define GL_ALL_COMPLETED_NV                                                        0x84F2
#define GL_FENCE_STATUS_NV                                                         0x84F3
#define GL_FENCE_CONDITION_NV                                                      0x84F4
#define GL_TEXTURE_RECTANGLE                                                       0x84F5
#define GL_TEXTURE_RECTANGLE_ARB                                                   0x84F5
#define GL_TEXTURE_RECTANGLE_NV                                                    0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE                                               0x84F6
#define GL_TEXTURE_BINDING_RECTANGLE_ARB                                           0x84F6
#define GL_TEXTURE_BINDING_RECTANGLE_NV                                            0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE                                                 0x84F7
#define GL_PROXY_TEXTURE_RECTANGLE_ARB                                             0x84F7
#define GL_PROXY_TEXTURE_RECTANGLE_NV                                              0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE                                              0x84F8
#define GL_MAX_RECTANGLE_TEXTURE_SIZE_ARB                                          0x84F8
#define GL_MAX_RECTANGLE_TEXTURE_SIZE_NV                                           0x84F8
#define GL_DEPTH_STENCIL                                                           0x84F9
#define GL_DEPTH_STENCIL_EXT                                                       0x84F9
#define GL_DEPTH_STENCIL_NV                                                        0x84F9
#define GL_DEPTH_STENCIL_OES                                                       0x84F9
#define GL_UNSIGNED_INT_24_8                                                       0x84FA
#define GL_UNSIGNED_INT_24_8_EXT                                                   0x84FA
#define GL_UNSIGNED_INT_24_8_NV                                                    0x84FA
#define GL_UNSIGNED_INT_24_8_OES                                                   0x84FA
#define GL_MAX_TEXTURE_LOD_BIAS                                                    0x84FD
#define GL_MAX_TEXTURE_LOD_BIAS_EXT                                                0x84FD
#define GL_TEXTURE_MAX_ANISOTROPY                                                  0x84FE
#define GL_TEXTURE_MAX_ANISOTROPY_EXT                                              0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY                                              0x84FF
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT                                          0x84FF
#define GL_TEXTURE_FILTER_CONTROL                                                  0x8500
#define GL_TEXTURE_FILTER_CONTROL_EXT                                              0x8500
#define GL_TEXTURE_LOD_BIAS                                                        0x8501
#define GL_TEXTURE_LOD_BIAS_EXT                                                    0x8501
#define GL_MODELVIEW1_STACK_DEPTH_EXT                                              0x8502
#define GL_COMBINE4_NV                                                             0x8503
#define GL_MAX_SHININESS_NV                                                        0x8504
#define GL_MAX_SPOT_EXPONENT_NV                                                    0x8505
#define GL_MODELVIEW1_MATRIX_EXT                                                   0x8506
#define GL_INCR_WRAP                                                               0x8507
#define GL_INCR_WRAP_EXT                                                           0x8507
#define GL_INCR_WRAP_OES                                                           0x8507
#define GL_DECR_WRAP                                                               0x8508
#define GL_DECR_WRAP_EXT                                                           0x8508
#define GL_DECR_WRAP_OES                                                           0x8508
#define GL_VERTEX_WEIGHTING_EXT                                                    0x8509
#define GL_MODELVIEW1_ARB                                                          0x850A
#define GL_MODELVIEW1_EXT                                                          0x850A
#define GL_CURRENT_VERTEX_WEIGHT_EXT                                               0x850B
#define GL_VERTEX_WEIGHT_ARRAY_EXT                                                 0x850C
#define GL_VERTEX_WEIGHT_ARRAY_SIZE_EXT                                            0x850D
#define GL_VERTEX_WEIGHT_ARRAY_TYPE_EXT                                            0x850E
#define GL_VERTEX_WEIGHT_ARRAY_STRIDE_EXT                                          0x850F
#define GL_VERTEX_WEIGHT_ARRAY_POINTER_EXT                                         0x8510
#define GL_NORMAL_MAP                                                              0x8511
#define GL_NORMAL_MAP_ARB                                                          0x8511
#define GL_NORMAL_MAP_EXT                                                          0x8511
#define GL_NORMAL_MAP_NV                                                           0x8511
#define GL_NORMAL_MAP_OES                                                          0x8511
#define GL_REFLECTION_MAP                                                          0x8512
#define GL_REFLECTION_MAP_ARB                                                      0x8512
#define GL_REFLECTION_MAP_EXT                                                      0x8512
#define GL_REFLECTION_MAP_NV                                                       0x8512
#define GL_REFLECTION_MAP_OES                                                      0x8512
#define GL_TEXTURE_CUBE_MAP                                                        0x8513
#define GL_TEXTURE_CUBE_MAP_ARB                                                    0x8513
#define GL_TEXTURE_CUBE_MAP_EXT                                                    0x8513
#define GL_TEXTURE_CUBE_MAP_OES                                                    0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP                                                0x8514
#define GL_TEXTURE_BINDING_CUBE_MAP_ARB                                            0x8514
#define GL_TEXTURE_BINDING_CUBE_MAP_EXT                                            0x8514
#define GL_TEXTURE_BINDING_CUBE_MAP_OES                                            0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X                                             0x8515
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB                                         0x8515
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT                                         0x8515
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_OES                                         0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X                                             0x8516
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB                                         0x8516
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT                                         0x8516
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_OES                                         0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y                                             0x8517
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB                                         0x8517
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT                                         0x8517
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_OES                                         0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y                                             0x8518
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB                                         0x8518
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT                                         0x8518
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_OES                                         0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z                                             0x8519
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB                                         0x8519
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT                                         0x8519
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_OES                                         0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z                                             0x851A
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB                                         0x851A
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT                                         0x851A
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_OES                                         0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP                                                  0x851B
#define GL_PROXY_TEXTURE_CUBE_MAP_ARB                                              0x851B
#define GL_PROXY_TEXTURE_CUBE_MAP_EXT                                              0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE                                               0x851C
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB                                           0x851C
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_EXT                                           0x851C
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_OES                                           0x851C
#define GL_VERTEX_ARRAY_RANGE_APPLE                                                0x851D
#define GL_VERTEX_ARRAY_RANGE_NV                                                   0x851D
#define GL_VERTEX_ARRAY_RANGE_LENGTH_APPLE                                         0x851E
#define GL_VERTEX_ARRAY_RANGE_LENGTH_NV                                            0x851E
#define GL_VERTEX_ARRAY_RANGE_VALID_NV                                             0x851F
#define GL_VERTEX_ARRAY_STORAGE_HINT_APPLE                                         0x851F
#define GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_NV                                       0x8520
#define GL_VERTEX_ARRAY_RANGE_POINTER_APPLE                                        0x8521
#define GL_VERTEX_ARRAY_RANGE_POINTER_NV                                           0x8521
#define GL_REGISTER_COMBINERS_NV                                                   0x8522
#define GL_VARIABLE_A_NV                                                           0x8523
#define GL_VARIABLE_B_NV                                                           0x8524
#define GL_VARIABLE_C_NV                                                           0x8525
#define GL_VARIABLE_D_NV                                                           0x8526
#define GL_VARIABLE_E_NV                                                           0x8527
#define GL_VARIABLE_F_NV                                                           0x8528
#define GL_VARIABLE_G_NV                                                           0x8529
#define GL_CONSTANT_COLOR0_NV                                                      0x852A
#define GL_CONSTANT_COLOR1_NV                                                      0x852B
#define GL_PRIMARY_COLOR_NV                                                        0x852C
#define GL_SECONDARY_COLOR_NV                                                      0x852D
#define GL_SPARE0_NV                                                               0x852E
#define GL_SPARE1_NV                                                               0x852F
#define GL_DISCARD_NV                                                              0x8530
#define GL_E_TIMES_F_NV                                                            0x8531
#define GL_SPARE0_PLUS_SECONDARY_COLOR_NV                                          0x8532
#define GL_VERTEX_ARRAY_RANGE_WITHOUT_FLUSH_NV                                     0x8533
#define GL_MULTISAMPLE_FILTER_HINT_NV                                              0x8534
#define GL_PER_STAGE_CONSTANTS_NV                                                  0x8535
#define GL_UNSIGNED_IDENTITY_NV                                                    0x8536
#define GL_UNSIGNED_INVERT_NV                                                      0x8537
#define GL_EXPAND_NORMAL_NV                                                        0x8538
#define GL_EXPAND_NEGATE_NV                                                        0x8539
#define GL_HALF_BIAS_NORMAL_NV                                                     0x853A
#define GL_HALF_BIAS_NEGATE_NV                                                     0x853B
#define GL_SIGNED_IDENTITY_NV                                                      0x853C
#define GL_SIGNED_NEGATE_NV                                                        0x853D
#define GL_SCALE_BY_TWO_NV                                                         0x853E
#define GL_SCALE_BY_FOUR_NV                                                        0x853F
#define GL_SCALE_BY_ONE_HALF_NV                                                    0x8540
#define GL_BIAS_BY_NEGATIVE_ONE_HALF_NV                                            0x8541
#define GL_COMBINER_INPUT_NV                                                       0x8542
#define GL_COMBINER_MAPPING_NV                                                     0x8543
#define GL_COMBINER_COMPONENT_USAGE_NV                                             0x8544
#define GL_COMBINER_AB_DOT_PRODUCT_NV                                              0x8545
#define GL_COMBINER_CD_DOT_PRODUCT_NV                                              0x8546
#define GL_COMBINER_MUX_SUM_NV                                                     0x8547
#define GL_COMBINER_SCALE_NV                                                       0x8548
#define GL_COMBINER_BIAS_NV                                                        0x8549
#define GL_COMBINER_AB_OUTPUT_NV                                                   0x854A
#define GL_COMBINER_CD_OUTPUT_NV                                                   0x854B
#define GL_COMBINER_SUM_OUTPUT_NV                                                  0x854C
#define GL_MAX_GENERAL_COMBINERS_NV                                                0x854D
#define GL_NUM_GENERAL_COMBINERS_NV                                                0x854E
#define GL_COLOR_SUM_CLAMP_NV                                                      0x854F
#define GL_COMBINER0_NV                                                            0x8550
#define GL_COMBINER1_NV                                                            0x8551
#define GL_COMBINER2_NV                                                            0x8552
#define GL_COMBINER3_NV                                                            0x8553
#define GL_COMBINER4_NV                                                            0x8554
#define GL_COMBINER5_NV                                                            0x8555
#define GL_COMBINER6_NV                                                            0x8556
#define GL_COMBINER7_NV                                                            0x8557
#define GL_PRIMITIVE_RESTART_NV                                                    0x8558
#define GL_PRIMITIVE_RESTART_INDEX_NV                                              0x8559
#define GL_FOG_DISTANCE_MODE_NV                                                    0x855A
#define GL_EYE_RADIAL_NV                                                           0x855B
#define GL_EYE_PLANE_ABSOLUTE_NV                                                   0x855C
#define GL_EMBOSS_LIGHT_NV                                                         0x855D
#define GL_EMBOSS_CONSTANT_NV                                                      0x855E
#define GL_EMBOSS_MAP_NV                                                           0x855F
#define GL_RED_MIN_CLAMP_INGR                                                      0x8560
#define GL_GREEN_MIN_CLAMP_INGR                                                    0x8561
#define GL_BLUE_MIN_CLAMP_INGR                                                     0x8562
#define GL_ALPHA_MIN_CLAMP_INGR                                                    0x8563
#define GL_RED_MAX_CLAMP_INGR                                                      0x8564
#define GL_GREEN_MAX_CLAMP_INGR                                                    0x8565
#define GL_BLUE_MAX_CLAMP_INGR                                                     0x8566
#define GL_ALPHA_MAX_CLAMP_INGR                                                    0x8567
#define GL_INTERLACE_READ_INGR                                                     0x8568
#define GL_COMBINE                                                                 0x8570
#define GL_COMBINE_ARB                                                             0x8570
#define GL_COMBINE_EXT                                                             0x8570
#define GL_COMBINE_RGB                                                             0x8571
#define GL_COMBINE_RGB_ARB                                                         0x8571
#define GL_COMBINE_RGB_EXT                                                         0x8571
#define GL_COMBINE_ALPHA                                                           0x8572
#define GL_COMBINE_ALPHA_ARB                                                       0x8572
#define GL_COMBINE_ALPHA_EXT                                                       0x8572
#define GL_RGB_SCALE                                                               0x8573
#define GL_RGB_SCALE_ARB                                                           0x8573
#define GL_RGB_SCALE_EXT                                                           0x8573
#define GL_ADD_SIGNED                                                              0x8574
#define GL_ADD_SIGNED_ARB                                                          0x8574
#define GL_ADD_SIGNED_EXT                                                          0x8574
#define GL_INTERPOLATE                                                             0x8575
#define GL_INTERPOLATE_ARB                                                         0x8575
#define GL_INTERPOLATE_EXT                                                         0x8575
#define GL_CONSTANT                                                                0x8576
#define GL_CONSTANT_ARB                                                            0x8576
#define GL_CONSTANT_EXT                                                            0x8576
#define GL_CONSTANT_NV                                                             0x8576
#define GL_PRIMARY_COLOR                                                           0x8577
#define GL_PRIMARY_COLOR_ARB                                                       0x8577
#define GL_PRIMARY_COLOR_EXT                                                       0x8577
#define GL_PREVIOUS                                                                0x8578
#define GL_PREVIOUS_ARB                                                            0x8578
#define GL_PREVIOUS_EXT                                                            0x8578
#define GL_SOURCE0_RGB                                                             0x8580
#define GL_SOURCE0_RGB_ARB                                                         0x8580
#define GL_SOURCE0_RGB_EXT                                                         0x8580
#define GL_SRC0_RGB                                                                0x8580
#define GL_SOURCE1_RGB                                                             0x8581
#define GL_SOURCE1_RGB_ARB                                                         0x8581
#define GL_SOURCE1_RGB_EXT                                                         0x8581
#define GL_SRC1_RGB                                                                0x8581
#define GL_SOURCE2_RGB                                                             0x8582
#define GL_SOURCE2_RGB_ARB                                                         0x8582
#define GL_SOURCE2_RGB_EXT                                                         0x8582
#define GL_SRC2_RGB                                                                0x8582
#define GL_SOURCE3_RGB_NV                                                          0x8583
#define GL_SOURCE0_ALPHA                                                           0x8588
#define GL_SOURCE0_ALPHA_ARB                                                       0x8588
#define GL_SOURCE0_ALPHA_EXT                                                       0x8588
#define GL_SRC0_ALPHA                                                              0x8588
#define GL_SOURCE1_ALPHA                                                           0x8589
#define GL_SOURCE1_ALPHA_ARB                                                       0x8589
#define GL_SOURCE1_ALPHA_EXT                                                       0x8589
#define GL_SRC1_ALPHA                                                              0x8589
#define GL_SRC1_ALPHA_EXT                                                          0x8589
#define GL_SOURCE2_ALPHA                                                           0x858A
#define GL_SOURCE2_ALPHA_ARB                                                       0x858A
#define GL_SOURCE2_ALPHA_EXT                                                       0x858A
#define GL_SRC2_ALPHA                                                              0x858A
#define GL_SOURCE3_ALPHA_NV                                                        0x858B
#define GL_OPERAND0_RGB                                                            0x8590
#define GL_OPERAND0_RGB_ARB                                                        0x8590
#define GL_OPERAND0_RGB_EXT                                                        0x8590
#define GL_OPERAND1_RGB                                                            0x8591
#define GL_OPERAND1_RGB_ARB                                                        0x8591
#define GL_OPERAND1_RGB_EXT                                                        0x8591
#define GL_OPERAND2_RGB                                                            0x8592
#define GL_OPERAND2_RGB_ARB                                                        0x8592
#define GL_OPERAND2_RGB_EXT                                                        0x8592
#define GL_OPERAND3_RGB_NV                                                         0x8593
#define GL_OPERAND0_ALPHA                                                          0x8598
#define GL_OPERAND0_ALPHA_ARB                                                      0x8598
#define GL_OPERAND0_ALPHA_EXT                                                      0x8598
#define GL_OPERAND1_ALPHA                                                          0x8599
#define GL_OPERAND1_ALPHA_ARB                                                      0x8599
#define GL_OPERAND1_ALPHA_EXT                                                      0x8599
#define GL_OPERAND2_ALPHA                                                          0x859A
#define GL_OPERAND2_ALPHA_ARB                                                      0x859A
#define GL_OPERAND2_ALPHA_EXT                                                      0x859A
#define GL_OPERAND3_ALPHA_NV                                                       0x859B
#define GL_PACK_SUBSAMPLE_RATE_SGIX                                                0x85A0
#define GL_UNPACK_SUBSAMPLE_RATE_SGIX                                              0x85A1
#define GL_PIXEL_SUBSAMPLE_4444_SGIX                                               0x85A2
#define GL_PIXEL_SUBSAMPLE_2424_SGIX                                               0x85A3
#define GL_PIXEL_SUBSAMPLE_4242_SGIX                                               0x85A4
#define GL_PERTURB_EXT                                                             0x85AE
#define GL_TEXTURE_NORMAL_EXT                                                      0x85AF
#define GL_LIGHT_MODEL_SPECULAR_VECTOR_APPLE                                       0x85B0
#define GL_TRANSFORM_HINT_APPLE                                                    0x85B1
#define GL_UNPACK_CLIENT_STORAGE_APPLE                                             0x85B2
#define GL_BUFFER_OBJECT_APPLE                                                     0x85B3
#define GL_STORAGE_CLIENT_APPLE                                                    0x85B4
#define GL_VERTEX_ARRAY_BINDING                                                    0x85B5
#define GL_VERTEX_ARRAY_BINDING_APPLE                                              0x85B5
#define GL_VERTEX_ARRAY_BINDING_OES                                                0x85B5
#define GL_TEXTURE_RANGE_LENGTH_APPLE                                              0x85B7
#define GL_TEXTURE_RANGE_POINTER_APPLE                                             0x85B8
#define GL_YCBCR_422_APPLE                                                         0x85B9
#define GL_UNSIGNED_SHORT_8_8_APPLE                                                0x85BA
#define GL_UNSIGNED_SHORT_8_8_MESA                                                 0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_APPLE                                            0x85BB
#define GL_UNSIGNED_SHORT_8_8_REV_MESA                                             0x85BB
#define GL_TEXTURE_STORAGE_HINT_APPLE                                              0x85BC
#define GL_STORAGE_PRIVATE_APPLE                                                   0x85BD
#define GL_STORAGE_CACHED_APPLE                                                    0x85BE
#define GL_STORAGE_SHARED_APPLE                                                    0x85BF
#define GL_REPLACEMENT_CODE_ARRAY_SUN                                              0x85C0
#define GL_REPLACEMENT_CODE_ARRAY_TYPE_SUN                                         0x85C1
#define GL_REPLACEMENT_CODE_ARRAY_STRIDE_SUN                                       0x85C2
#define GL_REPLACEMENT_CODE_ARRAY_POINTER_SUN                                      0x85C3
#define GL_R1UI_V3F_SUN                                                            0x85C4
#define GL_R1UI_C4UB_V3F_SUN                                                       0x85C5
#define GL_R1UI_C3F_V3F_SUN                                                        0x85C6
#define GL_R1UI_N3F_V3F_SUN                                                        0x85C7
#define GL_R1UI_C4F_N3F_V3F_SUN                                                    0x85C8
#define GL_R1UI_T2F_V3F_SUN                                                        0x85C9
#define GL_R1UI_T2F_N3F_V3F_SUN                                                    0x85CA
#define GL_R1UI_T2F_C4F_N3F_V3F_SUN                                                0x85CB
#define GL_SLICE_ACCUM_SUN                                                         0x85CC
#define GL_QUAD_MESH_SUN                                                           0x8614
#define GL_TRIANGLE_MESH_SUN                                                       0x8615
#define GL_VERTEX_PROGRAM_ARB                                                      0x8620
#define GL_VERTEX_PROGRAM_NV                                                       0x8620
#define GL_VERTEX_STATE_PROGRAM_NV                                                 0x8621
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED                                             0x8622
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED_ARB                                         0x8622
#define GL_ATTRIB_ARRAY_SIZE_NV                                                    0x8623
#define GL_VERTEX_ATTRIB_ARRAY_SIZE                                                0x8623
#define GL_VERTEX_ATTRIB_ARRAY_SIZE_ARB                                            0x8623
#define GL_ATTRIB_ARRAY_STRIDE_NV                                                  0x8624
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE                                              0x8624
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE_ARB                                          0x8624
#define GL_ATTRIB_ARRAY_TYPE_NV                                                    0x8625
#define GL_VERTEX_ATTRIB_ARRAY_TYPE                                                0x8625
#define GL_VERTEX_ATTRIB_ARRAY_TYPE_ARB                                            0x8625
#define GL_CURRENT_ATTRIB_NV                                                       0x8626
#define GL_CURRENT_VERTEX_ATTRIB                                                   0x8626
#define GL_CURRENT_VERTEX_ATTRIB_ARB                                               0x8626
#define GL_PROGRAM_LENGTH_ARB                                                      0x8627
#define GL_PROGRAM_LENGTH_NV                                                       0x8627
#define GL_PROGRAM_STRING_ARB                                                      0x8628
#define GL_PROGRAM_STRING_NV                                                       0x8628
#define GL_MODELVIEW_PROJECTION_NV                                                 0x8629
#define GL_IDENTITY_NV                                                             0x862A
#define GL_INVERSE_NV                                                              0x862B
#define GL_TRANSPOSE_NV                                                            0x862C
#define GL_INVERSE_TRANSPOSE_NV                                                    0x862D
#define GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB                                      0x862E
#define GL_MAX_TRACK_MATRIX_STACK_DEPTH_NV                                         0x862E
#define GL_MAX_PROGRAM_MATRICES_ARB                                                0x862F
#define GL_MAX_TRACK_MATRICES_NV                                                   0x862F
#define GL_MATRIX0_NV                                                              0x8630
#define GL_MATRIX1_NV                                                              0x8631
#define GL_MATRIX2_NV                                                              0x8632
#define GL_MATRIX3_NV                                                              0x8633
#define GL_MATRIX4_NV                                                              0x8634
#define GL_MATRIX5_NV                                                              0x8635
#define GL_MATRIX6_NV                                                              0x8636
#define GL_MATRIX7_NV                                                              0x8637
#define GL_CURRENT_MATRIX_STACK_DEPTH_ARB                                          0x8640
#define GL_CURRENT_MATRIX_STACK_DEPTH_NV                                           0x8640
#define GL_CURRENT_MATRIX_ARB                                                      0x8641
#define GL_CURRENT_MATRIX_NV                                                       0x8641
#define GL_PROGRAM_POINT_SIZE                                                      0x8642
#define GL_PROGRAM_POINT_SIZE_ARB                                                  0x8642
#define GL_PROGRAM_POINT_SIZE_EXT                                                  0x8642
#define GL_VERTEX_PROGRAM_POINT_SIZE                                               0x8642
#define GL_VERTEX_PROGRAM_POINT_SIZE_ARB                                           0x8642
#define GL_VERTEX_PROGRAM_POINT_SIZE_NV                                            0x8642
#define GL_VERTEX_PROGRAM_TWO_SIDE                                                 0x8643
#define GL_VERTEX_PROGRAM_TWO_SIDE_ARB                                             0x8643
#define GL_VERTEX_PROGRAM_TWO_SIDE_NV                                              0x8643
#define GL_PROGRAM_PARAMETER_NV                                                    0x8644
#define GL_ATTRIB_ARRAY_POINTER_NV                                                 0x8645
#define GL_VERTEX_ATTRIB_ARRAY_POINTER                                             0x8645
#define GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB                                         0x8645
#define GL_PROGRAM_TARGET_NV                                                       0x8646
#define GL_PROGRAM_RESIDENT_NV                                                     0x8647
#define GL_TRACK_MATRIX_NV                                                         0x8648
#define GL_TRACK_MATRIX_TRANSFORM_NV                                               0x8649
#define GL_VERTEX_PROGRAM_BINDING_NV                                               0x864A
#define GL_PROGRAM_ERROR_POSITION_ARB                                              0x864B
#define GL_PROGRAM_ERROR_POSITION_NV                                               0x864B
#define GL_OFFSET_TEXTURE_RECTANGLE_NV                                             0x864C
#define GL_OFFSET_TEXTURE_RECTANGLE_SCALE_NV                                       0x864D
#define GL_DOT_PRODUCT_TEXTURE_RECTANGLE_NV                                        0x864E
#define GL_DEPTH_CLAMP                                                             0x864F
#define GL_DEPTH_CLAMP_NV                                                          0x864F
#define GL_VERTEX_ATTRIB_ARRAY0_NV                                                 0x8650
#define GL_VERTEX_ATTRIB_ARRAY1_NV                                                 0x8651
#define GL_VERTEX_ATTRIB_ARRAY2_NV                                                 0x8652
#define GL_VERTEX_ATTRIB_ARRAY3_NV                                                 0x8653
#define GL_VERTEX_ATTRIB_ARRAY4_NV                                                 0x8654
#define GL_VERTEX_ATTRIB_ARRAY5_NV                                                 0x8655
#define GL_VERTEX_ATTRIB_ARRAY6_NV                                                 0x8656
#define GL_VERTEX_ATTRIB_ARRAY7_NV                                                 0x8657
#define GL_VERTEX_ATTRIB_ARRAY8_NV                                                 0x8658
#define GL_VERTEX_ATTRIB_ARRAY9_NV                                                 0x8659
#define GL_VERTEX_ATTRIB_ARRAY10_NV                                                0x865A
#define GL_VERTEX_ATTRIB_ARRAY11_NV                                                0x865B
#define GL_VERTEX_ATTRIB_ARRAY12_NV                                                0x865C
#define GL_VERTEX_ATTRIB_ARRAY13_NV                                                0x865D
#define GL_VERTEX_ATTRIB_ARRAY14_NV                                                0x865E
#define GL_VERTEX_ATTRIB_ARRAY15_NV                                                0x865F
#define GL_MAP1_VERTEX_ATTRIB0_4_NV                                                0x8660
#define GL_MAP1_VERTEX_ATTRIB1_4_NV                                                0x8661
#define GL_MAP1_VERTEX_ATTRIB2_4_NV                                                0x8662
#define GL_MAP1_VERTEX_ATTRIB3_4_NV                                                0x8663
#define GL_MAP1_VERTEX_ATTRIB4_4_NV                                                0x8664
#define GL_MAP1_VERTEX_ATTRIB5_4_NV                                                0x8665
#define GL_MAP1_VERTEX_ATTRIB6_4_NV                                                0x8666
#define GL_MAP1_VERTEX_ATTRIB7_4_NV                                                0x8667
#define GL_MAP1_VERTEX_ATTRIB8_4_NV                                                0x8668
#define GL_MAP1_VERTEX_ATTRIB9_4_NV                                                0x8669
#define GL_MAP1_VERTEX_ATTRIB10_4_NV                                               0x866A
#define GL_MAP1_VERTEX_ATTRIB11_4_NV                                               0x866B
#define GL_MAP1_VERTEX_ATTRIB12_4_NV                                               0x866C
#define GL_MAP1_VERTEX_ATTRIB13_4_NV                                               0x866D
#define GL_MAP1_VERTEX_ATTRIB14_4_NV                                               0x866E
#define GL_MAP1_VERTEX_ATTRIB15_4_NV                                               0x866F
#define GL_MAP2_VERTEX_ATTRIB0_4_NV                                                0x8670
#define GL_MAP2_VERTEX_ATTRIB1_4_NV                                                0x8671
#define GL_MAP2_VERTEX_ATTRIB2_4_NV                                                0x8672
#define GL_MAP2_VERTEX_ATTRIB3_4_NV                                                0x8673
#define GL_MAP2_VERTEX_ATTRIB4_4_NV                                                0x8674
#define GL_MAP2_VERTEX_ATTRIB5_4_NV                                                0x8675
#define GL_MAP2_VERTEX_ATTRIB6_4_NV                                                0x8676
#define GL_MAP2_VERTEX_ATTRIB7_4_NV                                                0x8677
#define GL_PROGRAM_BINDING_ARB                                                     0x8677
#define GL_MAP2_VERTEX_ATTRIB8_4_NV                                                0x8678
#define GL_MAP2_VERTEX_ATTRIB9_4_NV                                                0x8679
#define GL_MAP2_VERTEX_ATTRIB10_4_NV                                               0x867A
#define GL_MAP2_VERTEX_ATTRIB11_4_NV                                               0x867B
#define GL_MAP2_VERTEX_ATTRIB12_4_NV                                               0x867C
#define GL_MAP2_VERTEX_ATTRIB13_4_NV                                               0x867D
#define GL_MAP2_VERTEX_ATTRIB14_4_NV                                               0x867E
#define GL_MAP2_VERTEX_ATTRIB15_4_NV                                               0x867F
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE                                           0x86A0
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB                                       0x86A0
#define GL_TEXTURE_COMPRESSED                                                      0x86A1
#define GL_TEXTURE_COMPRESSED_ARB                                                  0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS                                          0x86A2
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB                                      0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS                                              0x86A3
#define GL_COMPRESSED_TEXTURE_FORMATS_ARB                                          0x86A3
#define GL_MAX_VERTEX_UNITS_ARB                                                    0x86A4
#define GL_MAX_VERTEX_UNITS_OES                                                    0x86A4
#define GL_ACTIVE_VERTEX_UNITS_ARB                                                 0x86A5
#define GL_WEIGHT_SUM_UNITY_ARB                                                    0x86A6
#define GL_VERTEX_BLEND_ARB                                                        0x86A7
#define GL_CURRENT_WEIGHT_ARB                                                      0x86A8
#define GL_WEIGHT_ARRAY_TYPE_ARB                                                   0x86A9
#define GL_WEIGHT_ARRAY_TYPE_OES                                                   0x86A9
#define GL_WEIGHT_ARRAY_STRIDE_ARB                                                 0x86AA
#define GL_WEIGHT_ARRAY_STRIDE_OES                                                 0x86AA
#define GL_WEIGHT_ARRAY_SIZE_ARB                                                   0x86AB
#define GL_WEIGHT_ARRAY_SIZE_OES                                                   0x86AB
#define GL_WEIGHT_ARRAY_POINTER_ARB                                                0x86AC
#define GL_WEIGHT_ARRAY_POINTER_OES                                                0x86AC
#define GL_WEIGHT_ARRAY_ARB                                                        0x86AD
#define GL_WEIGHT_ARRAY_OES                                                        0x86AD
#define GL_DOT3_RGB                                                                0x86AE
#define GL_DOT3_RGB_ARB                                                            0x86AE
#define GL_DOT3_RGBA                                                               0x86AF
#define GL_DOT3_RGBA_ARB                                                           0x86AF
#define GL_DOT3_RGBA_IMG                                                           0x86AF
#define GL_COMPRESSED_RGB_FXT1_3DFX                                                0x86B0
#define GL_COMPRESSED_RGBA_FXT1_3DFX                                               0x86B1
#define GL_MULTISAMPLE_3DFX                                                        0x86B2
#define GL_SAMPLE_BUFFERS_3DFX                                                     0x86B3
#define GL_SAMPLES_3DFX                                                            0x86B4
#define GL_EVAL_2D_NV                                                              0x86C0
#define GL_EVAL_TRIANGULAR_2D_NV                                                   0x86C1
#define GL_MAP_TESSELLATION_NV                                                     0x86C2
#define GL_MAP_ATTRIB_U_ORDER_NV                                                   0x86C3
#define GL_MAP_ATTRIB_V_ORDER_NV                                                   0x86C4
#define GL_EVAL_FRACTIONAL_TESSELLATION_NV                                         0x86C5
#define GL_EVAL_VERTEX_ATTRIB0_NV                                                  0x86C6
#define GL_EVAL_VERTEX_ATTRIB1_NV                                                  0x86C7
#define GL_EVAL_VERTEX_ATTRIB2_NV                                                  0x86C8
#define GL_EVAL_VERTEX_ATTRIB3_NV                                                  0x86C9
#define GL_EVAL_VERTEX_ATTRIB4_NV                                                  0x86CA
#define GL_EVAL_VERTEX_ATTRIB5_NV                                                  0x86CB
#define GL_EVAL_VERTEX_ATTRIB6_NV                                                  0x86CC
#define GL_EVAL_VERTEX_ATTRIB7_NV                                                  0x86CD
#define GL_EVAL_VERTEX_ATTRIB8_NV                                                  0x86CE
#define GL_EVAL_VERTEX_ATTRIB9_NV                                                  0x86CF
#define GL_EVAL_VERTEX_ATTRIB10_NV                                                 0x86D0
#define GL_EVAL_VERTEX_ATTRIB11_NV                                                 0x86D1
#define GL_EVAL_VERTEX_ATTRIB12_NV                                                 0x86D2
#define GL_EVAL_VERTEX_ATTRIB13_NV                                                 0x86D3
#define GL_EVAL_VERTEX_ATTRIB14_NV                                                 0x86D4
#define GL_EVAL_VERTEX_ATTRIB15_NV                                                 0x86D5
#define GL_MAX_MAP_TESSELLATION_NV                                                 0x86D6
#define GL_MAX_RATIONAL_EVAL_ORDER_NV                                              0x86D7
#define GL_MAX_PROGRAM_PATCH_ATTRIBS_NV                                            0x86D8
#define GL_RGBA_UNSIGNED_DOT_PRODUCT_MAPPING_NV                                    0x86D9
#define GL_UNSIGNED_INT_S8_S8_8_8_NV                                               0x86DA
#define GL_UNSIGNED_INT_8_8_S8_S8_REV_NV                                           0x86DB
#define GL_DSDT_MAG_INTENSITY_NV                                                   0x86DC
#define GL_SHADER_CONSISTENT_NV                                                    0x86DD
#define GL_TEXTURE_SHADER_NV                                                       0x86DE
#define GL_SHADER_OPERATION_NV                                                     0x86DF
#define GL_CULL_MODES_NV                                                           0x86E0
#define GL_OFFSET_TEXTURE_2D_MATRIX_NV                                             0x86E1
#define GL_OFFSET_TEXTURE_MATRIX_NV                                                0x86E1
#define GL_OFFSET_TEXTURE_2D_SCALE_NV                                              0x86E2
#define GL_OFFSET_TEXTURE_SCALE_NV                                                 0x86E2
#define GL_OFFSET_TEXTURE_2D_BIAS_NV                                               0x86E3
#define GL_OFFSET_TEXTURE_BIAS_NV                                                  0x86E3
#define GL_PREVIOUS_TEXTURE_INPUT_NV                                               0x86E4
#define GL_CONST_EYE_NV                                                            0x86E5
#define GL_PASS_THROUGH_NV                                                         0x86E6
#define GL_CULL_FRAGMENT_NV                                                        0x86E7
#define GL_OFFSET_TEXTURE_2D_NV                                                    0x86E8
#define GL_DEPENDENT_AR_TEXTURE_2D_NV                                              0x86E9
#define GL_DEPENDENT_GB_TEXTURE_2D_NV                                              0x86EA
#define GL_SURFACE_STATE_NV                                                        0x86EB
#define GL_DOT_PRODUCT_NV                                                          0x86EC
#define GL_DOT_PRODUCT_DEPTH_REPLACE_NV                                            0x86ED
#define GL_DOT_PRODUCT_TEXTURE_2D_NV                                               0x86EE
#define GL_DOT_PRODUCT_TEXTURE_3D_NV                                               0x86EF
#define GL_DOT_PRODUCT_TEXTURE_CUBE_MAP_NV                                         0x86F0
#define GL_DOT_PRODUCT_DIFFUSE_CUBE_MAP_NV                                         0x86F1
#define GL_DOT_PRODUCT_REFLECT_CUBE_MAP_NV                                         0x86F2
#define GL_DOT_PRODUCT_CONST_EYE_REFLECT_CUBE_MAP_NV                               0x86F3
#define GL_HILO_NV                                                                 0x86F4
#define GL_DSDT_NV                                                                 0x86F5
#define GL_DSDT_MAG_NV                                                             0x86F6
#define GL_DSDT_MAG_VIB_NV                                                         0x86F7
#define GL_HILO16_NV                                                               0x86F8
#define GL_SIGNED_HILO_NV                                                          0x86F9
#define GL_SIGNED_HILO16_NV                                                        0x86FA
#define GL_SIGNED_RGBA_NV                                                          0x86FB
#define GL_SIGNED_RGBA8_NV                                                         0x86FC
#define GL_SURFACE_REGISTERED_NV                                                   0x86FD
#define GL_SIGNED_RGB_NV                                                           0x86FE
#define GL_SIGNED_RGB8_NV                                                          0x86FF
#define GL_SURFACE_MAPPED_NV                                                       0x8700
#define GL_SIGNED_LUMINANCE_NV                                                     0x8701
#define GL_SIGNED_LUMINANCE8_NV                                                    0x8702
#define GL_SIGNED_LUMINANCE_ALPHA_NV                                               0x8703
#define GL_SIGNED_LUMINANCE8_ALPHA8_NV                                             0x8704
#define GL_SIGNED_ALPHA_NV                                                         0x8705
#define GL_SIGNED_ALPHA8_NV                                                        0x8706
#define GL_SIGNED_INTENSITY_NV                                                     0x8707
#define GL_SIGNED_INTENSITY8_NV                                                    0x8708
#define GL_DSDT8_NV                                                                0x8709
#define GL_DSDT8_MAG8_NV                                                           0x870A
#define GL_DSDT8_MAG8_INTENSITY8_NV                                                0x870B
#define GL_SIGNED_RGB_UNSIGNED_ALPHA_NV                                            0x870C
#define GL_SIGNED_RGB8_UNSIGNED_ALPHA8_NV                                          0x870D
#define GL_HI_SCALE_NV                                                             0x870E
#define GL_LO_SCALE_NV                                                             0x870F
#define GL_DS_SCALE_NV                                                             0x8710
#define GL_DT_SCALE_NV                                                             0x8711
#define GL_MAGNITUDE_SCALE_NV                                                      0x8712
#define GL_VIBRANCE_SCALE_NV                                                       0x8713
#define GL_HI_BIAS_NV                                                              0x8714
#define GL_LO_BIAS_NV                                                              0x8715
#define GL_DS_BIAS_NV                                                              0x8716
#define GL_DT_BIAS_NV                                                              0x8717
#define GL_MAGNITUDE_BIAS_NV                                                       0x8718
#define GL_VIBRANCE_BIAS_NV                                                        0x8719
#define GL_TEXTURE_BORDER_VALUES_NV                                                0x871A
#define GL_TEXTURE_HI_SIZE_NV                                                      0x871B
#define GL_TEXTURE_LO_SIZE_NV                                                      0x871C
#define GL_TEXTURE_DS_SIZE_NV                                                      0x871D
#define GL_TEXTURE_DT_SIZE_NV                                                      0x871E
#define GL_TEXTURE_MAG_SIZE_NV                                                     0x871F
#define GL_MODELVIEW2_ARB                                                          0x8722
#define GL_MODELVIEW3_ARB                                                          0x8723
#define GL_MODELVIEW4_ARB                                                          0x8724
#define GL_MODELVIEW5_ARB                                                          0x8725
#define GL_MODELVIEW6_ARB                                                          0x8726
#define GL_MODELVIEW7_ARB                                                          0x8727
#define GL_MODELVIEW8_ARB                                                          0x8728
#define GL_MODELVIEW9_ARB                                                          0x8729
#define GL_MODELVIEW10_ARB                                                         0x872A
#define GL_MODELVIEW11_ARB                                                         0x872B
#define GL_MODELVIEW12_ARB                                                         0x872C
#define GL_MODELVIEW13_ARB                                                         0x872D
#define GL_MODELVIEW14_ARB                                                         0x872E
#define GL_MODELVIEW15_ARB                                                         0x872F
#define GL_MODELVIEW16_ARB                                                         0x8730
#define GL_MODELVIEW17_ARB                                                         0x8731
#define GL_MODELVIEW18_ARB                                                         0x8732
#define GL_MODELVIEW19_ARB                                                         0x8733
#define GL_MODELVIEW20_ARB                                                         0x8734
#define GL_MODELVIEW21_ARB                                                         0x8735
#define GL_MODELVIEW22_ARB                                                         0x8736
#define GL_MODELVIEW23_ARB                                                         0x8737
#define GL_MODELVIEW24_ARB                                                         0x8738
#define GL_MODELVIEW25_ARB                                                         0x8739
#define GL_MODELVIEW26_ARB                                                         0x873A
#define GL_MODELVIEW27_ARB                                                         0x873B
#define GL_MODELVIEW28_ARB                                                         0x873C
#define GL_MODELVIEW29_ARB                                                         0x873D
#define GL_MODELVIEW30_ARB                                                         0x873E
#define GL_MODELVIEW31_ARB                                                         0x873F
#define GL_DOT3_RGB_EXT                                                            0x8740
#define GL_Z400_BINARY_AMD                                                         0x8740
#define GL_DOT3_RGBA_EXT                                                           0x8741
#define GL_PROGRAM_BINARY_LENGTH                                                   0x8741
#define GL_PROGRAM_BINARY_LENGTH_OES                                               0x8741
#define GL_MIRROR_CLAMP_ATI                                                        0x8742
#define GL_MIRROR_CLAMP_EXT                                                        0x8742
#define GL_MIRROR_CLAMP_TO_EDGE                                                    0x8743
#define GL_MIRROR_CLAMP_TO_EDGE_ATI                                                0x8743
#define GL_MIRROR_CLAMP_TO_EDGE_EXT                                                0x8743
#define GL_MODULATE_ADD_ATI                                                        0x8744
#define GL_MODULATE_SIGNED_ADD_ATI                                                 0x8745
#define GL_MODULATE_SUBTRACT_ATI                                                   0x8746
#define GL_SET_AMD                                                                 0x874A
#define GL_REPLACE_VALUE_AMD                                                       0x874B
#define GL_STENCIL_OP_VALUE_AMD                                                    0x874C
#define GL_STENCIL_BACK_OP_VALUE_AMD                                               0x874D
#define GL_VERTEX_ATTRIB_ARRAY_LONG                                                0x874E
#define GL_OCCLUSION_QUERY_EVENT_MASK_AMD                                          0x874F
#define GL_DEPTH_STENCIL_MESA                                                      0x8750
#define GL_UNSIGNED_INT_24_8_MESA                                                  0x8751
#define GL_UNSIGNED_INT_8_24_REV_MESA                                              0x8752
#define GL_UNSIGNED_SHORT_15_1_MESA                                                0x8753
#define GL_UNSIGNED_SHORT_1_15_REV_MESA                                            0x8754
#define GL_TRACE_MASK_MESA                                                         0x8755
#define GL_TRACE_NAME_MESA                                                         0x8756
#define GL_YCBCR_MESA                                                              0x8757
#define GL_PACK_INVERT_MESA                                                        0x8758
#define GL_DEBUG_OBJECT_MESA                                                       0x8759
#define GL_TEXTURE_1D_STACK_MESAX                                                  0x8759
#define GL_DEBUG_PRINT_MESA                                                        0x875A
#define GL_TEXTURE_2D_STACK_MESAX                                                  0x875A
#define GL_DEBUG_ASSERT_MESA                                                       0x875B
#define GL_PROXY_TEXTURE_1D_STACK_MESAX                                            0x875B
#define GL_PROXY_TEXTURE_2D_STACK_MESAX                                            0x875C
#define GL_TEXTURE_1D_STACK_BINDING_MESAX                                          0x875D
#define GL_TEXTURE_2D_STACK_BINDING_MESAX                                          0x875E
#define GL_PROGRAM_BINARY_FORMAT_MESA                                              0x875F
#define GL_STATIC_ATI                                                              0x8760
#define GL_DYNAMIC_ATI                                                             0x8761
#define GL_PRESERVE_ATI                                                            0x8762
#define GL_DISCARD_ATI                                                             0x8763
#define GL_BUFFER_SIZE                                                             0x8764
#define GL_BUFFER_SIZE_ARB                                                         0x8764
#define GL_OBJECT_BUFFER_SIZE_ATI                                                  0x8764
#define GL_BUFFER_USAGE                                                            0x8765
#define GL_BUFFER_USAGE_ARB                                                        0x8765
#define GL_OBJECT_BUFFER_USAGE_ATI                                                 0x8765
#define GL_ARRAY_OBJECT_BUFFER_ATI                                                 0x8766
#define GL_ARRAY_OBJECT_OFFSET_ATI                                                 0x8767
#define GL_ELEMENT_ARRAY_ATI                                                       0x8768
#define GL_ELEMENT_ARRAY_TYPE_ATI                                                  0x8769
#define GL_ELEMENT_ARRAY_POINTER_ATI                                               0x876A
#define GL_MAX_VERTEX_STREAMS_ATI                                                  0x876B
#define GL_VERTEX_STREAM0_ATI                                                      0x876C
#define GL_VERTEX_STREAM1_ATI                                                      0x876D
#define GL_VERTEX_STREAM2_ATI                                                      0x876E
#define GL_VERTEX_STREAM3_ATI                                                      0x876F
#define GL_VERTEX_STREAM4_ATI                                                      0x8770
#define GL_VERTEX_STREAM5_ATI                                                      0x8771
#define GL_VERTEX_STREAM6_ATI                                                      0x8772
#define GL_VERTEX_STREAM7_ATI                                                      0x8773
#define GL_VERTEX_SOURCE_ATI                                                       0x8774
#define GL_BUMP_ROT_MATRIX_ATI                                                     0x8775
#define GL_BUMP_ROT_MATRIX_SIZE_ATI                                                0x8776
#define GL_BUMP_NUM_TEX_UNITS_ATI                                                  0x8777
#define GL_BUMP_TEX_UNITS_ATI                                                      0x8778
#define GL_DUDV_ATI                                                                0x8779
#define GL_DU8DV8_ATI                                                              0x877A
#define GL_BUMP_ENVMAP_ATI                                                         0x877B
#define GL_BUMP_TARGET_ATI                                                         0x877C
#define GL_VERTEX_SHADER_EXT                                                       0x8780
#define GL_VERTEX_SHADER_BINDING_EXT                                               0x8781
#define GL_OP_INDEX_EXT                                                            0x8782
#define GL_OP_NEGATE_EXT                                                           0x8783
#define GL_OP_DOT3_EXT                                                             0x8784
#define GL_OP_DOT4_EXT                                                             0x8785
#define GL_OP_MUL_EXT                                                              0x8786
#define GL_OP_ADD_EXT                                                              0x8787
#define GL_OP_MADD_EXT                                                             0x8788
#define GL_OP_FRAC_EXT                                                             0x8789
#define GL_OP_MAX_EXT                                                              0x878A
#define GL_OP_MIN_EXT                                                              0x878B
#define GL_OP_SET_GE_EXT                                                           0x878C
#define GL_OP_SET_LT_EXT                                                           0x878D
#define GL_OP_CLAMP_EXT                                                            0x878E
#define GL_OP_FLOOR_EXT                                                            0x878F
#define GL_OP_ROUND_EXT                                                            0x8790
#define GL_OP_EXP_BASE_2_EXT                                                       0x8791
#define GL_OP_LOG_BASE_2_EXT                                                       0x8792
#define GL_OP_POWER_EXT                                                            0x8793
#define GL_OP_RECIP_EXT                                                            0x8794
#define GL_OP_RECIP_SQRT_EXT                                                       0x8795
#define GL_OP_SUB_EXT                                                              0x8796
#define GL_OP_CROSS_PRODUCT_EXT                                                    0x8797
#define GL_OP_MULTIPLY_MATRIX_EXT                                                  0x8798
#define GL_OP_MOV_EXT                                                              0x8799
#define GL_OUTPUT_VERTEX_EXT                                                       0x879A
#define GL_OUTPUT_COLOR0_EXT                                                       0x879B
#define GL_OUTPUT_COLOR1_EXT                                                       0x879C
#define GL_OUTPUT_TEXTURE_COORD0_EXT                                               0x879D
#define GL_OUTPUT_TEXTURE_COORD1_EXT                                               0x879E
#define GL_OUTPUT_TEXTURE_COORD2_EXT                                               0x879F
#define GL_OUTPUT_TEXTURE_COORD3_EXT                                               0x87A0
#define GL_OUTPUT_TEXTURE_COORD4_EXT                                               0x87A1
#define GL_OUTPUT_TEXTURE_COORD5_EXT                                               0x87A2
#define GL_OUTPUT_TEXTURE_COORD6_EXT                                               0x87A3
#define GL_OUTPUT_TEXTURE_COORD7_EXT                                               0x87A4
#define GL_OUTPUT_TEXTURE_COORD8_EXT                                               0x87A5
#define GL_OUTPUT_TEXTURE_COORD9_EXT                                               0x87A6
#define GL_OUTPUT_TEXTURE_COORD10_EXT                                              0x87A7
#define GL_OUTPUT_TEXTURE_COORD11_EXT                                              0x87A8
#define GL_OUTPUT_TEXTURE_COORD12_EXT                                              0x87A9
#define GL_OUTPUT_TEXTURE_COORD13_EXT                                              0x87AA
#define GL_OUTPUT_TEXTURE_COORD14_EXT                                              0x87AB
#define GL_OUTPUT_TEXTURE_COORD15_EXT                                              0x87AC
#define GL_OUTPUT_TEXTURE_COORD16_EXT                                              0x87AD
#define GL_OUTPUT_TEXTURE_COORD17_EXT                                              0x87AE
#define GL_OUTPUT_TEXTURE_COORD18_EXT                                              0x87AF
#define GL_OUTPUT_TEXTURE_COORD19_EXT                                              0x87B0
#define GL_OUTPUT_TEXTURE_COORD20_EXT                                              0x87B1
#define GL_OUTPUT_TEXTURE_COORD21_EXT                                              0x87B2
#define GL_OUTPUT_TEXTURE_COORD22_EXT                                              0x87B3
#define GL_OUTPUT_TEXTURE_COORD23_EXT                                              0x87B4
#define GL_OUTPUT_TEXTURE_COORD24_EXT                                              0x87B5
#define GL_OUTPUT_TEXTURE_COORD25_EXT                                              0x87B6
#define GL_OUTPUT_TEXTURE_COORD26_EXT                                              0x87B7
#define GL_OUTPUT_TEXTURE_COORD27_EXT                                              0x87B8
#define GL_OUTPUT_TEXTURE_COORD28_EXT                                              0x87B9
#define GL_OUTPUT_TEXTURE_COORD29_EXT                                              0x87BA
#define GL_OUTPUT_TEXTURE_COORD30_EXT                                              0x87BB
#define GL_OUTPUT_TEXTURE_COORD31_EXT                                              0x87BC
#define GL_OUTPUT_FOG_EXT                                                          0x87BD
#define GL_SCALAR_EXT                                                              0x87BE
#define GL_VECTOR_EXT                                                              0x87BF
#define GL_MATRIX_EXT                                                              0x87C0
#define GL_VARIANT_EXT                                                             0x87C1
#define GL_INVARIANT_EXT                                                           0x87C2
#define GL_LOCAL_CONSTANT_EXT                                                      0x87C3
#define GL_LOCAL_EXT                                                               0x87C4
#define GL_MAX_VERTEX_SHADER_INSTRUCTIONS_EXT                                      0x87C5
#define GL_MAX_VERTEX_SHADER_VARIANTS_EXT                                          0x87C6
#define GL_MAX_VERTEX_SHADER_INVARIANTS_EXT                                        0x87C7
#define GL_MAX_VERTEX_SHADER_LOCAL_CONSTANTS_EXT                                   0x87C8
#define GL_MAX_VERTEX_SHADER_LOCALS_EXT                                            0x87C9
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_INSTRUCTIONS_EXT                            0x87CA
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_VARIANTS_EXT                                0x87CB
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCAL_CONSTANTS_EXT                         0x87CC
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_INVARIANTS_EXT                              0x87CD
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCALS_EXT                                  0x87CE
#define GL_VERTEX_SHADER_INSTRUCTIONS_EXT                                          0x87CF
#define GL_VERTEX_SHADER_VARIANTS_EXT                                              0x87D0
#define GL_VERTEX_SHADER_INVARIANTS_EXT                                            0x87D1
#define GL_VERTEX_SHADER_LOCAL_CONSTANTS_EXT                                       0x87D2
#define GL_VERTEX_SHADER_LOCALS_EXT                                                0x87D3
#define GL_VERTEX_SHADER_OPTIMIZED_EXT                                             0x87D4
#define GL_X_EXT                                                                   0x87D5
#define GL_Y_EXT                                                                   0x87D6
#define GL_Z_EXT                                                                   0x87D7
#define GL_W_EXT                                                                   0x87D8
#define GL_NEGATIVE_X_EXT                                                          0x87D9
#define GL_NEGATIVE_Y_EXT                                                          0x87DA
#define GL_NEGATIVE_Z_EXT                                                          0x87DB
#define GL_NEGATIVE_W_EXT                                                          0x87DC
#define GL_ZERO_EXT                                                                0x87DD
#define GL_ONE_EXT                                                                 0x87DE
#define GL_NEGATIVE_ONE_EXT                                                        0x87DF
#define GL_NORMALIZED_RANGE_EXT                                                    0x87E0
#define GL_FULL_RANGE_EXT                                                          0x87E1
#define GL_CURRENT_VERTEX_EXT                                                      0x87E2
#define GL_MVP_MATRIX_EXT                                                          0x87E3
#define GL_VARIANT_VALUE_EXT                                                       0x87E4
#define GL_VARIANT_DATATYPE_EXT                                                    0x87E5
#define GL_VARIANT_ARRAY_STRIDE_EXT                                                0x87E6
#define GL_VARIANT_ARRAY_TYPE_EXT                                                  0x87E7
#define GL_VARIANT_ARRAY_EXT                                                       0x87E8
#define GL_VARIANT_ARRAY_POINTER_EXT                                               0x87E9
#define GL_INVARIANT_VALUE_EXT                                                     0x87EA
#define GL_INVARIANT_DATATYPE_EXT                                                  0x87EB
#define GL_LOCAL_CONSTANT_VALUE_EXT                                                0x87EC
#define GL_LOCAL_CONSTANT_DATATYPE_EXT                                             0x87ED
#define GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD                                         0x87EE
#define GL_PN_TRIANGLES_ATI                                                        0x87F0
#define GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI                                  0x87F1
#define GL_PN_TRIANGLES_POINT_MODE_ATI                                             0x87F2
#define GL_PN_TRIANGLES_NORMAL_MODE_ATI                                            0x87F3
#define GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI                                      0x87F4
#define GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI                                      0x87F5
#define GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI                                       0x87F6
#define GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI                                     0x87F7
#define GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI                                  0x87F8
#define GL_3DC_X_AMD                                                               0x87F9
#define GL_3DC_XY_AMD                                                              0x87FA
#define GL_VBO_FREE_MEMORY_ATI                                                     0x87FB
#define GL_TEXTURE_FREE_MEMORY_ATI                                                 0x87FC
#define GL_RENDERBUFFER_FREE_MEMORY_ATI                                            0x87FD
#define GL_NUM_PROGRAM_BINARY_FORMATS                                              0x87FE
#define GL_NUM_PROGRAM_BINARY_FORMATS_OES                                          0x87FE
#define GL_PROGRAM_BINARY_FORMATS                                                  0x87FF
#define GL_PROGRAM_BINARY_FORMATS_OES                                              0x87FF
#define GL_STENCIL_BACK_FUNC                                                       0x8800
#define GL_STENCIL_BACK_FUNC_ATI                                                   0x8800
#define GL_STENCIL_BACK_FAIL                                                       0x8801
#define GL_STENCIL_BACK_FAIL_ATI                                                   0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL                                            0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL_ATI                                        0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS                                            0x8803
#define GL_STENCIL_BACK_PASS_DEPTH_PASS_ATI                                        0x8803
#define GL_FRAGMENT_PROGRAM_ARB                                                    0x8804
#define GL_PROGRAM_ALU_INSTRUCTIONS_ARB                                            0x8805
#define GL_PROGRAM_TEX_INSTRUCTIONS_ARB                                            0x8806
#define GL_PROGRAM_TEX_INDIRECTIONS_ARB                                            0x8807
#define GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB                                     0x8808
#define GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB                                     0x8809
#define GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB                                     0x880A
#define GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB                                        0x880B
#define GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB                                        0x880C
#define GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB                                        0x880D
#define GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB                                 0x880E
#define GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB                                 0x880F
#define GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB                                 0x8810
#define GL_RGBA32F                                                                 0x8814
#define GL_RGBA32F_ARB                                                             0x8814
#define GL_RGBA32F_EXT                                                             0x8814
#define GL_RGBA_FLOAT32_APPLE                                                      0x8814
#define GL_RGBA_FLOAT32_ATI                                                        0x8814
#define GL_RGB32F                                                                  0x8815
#define GL_RGB32F_ARB                                                              0x8815
#define GL_RGB32F_EXT                                                              0x8815
#define GL_RGB_FLOAT32_APPLE                                                       0x8815
#define GL_RGB_FLOAT32_ATI                                                         0x8815
#define GL_ALPHA32F_ARB                                                            0x8816
#define GL_ALPHA32F_EXT                                                            0x8816
#define GL_ALPHA_FLOAT32_APPLE                                                     0x8816
#define GL_ALPHA_FLOAT32_ATI                                                       0x8816
#define GL_INTENSITY32F_ARB                                                        0x8817
#define GL_INTENSITY_FLOAT32_APPLE                                                 0x8817
#define GL_INTENSITY_FLOAT32_ATI                                                   0x8817
#define GL_LUMINANCE32F_ARB                                                        0x8818
#define GL_LUMINANCE32F_EXT                                                        0x8818
#define GL_LUMINANCE_FLOAT32_APPLE                                                 0x8818
#define GL_LUMINANCE_FLOAT32_ATI                                                   0x8818
#define GL_LUMINANCE_ALPHA32F_ARB                                                  0x8819
#define GL_LUMINANCE_ALPHA32F_EXT                                                  0x8819
#define GL_LUMINANCE_ALPHA_FLOAT32_APPLE                                           0x8819
#define GL_LUMINANCE_ALPHA_FLOAT32_ATI                                             0x8819
#define GL_RGBA16F                                                                 0x881A
#define GL_RGBA16F_ARB                                                             0x881A
#define GL_RGBA16F_EXT                                                             0x881A
#define GL_RGBA_FLOAT16_APPLE                                                      0x881A
#define GL_RGBA_FLOAT16_ATI                                                        0x881A
#define GL_RGB16F                                                                  0x881B
#define GL_RGB16F_ARB                                                              0x881B
#define GL_RGB16F_EXT                                                              0x881B
#define GL_RGB_FLOAT16_APPLE                                                       0x881B
#define GL_RGB_FLOAT16_ATI                                                         0x881B
#define GL_ALPHA16F_ARB                                                            0x881C
#define GL_ALPHA16F_EXT                                                            0x881C
#define GL_ALPHA_FLOAT16_APPLE                                                     0x881C
#define GL_ALPHA_FLOAT16_ATI                                                       0x881C
#define GL_INTENSITY16F_ARB                                                        0x881D
#define GL_INTENSITY_FLOAT16_APPLE                                                 0x881D
#define GL_INTENSITY_FLOAT16_ATI                                                   0x881D
#define GL_LUMINANCE16F_ARB                                                        0x881E
#define GL_LUMINANCE16F_EXT                                                        0x881E
#define GL_LUMINANCE_FLOAT16_APPLE                                                 0x881E
#define GL_LUMINANCE_FLOAT16_ATI                                                   0x881E
#define GL_LUMINANCE_ALPHA16F_ARB                                                  0x881F
#define GL_LUMINANCE_ALPHA16F_EXT                                                  0x881F
#define GL_LUMINANCE_ALPHA_FLOAT16_APPLE                                           0x881F
#define GL_LUMINANCE_ALPHA_FLOAT16_ATI                                             0x881F
#define GL_RGBA_FLOAT_MODE_ARB                                                     0x8820
#define GL_RGBA_FLOAT_MODE_ATI                                                     0x8820
#define GL_WRITEONLY_RENDERING_QCOM                                                0x8823
#define GL_MAX_DRAW_BUFFERS                                                        0x8824
#define GL_MAX_DRAW_BUFFERS_ARB                                                    0x8824
#define GL_MAX_DRAW_BUFFERS_ATI                                                    0x8824
#define GL_MAX_DRAW_BUFFERS_EXT                                                    0x8824
#define GL_MAX_DRAW_BUFFERS_NV                                                     0x8824
#define GL_DRAW_BUFFER0                                                            0x8825
#define GL_DRAW_BUFFER0_ARB                                                        0x8825
#define GL_DRAW_BUFFER0_ATI                                                        0x8825
#define GL_DRAW_BUFFER0_EXT                                                        0x8825
#define GL_DRAW_BUFFER0_NV                                                         0x8825
#define GL_DRAW_BUFFER1                                                            0x8826
#define GL_DRAW_BUFFER1_ARB                                                        0x8826
#define GL_DRAW_BUFFER1_ATI                                                        0x8826
#define GL_DRAW_BUFFER1_EXT                                                        0x8826
#define GL_DRAW_BUFFER1_NV                                                         0x8826
#define GL_DRAW_BUFFER2                                                            0x8827
#define GL_DRAW_BUFFER2_ARB                                                        0x8827
#define GL_DRAW_BUFFER2_ATI                                                        0x8827
#define GL_DRAW_BUFFER2_EXT                                                        0x8827
#define GL_DRAW_BUFFER2_NV                                                         0x8827
#define GL_DRAW_BUFFER3                                                            0x8828
#define GL_DRAW_BUFFER3_ARB                                                        0x8828
#define GL_DRAW_BUFFER3_ATI                                                        0x8828
#define GL_DRAW_BUFFER3_EXT                                                        0x8828
#define GL_DRAW_BUFFER3_NV                                                         0x8828
#define GL_DRAW_BUFFER4                                                            0x8829
#define GL_DRAW_BUFFER4_ARB                                                        0x8829
#define GL_DRAW_BUFFER4_ATI                                                        0x8829
#define GL_DRAW_BUFFER4_EXT                                                        0x8829
#define GL_DRAW_BUFFER4_NV                                                         0x8829
#define GL_DRAW_BUFFER5                                                            0x882A
#define GL_DRAW_BUFFER5_ARB                                                        0x882A
#define GL_DRAW_BUFFER5_ATI                                                        0x882A
#define GL_DRAW_BUFFER5_EXT                                                        0x882A
#define GL_DRAW_BUFFER5_NV                                                         0x882A
#define GL_DRAW_BUFFER6                                                            0x882B
#define GL_DRAW_BUFFER6_ARB                                                        0x882B
#define GL_DRAW_BUFFER6_ATI                                                        0x882B
#define GL_DRAW_BUFFER6_EXT                                                        0x882B
#define GL_DRAW_BUFFER6_NV                                                         0x882B
#define GL_DRAW_BUFFER7                                                            0x882C
#define GL_DRAW_BUFFER7_ARB                                                        0x882C
#define GL_DRAW_BUFFER7_ATI                                                        0x882C
#define GL_DRAW_BUFFER7_EXT                                                        0x882C
#define GL_DRAW_BUFFER7_NV                                                         0x882C
#define GL_DRAW_BUFFER8                                                            0x882D
#define GL_DRAW_BUFFER8_ARB                                                        0x882D
#define GL_DRAW_BUFFER8_ATI                                                        0x882D
#define GL_DRAW_BUFFER8_EXT                                                        0x882D
#define GL_DRAW_BUFFER8_NV                                                         0x882D
#define GL_DRAW_BUFFER9                                                            0x882E
#define GL_DRAW_BUFFER9_ARB                                                        0x882E
#define GL_DRAW_BUFFER9_ATI                                                        0x882E
#define GL_DRAW_BUFFER9_EXT                                                        0x882E
#define GL_DRAW_BUFFER9_NV                                                         0x882E
#define GL_DRAW_BUFFER10                                                           0x882F
#define GL_DRAW_BUFFER10_ARB                                                       0x882F
#define GL_DRAW_BUFFER10_ATI                                                       0x882F
#define GL_DRAW_BUFFER10_EXT                                                       0x882F
#define GL_DRAW_BUFFER10_NV                                                        0x882F
#define GL_DRAW_BUFFER11                                                           0x8830
#define GL_DRAW_BUFFER11_ARB                                                       0x8830
#define GL_DRAW_BUFFER11_ATI                                                       0x8830
#define GL_DRAW_BUFFER11_EXT                                                       0x8830
#define GL_DRAW_BUFFER11_NV                                                        0x8830
#define GL_DRAW_BUFFER12                                                           0x8831
#define GL_DRAW_BUFFER12_ARB                                                       0x8831
#define GL_DRAW_BUFFER12_ATI                                                       0x8831
#define GL_DRAW_BUFFER12_EXT                                                       0x8831
#define GL_DRAW_BUFFER12_NV                                                        0x8831
#define GL_DRAW_BUFFER13                                                           0x8832
#define GL_DRAW_BUFFER13_ARB                                                       0x8832
#define GL_DRAW_BUFFER13_ATI                                                       0x8832
#define GL_DRAW_BUFFER13_EXT                                                       0x8832
#define GL_DRAW_BUFFER13_NV                                                        0x8832
#define GL_DRAW_BUFFER14                                                           0x8833
#define GL_DRAW_BUFFER14_ARB                                                       0x8833
#define GL_DRAW_BUFFER14_ATI                                                       0x8833
#define GL_DRAW_BUFFER14_EXT                                                       0x8833
#define GL_DRAW_BUFFER14_NV                                                        0x8833
#define GL_DRAW_BUFFER15                                                           0x8834
#define GL_DRAW_BUFFER15_ARB                                                       0x8834
#define GL_DRAW_BUFFER15_ATI                                                       0x8834
#define GL_DRAW_BUFFER15_EXT                                                       0x8834
#define GL_DRAW_BUFFER15_NV                                                        0x8834
#define GL_COLOR_CLEAR_UNCLAMPED_VALUE_ATI                                         0x8835
#define GL_COMPRESSED_LUMINANCE_ALPHA_3DC_ATI                                      0x8837
#define GL_BLEND_EQUATION_ALPHA                                                    0x883D
#define GL_BLEND_EQUATION_ALPHA_EXT                                                0x883D
#define GL_BLEND_EQUATION_ALPHA_OES                                                0x883D
#define GL_SUBSAMPLE_DISTANCE_AMD                                                  0x883F
#define GL_MATRIX_PALETTE_ARB                                                      0x8840
#define GL_MATRIX_PALETTE_OES                                                      0x8840
#define GL_MAX_MATRIX_PALETTE_STACK_DEPTH_ARB                                      0x8841
#define GL_MAX_PALETTE_MATRICES_ARB                                                0x8842
#define GL_MAX_PALETTE_MATRICES_OES                                                0x8842
#define GL_CURRENT_PALETTE_MATRIX_ARB                                              0x8843
#define GL_CURRENT_PALETTE_MATRIX_OES                                              0x8843
#define GL_MATRIX_INDEX_ARRAY_ARB                                                  0x8844
#define GL_MATRIX_INDEX_ARRAY_OES                                                  0x8844
#define GL_CURRENT_MATRIX_INDEX_ARB                                                0x8845
#define GL_MATRIX_INDEX_ARRAY_SIZE_ARB                                             0x8846
#define GL_MATRIX_INDEX_ARRAY_SIZE_OES                                             0x8846
#define GL_MATRIX_INDEX_ARRAY_TYPE_ARB                                             0x8847
#define GL_MATRIX_INDEX_ARRAY_TYPE_OES                                             0x8847
#define GL_MATRIX_INDEX_ARRAY_STRIDE_ARB                                           0x8848
#define GL_MATRIX_INDEX_ARRAY_STRIDE_OES                                           0x8848
#define GL_MATRIX_INDEX_ARRAY_POINTER_ARB                                          0x8849
#define GL_MATRIX_INDEX_ARRAY_POINTER_OES                                          0x8849
#define GL_TEXTURE_DEPTH_SIZE                                                      0x884A
#define GL_TEXTURE_DEPTH_SIZE_ARB                                                  0x884A
#define GL_DEPTH_TEXTURE_MODE                                                      0x884B
#define GL_DEPTH_TEXTURE_MODE_ARB                                                  0x884B
#define GL_TEXTURE_COMPARE_MODE                                                    0x884C
#define GL_TEXTURE_COMPARE_MODE_ARB                                                0x884C
#define GL_TEXTURE_COMPARE_MODE_EXT                                                0x884C
#define GL_TEXTURE_COMPARE_FUNC                                                    0x884D
#define GL_TEXTURE_COMPARE_FUNC_ARB                                                0x884D
#define GL_TEXTURE_COMPARE_FUNC_EXT                                                0x884D
#define GL_COMPARE_REF_DEPTH_TO_TEXTURE_EXT                                        0x884E
#define GL_COMPARE_REF_TO_TEXTURE                                                  0x884E
#define GL_COMPARE_REF_TO_TEXTURE_EXT                                              0x884E
#define GL_COMPARE_R_TO_TEXTURE                                                    0x884E
#define GL_COMPARE_R_TO_TEXTURE_ARB                                                0x884E
#define GL_TEXTURE_CUBE_MAP_SEAMLESS                                               0x884F
#define GL_OFFSET_PROJECTIVE_TEXTURE_2D_NV                                         0x8850
#define GL_OFFSET_PROJECTIVE_TEXTURE_2D_SCALE_NV                                   0x8851
#define GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_NV                                  0x8852
#define GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_SCALE_NV                            0x8853
#define GL_OFFSET_HILO_TEXTURE_2D_NV                                               0x8854
#define GL_OFFSET_HILO_TEXTURE_RECTANGLE_NV                                        0x8855
#define GL_OFFSET_HILO_PROJECTIVE_TEXTURE_2D_NV                                    0x8856
#define GL_OFFSET_HILO_PROJECTIVE_TEXTURE_RECTANGLE_NV                             0x8857
#define GL_DEPENDENT_HILO_TEXTURE_2D_NV                                            0x8858
#define GL_DEPENDENT_RGB_TEXTURE_3D_NV                                             0x8859
#define GL_DEPENDENT_RGB_TEXTURE_CUBE_MAP_NV                                       0x885A
#define GL_DOT_PRODUCT_PASS_THROUGH_NV                                             0x885B
#define GL_DOT_PRODUCT_TEXTURE_1D_NV                                               0x885C
#define GL_DOT_PRODUCT_AFFINE_DEPTH_REPLACE_NV                                     0x885D
#define GL_HILO8_NV                                                                0x885E
#define GL_SIGNED_HILO8_NV                                                         0x885F
#define GL_FORCE_BLUE_TO_ONE_NV                                                    0x8860
#define GL_POINT_SPRITE                                                            0x8861
#define GL_POINT_SPRITE_ARB                                                        0x8861
#define GL_POINT_SPRITE_NV                                                         0x8861
#define GL_POINT_SPRITE_OES                                                        0x8861
#define GL_COORD_REPLACE                                                           0x8862
#define GL_COORD_REPLACE_ARB                                                       0x8862
#define GL_COORD_REPLACE_NV                                                        0x8862
#define GL_COORD_REPLACE_OES                                                       0x8862
#define GL_POINT_SPRITE_R_MODE_NV                                                  0x8863
#define GL_PIXEL_COUNTER_BITS_NV                                                   0x8864
#define GL_QUERY_COUNTER_BITS                                                      0x8864
#define GL_QUERY_COUNTER_BITS_ARB                                                  0x8864
#define GL_QUERY_COUNTER_BITS_EXT                                                  0x8864
#define GL_CURRENT_OCCLUSION_QUERY_ID_NV                                           0x8865
#define GL_CURRENT_QUERY                                                           0x8865
#define GL_CURRENT_QUERY_ARB                                                       0x8865
#define GL_CURRENT_QUERY_EXT                                                       0x8865
#define GL_PIXEL_COUNT_NV                                                          0x8866
#define GL_QUERY_RESULT                                                            0x8866
#define GL_QUERY_RESULT_ARB                                                        0x8866
#define GL_QUERY_RESULT_EXT                                                        0x8866
#define GL_PIXEL_COUNT_AVAILABLE_NV                                                0x8867
#define GL_QUERY_RESULT_AVAILABLE                                                  0x8867
#define GL_QUERY_RESULT_AVAILABLE_ARB                                              0x8867
#define GL_QUERY_RESULT_AVAILABLE_EXT                                              0x8867
#define GL_MAX_FRAGMENT_PROGRAM_LOCAL_PARAMETERS_NV                                0x8868
#define GL_MAX_VERTEX_ATTRIBS                                                      0x8869
#define GL_MAX_VERTEX_ATTRIBS_ARB                                                  0x8869
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED                                          0x886A
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED_ARB                                      0x886A
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS                                       0x886C
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT                                   0x886C
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_OES                                   0x886C
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS                                    0x886D
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT                                0x886D
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_OES                                0x886D
#define GL_DEPTH_STENCIL_TO_RGBA_NV                                                0x886E
#define GL_DEPTH_STENCIL_TO_BGRA_NV                                                0x886F
#define GL_FRAGMENT_PROGRAM_NV                                                     0x8870
#define GL_MAX_TEXTURE_COORDS                                                      0x8871
#define GL_MAX_TEXTURE_COORDS_ARB                                                  0x8871
#define GL_MAX_TEXTURE_COORDS_NV                                                   0x8871
#define GL_MAX_TEXTURE_IMAGE_UNITS                                                 0x8872
#define GL_MAX_TEXTURE_IMAGE_UNITS_ARB                                             0x8872
#define GL_MAX_TEXTURE_IMAGE_UNITS_NV                                              0x8872
#define GL_FRAGMENT_PROGRAM_BINDING_NV                                             0x8873
#define GL_PROGRAM_ERROR_STRING_ARB                                                0x8874
#define GL_PROGRAM_ERROR_STRING_NV                                                 0x8874
#define GL_PROGRAM_FORMAT_ASCII_ARB                                                0x8875
#define GL_PROGRAM_FORMAT_ARB                                                      0x8876
#define GL_WRITE_PIXEL_DATA_RANGE_NV                                               0x8878
#define GL_READ_PIXEL_DATA_RANGE_NV                                                0x8879
#define GL_WRITE_PIXEL_DATA_RANGE_LENGTH_NV                                        0x887A
#define GL_READ_PIXEL_DATA_RANGE_LENGTH_NV                                         0x887B
#define GL_WRITE_PIXEL_DATA_RANGE_POINTER_NV                                       0x887C
#define GL_READ_PIXEL_DATA_RANGE_POINTER_NV                                        0x887D
#define GL_GEOMETRY_SHADER_INVOCATIONS                                             0x887F
#define GL_GEOMETRY_SHADER_INVOCATIONS_EXT                                         0x887F
#define GL_GEOMETRY_SHADER_INVOCATIONS_OES                                         0x887F
#define GL_FLOAT_R_NV                                                              0x8880
#define GL_FLOAT_RG_NV                                                             0x8881
#define GL_FLOAT_RGB_NV                                                            0x8882
#define GL_FLOAT_RGBA_NV                                                           0x8883
#define GL_FLOAT_R16_NV                                                            0x8884
#define GL_FLOAT_R32_NV                                                            0x8885
#define GL_FLOAT_RG16_NV                                                           0x8886
#define GL_FLOAT_RG32_NV                                                           0x8887
#define GL_FLOAT_RGB16_NV                                                          0x8888
#define GL_FLOAT_RGB32_NV                                                          0x8889
#define GL_FLOAT_RGBA16_NV                                                         0x888A
#define GL_FLOAT_RGBA32_NV                                                         0x888B
#define GL_TEXTURE_FLOAT_COMPONENTS_NV                                             0x888C
#define GL_FLOAT_CLEAR_COLOR_VALUE_NV                                              0x888D
#define GL_FLOAT_RGBA_MODE_NV                                                      0x888E
#define GL_TEXTURE_UNSIGNED_REMAP_MODE_NV                                          0x888F
#define GL_DEPTH_BOUNDS_TEST_EXT                                                   0x8890
#define GL_DEPTH_BOUNDS_EXT                                                        0x8891
#define GL_ARRAY_BUFFER                                                            0x8892
#define GL_ARRAY_BUFFER_ARB                                                        0x8892
#define GL_ELEMENT_ARRAY_BUFFER                                                    0x8893
#define GL_ELEMENT_ARRAY_BUFFER_ARB                                                0x8893
#define GL_ARRAY_BUFFER_BINDING                                                    0x8894
#define GL_ARRAY_BUFFER_BINDING_ARB                                                0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING                                            0x8895
#define GL_ELEMENT_ARRAY_BUFFER_BINDING_ARB                                        0x8895
#define GL_VERTEX_ARRAY_BUFFER_BINDING                                             0x8896
#define GL_VERTEX_ARRAY_BUFFER_BINDING_ARB                                         0x8896
#define GL_NORMAL_ARRAY_BUFFER_BINDING                                             0x8897
#define GL_NORMAL_ARRAY_BUFFER_BINDING_ARB                                         0x8897
#define GL_COLOR_ARRAY_BUFFER_BINDING                                              0x8898
#define GL_COLOR_ARRAY_BUFFER_BINDING_ARB                                          0x8898
#define GL_INDEX_ARRAY_BUFFER_BINDING                                              0x8899
#define GL_INDEX_ARRAY_BUFFER_BINDING_ARB                                          0x8899
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING                                      0x889A
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING_ARB                                  0x889A
#define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING                                          0x889B
#define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING_ARB                                      0x889B
#define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING                                    0x889C
#define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING_ARB                                0x889C
#define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING                                     0x889D
#define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING_ARB                                 0x889D
#define GL_FOG_COORD_ARRAY_BUFFER_BINDING                                          0x889D
#define GL_WEIGHT_ARRAY_BUFFER_BINDING                                             0x889E
#define GL_WEIGHT_ARRAY_BUFFER_BINDING_ARB                                         0x889E
#define GL_WEIGHT_ARRAY_BUFFER_BINDING_OES                                         0x889E
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING                                      0x889F
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB                                  0x889F
#define GL_PROGRAM_INSTRUCTIONS_ARB                                                0x88A0
#define GL_MAX_PROGRAM_INSTRUCTIONS_ARB                                            0x88A1
#define GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB                                         0x88A2
#define GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB                                     0x88A3
#define GL_PROGRAM_TEMPORARIES_ARB                                                 0x88A4
#define GL_MAX_PROGRAM_TEMPORARIES_ARB                                             0x88A5
#define GL_PROGRAM_NATIVE_TEMPORARIES_ARB                                          0x88A6
#define GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB                                      0x88A7
#define GL_PROGRAM_PARAMETERS_ARB                                                  0x88A8
#define GL_MAX_PROGRAM_PARAMETERS_ARB                                              0x88A9
#define GL_PROGRAM_NATIVE_PARAMETERS_ARB                                           0x88AA
#define GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB                                       0x88AB
#define GL_PROGRAM_ATTRIBS_ARB                                                     0x88AC
#define GL_MAX_PROGRAM_ATTRIBS_ARB                                                 0x88AD
#define GL_PROGRAM_NATIVE_ATTRIBS_ARB                                              0x88AE
#define GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB                                          0x88AF
#define GL_PROGRAM_ADDRESS_REGISTERS_ARB                                           0x88B0
#define GL_MAX_PROGRAM_ADDRESS_REGISTERS_ARB                                       0x88B1
#define GL_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB                                    0x88B2
#define GL_MAX_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB                                0x88B3
#define GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB                                        0x88B4
#define GL_MAX_PROGRAM_ENV_PARAMETERS_ARB                                          0x88B5
#define GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB                                         0x88B6
#define GL_TRANSPOSE_CURRENT_MATRIX_ARB                                            0x88B7
#define GL_READ_ONLY                                                               0x88B8
#define GL_READ_ONLY_ARB                                                           0x88B8
#define GL_WRITE_ONLY                                                              0x88B9
#define GL_WRITE_ONLY_ARB                                                          0x88B9
#define GL_WRITE_ONLY_OES                                                          0x88B9
#define GL_READ_WRITE                                                              0x88BA
#define GL_READ_WRITE_ARB                                                          0x88BA
#define GL_BUFFER_ACCESS                                                           0x88BB
#define GL_BUFFER_ACCESS_ARB                                                       0x88BB
#define GL_BUFFER_ACCESS_OES                                                       0x88BB
#define GL_BUFFER_MAPPED                                                           0x88BC
#define GL_BUFFER_MAPPED_ARB                                                       0x88BC
#define GL_BUFFER_MAPPED_OES                                                       0x88BC
#define GL_BUFFER_MAP_POINTER                                                      0x88BD
#define GL_BUFFER_MAP_POINTER_ARB                                                  0x88BD
#define GL_BUFFER_MAP_POINTER_OES                                                  0x88BD
#define GL_WRITE_DISCARD_NV                                                        0x88BE
#define GL_TIME_ELAPSED                                                            0x88BF
#define GL_TIME_ELAPSED_EXT                                                        0x88BF
#define GL_MATRIX0_ARB                                                             0x88C0
#define GL_MATRIX1_ARB                                                             0x88C1
#define GL_MATRIX2_ARB                                                             0x88C2
#define GL_MATRIX3_ARB                                                             0x88C3
#define GL_MATRIX4_ARB                                                             0x88C4
#define GL_MATRIX5_ARB                                                             0x88C5
#define GL_MATRIX6_ARB                                                             0x88C6
#define GL_MATRIX7_ARB                                                             0x88C7
#define GL_MATRIX8_ARB                                                             0x88C8
#define GL_MATRIX9_ARB                                                             0x88C9
#define GL_MATRIX10_ARB                                                            0x88CA
#define GL_MATRIX11_ARB                                                            0x88CB
#define GL_MATRIX12_ARB                                                            0x88CC
#define GL_MATRIX13_ARB                                                            0x88CD
#define GL_MATRIX14_ARB                                                            0x88CE
#define GL_MATRIX15_ARB                                                            0x88CF
#define GL_MATRIX16_ARB                                                            0x88D0
#define GL_MATRIX17_ARB                                                            0x88D1
#define GL_MATRIX18_ARB                                                            0x88D2
#define GL_MATRIX19_ARB                                                            0x88D3
#define GL_MATRIX20_ARB                                                            0x88D4
#define GL_MATRIX21_ARB                                                            0x88D5
#define GL_MATRIX22_ARB                                                            0x88D6
#define GL_MATRIX23_ARB                                                            0x88D7
#define GL_MATRIX24_ARB                                                            0x88D8
#define GL_MATRIX25_ARB                                                            0x88D9
#define GL_MATRIX26_ARB                                                            0x88DA
#define GL_MATRIX27_ARB                                                            0x88DB
#define GL_MATRIX28_ARB                                                            0x88DC
#define GL_MATRIX29_ARB                                                            0x88DD
#define GL_MATRIX30_ARB                                                            0x88DE
#define GL_MATRIX31_ARB                                                            0x88DF
#define GL_STREAM_DRAW                                                             0x88E0
#define GL_STREAM_DRAW_ARB                                                         0x88E0
#define GL_STREAM_READ                                                             0x88E1
#define GL_STREAM_READ_ARB                                                         0x88E1
#define GL_STREAM_COPY                                                             0x88E2
#define GL_STREAM_COPY_ARB                                                         0x88E2
#define GL_STATIC_DRAW                                                             0x88E4
#define GL_STATIC_DRAW_ARB                                                         0x88E4
#define GL_STATIC_READ                                                             0x88E5
#define GL_STATIC_READ_ARB                                                         0x88E5
#define GL_STATIC_COPY                                                             0x88E6
#define GL_STATIC_COPY_ARB                                                         0x88E6
#define GL_DYNAMIC_DRAW                                                            0x88E8
#define GL_DYNAMIC_DRAW_ARB                                                        0x88E8
#define GL_DYNAMIC_READ                                                            0x88E9
#define GL_DYNAMIC_READ_ARB                                                        0x88E9
#define GL_DYNAMIC_COPY                                                            0x88EA
#define GL_DYNAMIC_COPY_ARB                                                        0x88EA
#define GL_PIXEL_PACK_BUFFER                                                       0x88EB
#define GL_PIXEL_PACK_BUFFER_ARB                                                   0x88EB
#define GL_PIXEL_PACK_BUFFER_EXT                                                   0x88EB
#define GL_PIXEL_PACK_BUFFER_NV                                                    0x88EB
#define GL_PIXEL_UNPACK_BUFFER                                                     0x88EC
#define GL_PIXEL_UNPACK_BUFFER_ARB                                                 0x88EC
#define GL_PIXEL_UNPACK_BUFFER_EXT                                                 0x88EC
#define GL_PIXEL_UNPACK_BUFFER_NV                                                  0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING                                               0x88ED
#define GL_PIXEL_PACK_BUFFER_BINDING_ARB                                           0x88ED
#define GL_PIXEL_PACK_BUFFER_BINDING_EXT                                           0x88ED
#define GL_PIXEL_PACK_BUFFER_BINDING_NV                                            0x88ED
#define GL_ETC1_SRGB8_NV                                                           0x88EE
#define GL_PIXEL_UNPACK_BUFFER_BINDING                                             0x88EF
#define GL_PIXEL_UNPACK_BUFFER_BINDING_ARB                                         0x88EF
#define GL_PIXEL_UNPACK_BUFFER_BINDING_EXT                                         0x88EF
#define GL_PIXEL_UNPACK_BUFFER_BINDING_NV                                          0x88EF
#define GL_DEPTH24_STENCIL8                                                        0x88F0
#define GL_DEPTH24_STENCIL8_EXT                                                    0x88F0
#define GL_DEPTH24_STENCIL8_OES                                                    0x88F0
#define GL_TEXTURE_STENCIL_SIZE                                                    0x88F1
#define GL_TEXTURE_STENCIL_SIZE_EXT                                                0x88F1
#define GL_STENCIL_TAG_BITS_EXT                                                    0x88F2
#define GL_STENCIL_CLEAR_TAG_VALUE_EXT                                             0x88F3
#define GL_MAX_PROGRAM_EXEC_INSTRUCTIONS_NV                                        0x88F4
#define GL_MAX_PROGRAM_CALL_DEPTH_NV                                               0x88F5
#define GL_MAX_PROGRAM_IF_DEPTH_NV                                                 0x88F6
#define GL_MAX_PROGRAM_LOOP_DEPTH_NV                                               0x88F7
#define GL_MAX_PROGRAM_LOOP_COUNT_NV                                               0x88F8
#define GL_SRC1_COLOR                                                              0x88F9
#define GL_SRC1_COLOR_EXT                                                          0x88F9
#define GL_ONE_MINUS_SRC1_COLOR                                                    0x88FA
#define GL_ONE_MINUS_SRC1_COLOR_EXT                                                0x88FA
#define GL_ONE_MINUS_SRC1_ALPHA                                                    0x88FB
#define GL_ONE_MINUS_SRC1_ALPHA_EXT                                                0x88FB
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS                                            0x88FC
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS_EXT                                        0x88FC
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER                                             0x88FD
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER_EXT                                         0x88FD
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER_NV                                          0x88FD
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR                                             0x88FE
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE                                       0x88FE
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ARB                                         0x88FE
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT                                         0x88FE
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV                                          0x88FE
#define GL_MAX_ARRAY_TEXTURE_LAYERS                                                0x88FF
#define GL_MAX_ARRAY_TEXTURE_LAYERS_EXT                                            0x88FF
#define GL_MIN_PROGRAM_TEXEL_OFFSET                                                0x8904
#define GL_MIN_PROGRAM_TEXEL_OFFSET_EXT                                            0x8904
#define GL_MIN_PROGRAM_TEXEL_OFFSET_NV                                             0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET                                                0x8905
#define GL_MAX_PROGRAM_TEXEL_OFFSET_EXT                                            0x8905
#define GL_MAX_PROGRAM_TEXEL_OFFSET_NV                                             0x8905
#define GL_PROGRAM_ATTRIB_COMPONENTS_NV                                            0x8906
#define GL_PROGRAM_RESULT_COMPONENTS_NV                                            0x8907
#define GL_MAX_PROGRAM_ATTRIB_COMPONENTS_NV                                        0x8908
#define GL_MAX_PROGRAM_RESULT_COMPONENTS_NV                                        0x8909
#define GL_STENCIL_TEST_TWO_SIDE_EXT                                               0x8910
#define GL_ACTIVE_STENCIL_FACE_EXT                                                 0x8911
#define GL_MIRROR_CLAMP_TO_BORDER_EXT                                              0x8912
#define GL_SAMPLES_PASSED                                                          0x8914
#define GL_SAMPLES_PASSED_ARB                                                      0x8914
#define GL_GEOMETRY_LINKED_VERTICES_OUT_EXT                                        0x8916
#define GL_GEOMETRY_LINKED_VERTICES_OUT_OES                                        0x8916
#define GL_GEOMETRY_VERTICES_OUT                                                   0x8916
#define GL_GEOMETRY_INPUT_TYPE                                                     0x8917
#define GL_GEOMETRY_LINKED_INPUT_TYPE_EXT                                          0x8917
#define GL_GEOMETRY_LINKED_INPUT_TYPE_OES                                          0x8917
#define GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT                                         0x8918
#define GL_GEOMETRY_LINKED_OUTPUT_TYPE_OES                                         0x8918
#define GL_GEOMETRY_OUTPUT_TYPE                                                    0x8918
#define GL_SAMPLER_BINDING                                                         0x8919
#define GL_CLAMP_VERTEX_COLOR                                                      0x891A
#define GL_CLAMP_VERTEX_COLOR_ARB                                                  0x891A
#define GL_CLAMP_FRAGMENT_COLOR                                                    0x891B
#define GL_CLAMP_FRAGMENT_COLOR_ARB                                                0x891B
#define GL_CLAMP_READ_COLOR                                                        0x891C
#define GL_CLAMP_READ_COLOR_ARB                                                    0x891C
#define GL_FIXED_ONLY                                                              0x891D
#define GL_FIXED_ONLY_ARB                                                          0x891D
#define GL_TESS_CONTROL_PROGRAM_NV                                                 0x891E
#define GL_TESS_EVALUATION_PROGRAM_NV                                              0x891F
#define GL_FRAGMENT_SHADER_ATI                                                     0x8920
#define GL_REG_0_ATI                                                               0x8921
#define GL_REG_1_ATI                                                               0x8922
#define GL_REG_2_ATI                                                               0x8923
#define GL_REG_3_ATI                                                               0x8924
#define GL_REG_4_ATI                                                               0x8925
#define GL_REG_5_ATI                                                               0x8926
#define GL_REG_6_ATI                                                               0x8927
#define GL_REG_7_ATI                                                               0x8928
#define GL_REG_8_ATI                                                               0x8929
#define GL_REG_9_ATI                                                               0x892A
#define GL_REG_10_ATI                                                              0x892B
#define GL_REG_11_ATI                                                              0x892C
#define GL_REG_12_ATI                                                              0x892D
#define GL_REG_13_ATI                                                              0x892E
#define GL_REG_14_ATI                                                              0x892F
#define GL_REG_15_ATI                                                              0x8930
#define GL_REG_16_ATI                                                              0x8931
#define GL_REG_17_ATI                                                              0x8932
#define GL_REG_18_ATI                                                              0x8933
#define GL_REG_19_ATI                                                              0x8934
#define GL_REG_20_ATI                                                              0x8935
#define GL_REG_21_ATI                                                              0x8936
#define GL_REG_22_ATI                                                              0x8937
#define GL_REG_23_ATI                                                              0x8938
#define GL_REG_24_ATI                                                              0x8939
#define GL_REG_25_ATI                                                              0x893A
#define GL_REG_26_ATI                                                              0x893B
#define GL_REG_27_ATI                                                              0x893C
#define GL_REG_28_ATI                                                              0x893D
#define GL_REG_29_ATI                                                              0x893E
#define GL_REG_30_ATI                                                              0x893F
#define GL_REG_31_ATI                                                              0x8940
#define GL_CON_0_ATI                                                               0x8941
#define GL_CON_1_ATI                                                               0x8942
#define GL_CON_2_ATI                                                               0x8943
#define GL_CON_3_ATI                                                               0x8944
#define GL_CON_4_ATI                                                               0x8945
#define GL_CON_5_ATI                                                               0x8946
#define GL_CON_6_ATI                                                               0x8947
#define GL_CON_7_ATI                                                               0x8948
#define GL_CON_8_ATI                                                               0x8949
#define GL_CON_9_ATI                                                               0x894A
#define GL_CON_10_ATI                                                              0x894B
#define GL_CON_11_ATI                                                              0x894C
#define GL_CON_12_ATI                                                              0x894D
#define GL_CON_13_ATI                                                              0x894E
#define GL_CON_14_ATI                                                              0x894F
#define GL_CON_15_ATI                                                              0x8950
#define GL_CON_16_ATI                                                              0x8951
#define GL_CON_17_ATI                                                              0x8952
#define GL_CON_18_ATI                                                              0x8953
#define GL_CON_19_ATI                                                              0x8954
#define GL_CON_20_ATI                                                              0x8955
#define GL_CON_21_ATI                                                              0x8956
#define GL_CON_22_ATI                                                              0x8957
#define GL_CON_23_ATI                                                              0x8958
#define GL_CON_24_ATI                                                              0x8959
#define GL_CON_25_ATI                                                              0x895A
#define GL_CON_26_ATI                                                              0x895B
#define GL_CON_27_ATI                                                              0x895C
#define GL_CON_28_ATI                                                              0x895D
#define GL_CON_29_ATI                                                              0x895E
#define GL_CON_30_ATI                                                              0x895F
#define GL_CON_31_ATI                                                              0x8960
#define GL_MOV_ATI                                                                 0x8961
#define GL_ADD_ATI                                                                 0x8963
#define GL_MUL_ATI                                                                 0x8964
#define GL_SUB_ATI                                                                 0x8965
#define GL_DOT3_ATI                                                                0x8966
#define GL_DOT4_ATI                                                                0x8967
#define GL_MAD_ATI                                                                 0x8968
#define GL_LERP_ATI                                                                0x8969
#define GL_CND_ATI                                                                 0x896A
#define GL_CND0_ATI                                                                0x896B
#define GL_DOT2_ADD_ATI                                                            0x896C
#define GL_SECONDARY_INTERPOLATOR_ATI                                              0x896D
#define GL_NUM_FRAGMENT_REGISTERS_ATI                                              0x896E
#define GL_NUM_FRAGMENT_CONSTANTS_ATI                                              0x896F
#define GL_NUM_PASSES_ATI                                                          0x8970
#define GL_NUM_INSTRUCTIONS_PER_PASS_ATI                                           0x8971
#define GL_NUM_INSTRUCTIONS_TOTAL_ATI                                              0x8972
#define GL_NUM_INPUT_INTERPOLATOR_COMPONENTS_ATI                                   0x8973
#define GL_NUM_LOOPBACK_COMPONENTS_ATI                                             0x8974
#define GL_COLOR_ALPHA_PAIRING_ATI                                                 0x8975
#define GL_SWIZZLE_STR_ATI                                                         0x8976
#define GL_SWIZZLE_STQ_ATI                                                         0x8977
#define GL_SWIZZLE_STR_DR_ATI                                                      0x8978
#define GL_SWIZZLE_STQ_DQ_ATI                                                      0x8979
#define GL_SWIZZLE_STRQ_ATI                                                        0x897A
#define GL_SWIZZLE_STRQ_DQ_ATI                                                     0x897B
#define GL_INTERLACE_OML                                                           0x8980
#define GL_INTERLACE_READ_OML                                                      0x8981
#define GL_FORMAT_SUBSAMPLE_24_24_OML                                              0x8982
#define GL_FORMAT_SUBSAMPLE_244_244_OML                                            0x8983
#define GL_PACK_RESAMPLE_OML                                                       0x8984
#define GL_UNPACK_RESAMPLE_OML                                                     0x8985
#define GL_RESAMPLE_REPLICATE_OML                                                  0x8986
#define GL_RESAMPLE_ZERO_FILL_OML                                                  0x8987
#define GL_RESAMPLE_AVERAGE_OML                                                    0x8988
#define GL_RESAMPLE_DECIMATE_OML                                                   0x8989
#define GL_POINT_SIZE_ARRAY_TYPE_OES                                               0x898A
#define GL_POINT_SIZE_ARRAY_STRIDE_OES                                             0x898B
#define GL_POINT_SIZE_ARRAY_POINTER_OES                                            0x898C
#define GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES                                  0x898D
#define GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES                                 0x898E
#define GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES                                    0x898F
#define GL_VERTEX_ATTRIB_MAP1_APPLE                                                0x8A00
#define GL_VERTEX_ATTRIB_MAP2_APPLE                                                0x8A01
#define GL_VERTEX_ATTRIB_MAP1_SIZE_APPLE                                           0x8A02
#define GL_VERTEX_ATTRIB_MAP1_COEFF_APPLE                                          0x8A03
#define GL_VERTEX_ATTRIB_MAP1_ORDER_APPLE                                          0x8A04
#define GL_VERTEX_ATTRIB_MAP1_DOMAIN_APPLE                                         0x8A05
#define GL_VERTEX_ATTRIB_MAP2_SIZE_APPLE                                           0x8A06
#define GL_VERTEX_ATTRIB_MAP2_COEFF_APPLE                                          0x8A07
#define GL_VERTEX_ATTRIB_MAP2_ORDER_APPLE                                          0x8A08
#define GL_VERTEX_ATTRIB_MAP2_DOMAIN_APPLE                                         0x8A09
#define GL_DRAW_PIXELS_APPLE                                                       0x8A0A
#define GL_FENCE_APPLE                                                             0x8A0B
#define GL_ELEMENT_ARRAY_APPLE                                                     0x8A0C
#define GL_ELEMENT_ARRAY_TYPE_APPLE                                                0x8A0D
#define GL_ELEMENT_ARRAY_POINTER_APPLE                                             0x8A0E
#define GL_COLOR_FLOAT_APPLE                                                       0x8A0F
#define GL_UNIFORM_BUFFER                                                          0x8A11
#define GL_BUFFER_SERIALIZED_MODIFY_APPLE                                          0x8A12
#define GL_BUFFER_FLUSHING_UNMAP_APPLE                                             0x8A13
#define GL_AUX_DEPTH_STENCIL_APPLE                                                 0x8A14
#define GL_PACK_ROW_BYTES_APPLE                                                    0x8A15
#define GL_UNPACK_ROW_BYTES_APPLE                                                  0x8A16
#define GL_RELEASED_APPLE                                                          0x8A19
#define GL_VOLATILE_APPLE                                                          0x8A1A
#define GL_RETAINED_APPLE                                                          0x8A1B
#define GL_UNDEFINED_APPLE                                                         0x8A1C
#define GL_PURGEABLE_APPLE                                                         0x8A1D
#define GL_RGB_422_APPLE                                                           0x8A1F
#define GL_UNIFORM_BUFFER_BINDING                                                  0x8A28
#define GL_UNIFORM_BUFFER_START                                                    0x8A29
#define GL_UNIFORM_BUFFER_SIZE                                                     0x8A2A
#define GL_MAX_VERTEX_UNIFORM_BLOCKS                                               0x8A2B
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS                                             0x8A2C
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT                                         0x8A2C
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS_OES                                         0x8A2C
#define GL_MAX_FRAGMENT_UNIFORM_BLOCKS                                             0x8A2D
#define GL_MAX_COMBINED_UNIFORM_BLOCKS                                             0x8A2E
#define GL_MAX_UNIFORM_BUFFER_BINDINGS                                             0x8A2F
#define GL_MAX_UNIFORM_BLOCK_SIZE                                                  0x8A30
#define GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS                                  0x8A31
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS                                0x8A32
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT                            0x8A32
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_OES                            0x8A32
#define GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS                                0x8A33
#define GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT                                         0x8A34
#define GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH                                    0x8A35
#define GL_ACTIVE_UNIFORM_BLOCKS                                                   0x8A36
#define GL_UNIFORM_TYPE                                                            0x8A37
#define GL_UNIFORM_SIZE                                                            0x8A38
#define GL_UNIFORM_NAME_LENGTH                                                     0x8A39
#define GL_UNIFORM_BLOCK_INDEX                                                     0x8A3A
#define GL_UNIFORM_OFFSET                                                          0x8A3B
#define GL_UNIFORM_ARRAY_STRIDE                                                    0x8A3C
#define GL_UNIFORM_MATRIX_STRIDE                                                   0x8A3D
#define GL_UNIFORM_IS_ROW_MAJOR                                                    0x8A3E
#define GL_UNIFORM_BLOCK_BINDING                                                   0x8A3F
#define GL_UNIFORM_BLOCK_DATA_SIZE                                                 0x8A40
#define GL_UNIFORM_BLOCK_NAME_LENGTH                                               0x8A41
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS                                           0x8A42
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES                                    0x8A43
#define GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER                               0x8A44
#define GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER                             0x8A45
#define GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER                             0x8A46
#define GL_TEXTURE_SRGB_DECODE_EXT                                                 0x8A48
#define GL_DECODE_EXT                                                              0x8A49
#define GL_SKIP_DECODE_EXT                                                         0x8A4A
#define GL_PROGRAM_PIPELINE_OBJECT_EXT                                             0x8A4F
#define GL_RGB_RAW_422_APPLE                                                       0x8A51
#define GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT                                    0x8A52
#define GL_SYNC_OBJECT_APPLE                                                       0x8A53
#define GL_COMPRESSED_SRGB_PVRTC_2BPPV1_EXT                                        0x8A54
#define GL_COMPRESSED_SRGB_PVRTC_4BPPV1_EXT                                        0x8A55
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV1_EXT                                  0x8A56
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV1_EXT                                  0x8A57
#define GL_FRAGMENT_SHADER                                                         0x8B30
#define GL_FRAGMENT_SHADER_ARB                                                     0x8B30
#define GL_VERTEX_SHADER                                                           0x8B31
#define GL_VERTEX_SHADER_ARB                                                       0x8B31
#define GL_PROGRAM_OBJECT_ARB                                                      0x8B40
#define GL_PROGRAM_OBJECT_EXT                                                      0x8B40
#define GL_SHADER_OBJECT_ARB                                                       0x8B48
#define GL_SHADER_OBJECT_EXT                                                       0x8B48
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS                                         0x8B49
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS_ARB                                     0x8B49
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS                                           0x8B4A
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS_ARB                                       0x8B4A
#define GL_MAX_VARYING_COMPONENTS                                                  0x8B4B
#define GL_MAX_VARYING_COMPONENTS_EXT                                              0x8B4B
#define GL_MAX_VARYING_FLOATS                                                      0x8B4B
#define GL_MAX_VARYING_FLOATS_ARB                                                  0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS                                          0x8B4C
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB                                      0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS                                        0x8B4D
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS_ARB                                    0x8B4D
#define GL_OBJECT_TYPE_ARB                                                         0x8B4E
#define GL_OBJECT_SUBTYPE_ARB                                                      0x8B4F
#define GL_SHADER_TYPE                                                             0x8B4F
#define GL_FLOAT_VEC2                                                              0x8B50
#define GL_FLOAT_VEC2_ARB                                                          0x8B50
#define GL_FLOAT_VEC3                                                              0x8B51
#define GL_FLOAT_VEC3_ARB                                                          0x8B51
#define GL_FLOAT_VEC4                                                              0x8B52
#define GL_FLOAT_VEC4_ARB                                                          0x8B52
#define GL_INT_VEC2                                                                0x8B53
#define GL_INT_VEC2_ARB                                                            0x8B53
#define GL_INT_VEC3                                                                0x8B54
#define GL_INT_VEC3_ARB                                                            0x8B54
#define GL_INT_VEC4                                                                0x8B55
#define GL_INT_VEC4_ARB                                                            0x8B55
#define GL_BOOL                                                                    0x8B56
#define GL_BOOL_ARB                                                                0x8B56
#define GL_BOOL_VEC2                                                               0x8B57
#define GL_BOOL_VEC2_ARB                                                           0x8B57
#define GL_BOOL_VEC3                                                               0x8B58
#define GL_BOOL_VEC3_ARB                                                           0x8B58
#define GL_BOOL_VEC4                                                               0x8B59
#define GL_BOOL_VEC4_ARB                                                           0x8B59
#define GL_FLOAT_MAT2                                                              0x8B5A
#define GL_FLOAT_MAT2_ARB                                                          0x8B5A
#define GL_FLOAT_MAT3                                                              0x8B5B
#define GL_FLOAT_MAT3_ARB                                                          0x8B5B
#define GL_FLOAT_MAT4                                                              0x8B5C
#define GL_FLOAT_MAT4_ARB                                                          0x8B5C
#define GL_SAMPLER_1D                                                              0x8B5D
#define GL_SAMPLER_1D_ARB                                                          0x8B5D
#define GL_SAMPLER_2D                                                              0x8B5E
#define GL_SAMPLER_2D_ARB                                                          0x8B5E
#define GL_SAMPLER_3D                                                              0x8B5F
#define GL_SAMPLER_3D_ARB                                                          0x8B5F
#define GL_SAMPLER_3D_OES                                                          0x8B5F
#define GL_SAMPLER_CUBE                                                            0x8B60
#define GL_SAMPLER_CUBE_ARB                                                        0x8B60
#define GL_SAMPLER_1D_SHADOW                                                       0x8B61
#define GL_SAMPLER_1D_SHADOW_ARB                                                   0x8B61
#define GL_SAMPLER_2D_SHADOW                                                       0x8B62
#define GL_SAMPLER_2D_SHADOW_ARB                                                   0x8B62
#define GL_SAMPLER_2D_SHADOW_EXT                                                   0x8B62
#define GL_SAMPLER_2D_RECT                                                         0x8B63
#define GL_SAMPLER_2D_RECT_ARB                                                     0x8B63
#define GL_SAMPLER_2D_RECT_SHADOW                                                  0x8B64
#define GL_SAMPLER_2D_RECT_SHADOW_ARB                                              0x8B64
#define GL_FLOAT_MAT2x3                                                            0x8B65
#define GL_FLOAT_MAT2x3_NV                                                         0x8B65
#define GL_FLOAT_MAT2x4                                                            0x8B66
#define GL_FLOAT_MAT2x4_NV                                                         0x8B66
#define GL_FLOAT_MAT3x2                                                            0x8B67
#define GL_FLOAT_MAT3x2_NV                                                         0x8B67
#define GL_FLOAT_MAT3x4                                                            0x8B68
#define GL_FLOAT_MAT3x4_NV                                                         0x8B68
#define GL_FLOAT_MAT4x2                                                            0x8B69
#define GL_FLOAT_MAT4x2_NV                                                         0x8B69
#define GL_FLOAT_MAT4x3                                                            0x8B6A
#define GL_FLOAT_MAT4x3_NV                                                         0x8B6A
#define GL_DELETE_STATUS                                                           0x8B80
#define GL_OBJECT_DELETE_STATUS_ARB                                                0x8B80
#define GL_COMPILE_STATUS                                                          0x8B81
#define GL_OBJECT_COMPILE_STATUS_ARB                                               0x8B81
#define GL_LINK_STATUS                                                             0x8B82
#define GL_OBJECT_LINK_STATUS_ARB                                                  0x8B82
#define GL_OBJECT_VALIDATE_STATUS_ARB                                              0x8B83
#define GL_VALIDATE_STATUS                                                         0x8B83
#define GL_INFO_LOG_LENGTH                                                         0x8B84
#define GL_OBJECT_INFO_LOG_LENGTH_ARB                                              0x8B84
#define GL_ATTACHED_SHADERS                                                        0x8B85
#define GL_OBJECT_ATTACHED_OBJECTS_ARB                                             0x8B85
#define GL_ACTIVE_UNIFORMS                                                         0x8B86
#define GL_OBJECT_ACTIVE_UNIFORMS_ARB                                              0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH                                               0x8B87
#define GL_OBJECT_ACTIVE_UNIFORM_MAX_LENGTH_ARB                                    0x8B87
#define GL_OBJECT_SHADER_SOURCE_LENGTH_ARB                                         0x8B88
#define GL_SHADER_SOURCE_LENGTH                                                    0x8B88
#define GL_ACTIVE_ATTRIBUTES                                                       0x8B89
#define GL_OBJECT_ACTIVE_ATTRIBUTES_ARB                                            0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH                                             0x8B8A
#define GL_OBJECT_ACTIVE_ATTRIBUTE_MAX_LENGTH_ARB                                  0x8B8A
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT                                         0x8B8B
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT_ARB                                     0x8B8B
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES                                     0x8B8B
#define GL_SHADING_LANGUAGE_VERSION                                                0x8B8C
#define GL_SHADING_LANGUAGE_VERSION_ARB                                            0x8B8C
#define GL_ACTIVE_PROGRAM_EXT                                                      0x8B8D
#define GL_CURRENT_PROGRAM                                                         0x8B8D
#define GL_PALETTE4_RGB8_OES                                                       0x8B90
#define GL_PALETTE4_RGBA8_OES                                                      0x8B91
#define GL_PALETTE4_R5_G6_B5_OES                                                   0x8B92
#define GL_PALETTE4_RGBA4_OES                                                      0x8B93
#define GL_PALETTE4_RGB5_A1_OES                                                    0x8B94
#define GL_PALETTE8_RGB8_OES                                                       0x8B95
#define GL_PALETTE8_RGBA8_OES                                                      0x8B96
#define GL_PALETTE8_R5_G6_B5_OES                                                   0x8B97
#define GL_PALETTE8_RGBA4_OES                                                      0x8B98
#define GL_PALETTE8_RGB5_A1_OES                                                    0x8B99
#define GL_IMPLEMENTATION_COLOR_READ_TYPE                                          0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_TYPE_OES                                      0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT                                        0x8B9B
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES                                    0x8B9B
#define GL_POINT_SIZE_ARRAY_OES                                                    0x8B9C
#define GL_TEXTURE_CROP_RECT_OES                                                   0x8B9D
#define GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES                                   0x8B9E
#define GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES                                     0x8B9F
#define GL_FRAGMENT_PROGRAM_POSITION_MESA                                          0x8BB0
#define GL_FRAGMENT_PROGRAM_CALLBACK_MESA                                          0x8BB1
#define GL_FRAGMENT_PROGRAM_CALLBACK_FUNC_MESA                                     0x8BB2
#define GL_FRAGMENT_PROGRAM_CALLBACK_DATA_MESA                                     0x8BB3
#define GL_VERTEX_PROGRAM_POSITION_MESA                                            0x8BB4
#define GL_VERTEX_PROGRAM_CALLBACK_MESA                                            0x8BB5
#define GL_VERTEX_PROGRAM_CALLBACK_FUNC_MESA                                       0x8BB6
#define GL_VERTEX_PROGRAM_CALLBACK_DATA_MESA                                       0x8BB7
#define GL_TILE_RASTER_ORDER_FIXED_MESA                                            0x8BB8
#define GL_TILE_RASTER_ORDER_INCREASING_X_MESA                                     0x8BB9
#define GL_TILE_RASTER_ORDER_INCREASING_Y_MESA                                     0x8BBA
#define GL_COUNTER_TYPE_AMD                                                        0x8BC0
#define GL_COUNTER_RANGE_AMD                                                       0x8BC1
#define GL_UNSIGNED_INT64_AMD                                                      0x8BC2
#define GL_PERCENTAGE_AMD                                                          0x8BC3
#define GL_PERFMON_RESULT_AVAILABLE_AMD                                            0x8BC4
#define GL_PERFMON_RESULT_SIZE_AMD                                                 0x8BC5
#define GL_PERFMON_RESULT_AMD                                                      0x8BC6
#define GL_TEXTURE_WIDTH_QCOM                                                      0x8BD2
#define GL_TEXTURE_HEIGHT_QCOM                                                     0x8BD3
#define GL_TEXTURE_DEPTH_QCOM                                                      0x8BD4
#define GL_TEXTURE_INTERNAL_FORMAT_QCOM                                            0x8BD5
#define GL_TEXTURE_FORMAT_QCOM                                                     0x8BD6
#define GL_TEXTURE_TYPE_QCOM                                                       0x8BD7
#define GL_TEXTURE_IMAGE_VALID_QCOM                                                0x8BD8
#define GL_TEXTURE_NUM_LEVELS_QCOM                                                 0x8BD9
#define GL_TEXTURE_TARGET_QCOM                                                     0x8BDA
#define GL_TEXTURE_OBJECT_VALID_QCOM                                               0x8BDB
#define GL_STATE_RESTORE                                                           0x8BDC
#define GL_SAMPLER_EXTERNAL_2D_Y2Y_EXT                                             0x8BE7
#define GL_TEXTURE_PROTECTED_EXT                                                   0x8BFA
#define GL_TEXTURE_FOVEATED_FEATURE_BITS_QCOM                                      0x8BFB
#define GL_TEXTURE_FOVEATED_MIN_PIXEL_DENSITY_QCOM                                 0x8BFC
#define GL_TEXTURE_FOVEATED_FEATURE_QUERY_QCOM                                     0x8BFD
#define GL_TEXTURE_FOVEATED_NUM_FOCAL_POINTS_QUERY_QCOM                            0x8BFE
#define GL_FRAMEBUFFER_INCOMPLETE_FOVEATION_QCOM                                   0x8BFF
#define GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG                                         0x8C00
#define GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG                                         0x8C01
#define GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG                                        0x8C02
#define GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG                                        0x8C03
#define GL_MODULATE_COLOR_IMG                                                      0x8C04
#define GL_RECIP_ADD_SIGNED_ALPHA_IMG                                              0x8C05
#define GL_TEXTURE_ALPHA_MODULATE_IMG                                              0x8C06
#define GL_FACTOR_ALPHA_MODULATE_IMG                                               0x8C07
#define GL_FRAGMENT_ALPHA_MODULATE_IMG                                             0x8C08
#define GL_ADD_BLEND_IMG                                                           0x8C09
#define GL_SGX_BINARY_IMG                                                          0x8C0A
#define GL_TEXTURE_RED_TYPE                                                        0x8C10
#define GL_TEXTURE_RED_TYPE_ARB                                                    0x8C10
#define GL_TEXTURE_GREEN_TYPE                                                      0x8C11
#define GL_TEXTURE_GREEN_TYPE_ARB                                                  0x8C11
#define GL_TEXTURE_BLUE_TYPE                                                       0x8C12
#define GL_TEXTURE_BLUE_TYPE_ARB                                                   0x8C12
#define GL_TEXTURE_ALPHA_TYPE                                                      0x8C13
#define GL_TEXTURE_ALPHA_TYPE_ARB                                                  0x8C13
#define GL_TEXTURE_LUMINANCE_TYPE                                                  0x8C14
#define GL_TEXTURE_LUMINANCE_TYPE_ARB                                              0x8C14
#define GL_TEXTURE_INTENSITY_TYPE                                                  0x8C15
#define GL_TEXTURE_INTENSITY_TYPE_ARB                                              0x8C15
#define GL_TEXTURE_DEPTH_TYPE                                                      0x8C16
#define GL_TEXTURE_DEPTH_TYPE_ARB                                                  0x8C16
#define GL_UNSIGNED_NORMALIZED                                                     0x8C17
#define GL_UNSIGNED_NORMALIZED_ARB                                                 0x8C17
#define GL_UNSIGNED_NORMALIZED_EXT                                                 0x8C17
#define GL_TEXTURE_1D_ARRAY                                                        0x8C18
#define GL_TEXTURE_1D_ARRAY_EXT                                                    0x8C18
#define GL_PROXY_TEXTURE_1D_ARRAY                                                  0x8C19
#define GL_PROXY_TEXTURE_1D_ARRAY_EXT                                              0x8C19
#define GL_TEXTURE_2D_ARRAY                                                        0x8C1A
#define GL_TEXTURE_2D_ARRAY_EXT                                                    0x8C1A
#define GL_PROXY_TEXTURE_2D_ARRAY                                                  0x8C1B
#define GL_PROXY_TEXTURE_2D_ARRAY_EXT                                              0x8C1B
#define GL_TEXTURE_BINDING_1D_ARRAY                                                0x8C1C
#define GL_TEXTURE_BINDING_1D_ARRAY_EXT                                            0x8C1C
#define GL_TEXTURE_BINDING_2D_ARRAY                                                0x8C1D
#define GL_TEXTURE_BINDING_2D_ARRAY_EXT                                            0x8C1D
#define GL_GEOMETRY_PROGRAM_NV                                                     0x8C26
#define GL_MAX_PROGRAM_OUTPUT_VERTICES_NV                                          0x8C27
#define GL_MAX_PROGRAM_TOTAL_OUTPUT_COMPONENTS_NV                                  0x8C28
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS                                        0x8C29
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_ARB                                    0x8C29
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT                                    0x8C29
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_OES                                    0x8C29
#define GL_TEXTURE_BUFFER                                                          0x8C2A
#define GL_TEXTURE_BUFFER_ARB                                                      0x8C2A
#define GL_TEXTURE_BUFFER_BINDING                                                  0x8C2A
#define GL_TEXTURE_BUFFER_BINDING_EXT                                              0x8C2A
#define GL_TEXTURE_BUFFER_BINDING_OES                                              0x8C2A
#define GL_TEXTURE_BUFFER_EXT                                                      0x8C2A
#define GL_TEXTURE_BUFFER_OES                                                      0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE                                                 0x8C2B
#define GL_MAX_TEXTURE_BUFFER_SIZE_ARB                                             0x8C2B
#define GL_MAX_TEXTURE_BUFFER_SIZE_EXT                                             0x8C2B
#define GL_MAX_TEXTURE_BUFFER_SIZE_OES                                             0x8C2B
#define GL_TEXTURE_BINDING_BUFFER                                                  0x8C2C
#define GL_TEXTURE_BINDING_BUFFER_ARB                                              0x8C2C
#define GL_TEXTURE_BINDING_BUFFER_EXT                                              0x8C2C
#define GL_TEXTURE_BINDING_BUFFER_OES                                              0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING                                       0x8C2D
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_ARB                                   0x8C2D
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT                                   0x8C2D
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_OES                                   0x8C2D
#define GL_TEXTURE_BUFFER_FORMAT_ARB                                               0x8C2E
#define GL_TEXTURE_BUFFER_FORMAT_EXT                                               0x8C2E
#define GL_ANY_SAMPLES_PASSED                                                      0x8C2F
#define GL_ANY_SAMPLES_PASSED_EXT                                                  0x8C2F
#define GL_SAMPLE_SHADING                                                          0x8C36
#define GL_SAMPLE_SHADING_ARB                                                      0x8C36
#define GL_SAMPLE_SHADING_OES                                                      0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE                                                0x8C37
#define GL_MIN_SAMPLE_SHADING_VALUE_ARB                                            0x8C37
#define GL_MIN_SAMPLE_SHADING_VALUE_OES                                            0x8C37
#define GL_R11F_G11F_B10F                                                          0x8C3A
#define GL_R11F_G11F_B10F_APPLE                                                    0x8C3A
#define GL_R11F_G11F_B10F_EXT                                                      0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV                                            0x8C3B
#define GL_UNSIGNED_INT_10F_11F_11F_REV_APPLE                                      0x8C3B
#define GL_UNSIGNED_INT_10F_11F_11F_REV_EXT                                        0x8C3B
#define GL_RGBA_SIGNED_COMPONENTS_EXT                                              0x8C3C
#define GL_RGB9_E5                                                                 0x8C3D
#define GL_RGB9_E5_APPLE                                                           0x8C3D
#define GL_RGB9_E5_EXT                                                             0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV                                                0x8C3E
#define GL_UNSIGNED_INT_5_9_9_9_REV_APPLE                                          0x8C3E
#define GL_UNSIGNED_INT_5_9_9_9_REV_EXT                                            0x8C3E
#define GL_TEXTURE_SHARED_SIZE                                                     0x8C3F
#define GL_TEXTURE_SHARED_SIZE_EXT                                                 0x8C3F
#define GL_SRGB                                                                    0x8C40
#define GL_SRGB_EXT                                                                0x8C40
#define GL_SRGB8                                                                   0x8C41
#define GL_SRGB8_EXT                                                               0x8C41
#define GL_SRGB8_NV                                                                0x8C41
#define GL_SRGB_ALPHA                                                              0x8C42
#define GL_SRGB_ALPHA_EXT                                                          0x8C42
#define GL_SRGB8_ALPHA8                                                            0x8C43
#define GL_SRGB8_ALPHA8_EXT                                                        0x8C43
#define GL_SLUMINANCE_ALPHA                                                        0x8C44
#define GL_SLUMINANCE_ALPHA_EXT                                                    0x8C44
#define GL_SLUMINANCE_ALPHA_NV                                                     0x8C44
#define GL_SLUMINANCE8_ALPHA8                                                      0x8C45
#define GL_SLUMINANCE8_ALPHA8_EXT                                                  0x8C45
#define GL_SLUMINANCE8_ALPHA8_NV                                                   0x8C45
#define GL_SLUMINANCE                                                              0x8C46
#define GL_SLUMINANCE_EXT                                                          0x8C46
#define GL_SLUMINANCE_NV                                                           0x8C46
#define GL_SLUMINANCE8                                                             0x8C47
#define GL_SLUMINANCE8_EXT                                                         0x8C47
#define GL_SLUMINANCE8_NV                                                          0x8C47
#define GL_COMPRESSED_SRGB                                                         0x8C48
#define GL_COMPRESSED_SRGB_EXT                                                     0x8C48
#define GL_COMPRESSED_SRGB_ALPHA                                                   0x8C49
#define GL_COMPRESSED_SRGB_ALPHA_EXT                                               0x8C49
#define GL_COMPRESSED_SLUMINANCE                                                   0x8C4A
#define GL_COMPRESSED_SLUMINANCE_EXT                                               0x8C4A
#define GL_COMPRESSED_SLUMINANCE_ALPHA                                             0x8C4B
#define GL_COMPRESSED_SLUMINANCE_ALPHA_EXT                                         0x8C4B
#define GL_COMPRESSED_SRGB_S3TC_DXT1_EXT                                           0x8C4C
#define GL_COMPRESSED_SRGB_S3TC_DXT1_NV                                            0x8C4C
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT                                     0x8C4D
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV                                      0x8C4D
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT                                     0x8C4E
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV                                      0x8C4E
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT                                     0x8C4F
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV                                      0x8C4F
#define GL_COMPRESSED_LUMINANCE_LATC1_EXT                                          0x8C70
#define GL_COMPRESSED_SIGNED_LUMINANCE_LATC1_EXT                                   0x8C71
#define GL_COMPRESSED_LUMINANCE_ALPHA_LATC2_EXT                                    0x8C72
#define GL_COMPRESSED_SIGNED_LUMINANCE_ALPHA_LATC2_EXT                             0x8C73
#define GL_TESS_CONTROL_PROGRAM_PARAMETER_BUFFER_NV                                0x8C74
#define GL_TESS_EVALUATION_PROGRAM_PARAMETER_BUFFER_NV                             0x8C75
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH                                   0x8C76
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH_EXT                               0x8C76
#define GL_BACK_PRIMARY_COLOR_NV                                                   0x8C77
#define GL_BACK_SECONDARY_COLOR_NV                                                 0x8C78
#define GL_TEXTURE_COORD_NV                                                        0x8C79
#define GL_CLIP_DISTANCE_NV                                                        0x8C7A
#define GL_VERTEX_ID_NV                                                            0x8C7B
#define GL_PRIMITIVE_ID_NV                                                         0x8C7C
#define GL_GENERIC_ATTRIB_NV                                                       0x8C7D
#define GL_TRANSFORM_FEEDBACK_ATTRIBS_NV                                           0x8C7E
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE                                          0x8C7F
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE_EXT                                      0x8C7F
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE_NV                                       0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS                              0x8C80
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_EXT                          0x8C80
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_NV                           0x8C80
#define GL_ACTIVE_VARYINGS_NV                                                      0x8C81
#define GL_ACTIVE_VARYING_MAX_LENGTH_NV                                            0x8C82
#define GL_TRANSFORM_FEEDBACK_VARYINGS                                             0x8C83
#define GL_TRANSFORM_FEEDBACK_VARYINGS_EXT                                         0x8C83
#define GL_TRANSFORM_FEEDBACK_VARYINGS_NV                                          0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START                                         0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_START_EXT                                     0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_START_NV                                      0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE                                          0x8C85
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_EXT                                      0x8C85
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_NV                                       0x8C85
#define GL_TRANSFORM_FEEDBACK_RECORD_NV                                            0x8C86
#define GL_PRIMITIVES_GENERATED                                                    0x8C87
#define GL_PRIMITIVES_GENERATED_EXT                                                0x8C87
#define GL_PRIMITIVES_GENERATED_NV                                                 0x8C87
#define GL_PRIMITIVES_GENERATED_OES                                                0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN                                   0x8C88
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_EXT                               0x8C88
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_NV                                0x8C88
#define GL_RASTERIZER_DISCARD                                                      0x8C89
#define GL_RASTERIZER_DISCARD_EXT                                                  0x8C89
#define GL_RASTERIZER_DISCARD_NV                                                   0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS                           0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_EXT                       0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_NV                        0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS                                 0x8C8B
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_EXT                             0x8C8B
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_NV                              0x8C8B
#define GL_INTERLEAVED_ATTRIBS                                                     0x8C8C
#define GL_INTERLEAVED_ATTRIBS_EXT                                                 0x8C8C
#define GL_INTERLEAVED_ATTRIBS_NV                                                  0x8C8C
#define GL_SEPARATE_ATTRIBS                                                        0x8C8D
#define GL_SEPARATE_ATTRIBS_EXT                                                    0x8C8D
#define GL_SEPARATE_ATTRIBS_NV                                                     0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER                                               0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_EXT                                           0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_NV                                            0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING                                       0x8C8F
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_EXT                                   0x8C8F
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_NV                                    0x8C8F
#define GL_ATC_RGB_AMD                                                             0x8C92
#define GL_ATC_RGBA_EXPLICIT_ALPHA_AMD                                             0x8C93
#define GL_POINT_SPRITE_COORD_ORIGIN                                               0x8CA0
#define GL_LOWER_LEFT                                                              0x8CA1
#define GL_LOWER_LEFT_EXT                                                          0x8CA1
#define GL_UPPER_LEFT                                                              0x8CA2
#define GL_UPPER_LEFT_EXT                                                          0x8CA2
#define GL_STENCIL_BACK_REF                                                        0x8CA3
#define GL_STENCIL_BACK_VALUE_MASK                                                 0x8CA4
#define GL_STENCIL_BACK_WRITEMASK                                                  0x8CA5
#define GL_DRAW_FRAMEBUFFER_BINDING                                                0x8CA6
#define GL_DRAW_FRAMEBUFFER_BINDING_ANGLE                                          0x8CA6
#define GL_DRAW_FRAMEBUFFER_BINDING_APPLE                                          0x8CA6
#define GL_DRAW_FRAMEBUFFER_BINDING_EXT                                            0x8CA6
#define GL_DRAW_FRAMEBUFFER_BINDING_NV                                             0x8CA6
#define GL_FRAMEBUFFER_BINDING                                                     0x8CA6
#define GL_FRAMEBUFFER_BINDING_ANGLE                                               0x8CA6
#define GL_FRAMEBUFFER_BINDING_EXT                                                 0x8CA6
#define GL_FRAMEBUFFER_BINDING_OES                                                 0x8CA6
#define GL_RENDERBUFFER_BINDING                                                    0x8CA7
#define GL_RENDERBUFFER_BINDING_ANGLE                                              0x8CA7
#define GL_RENDERBUFFER_BINDING_EXT                                                0x8CA7
#define GL_RENDERBUFFER_BINDING_OES                                                0x8CA7
#define GL_READ_FRAMEBUFFER                                                        0x8CA8
#define GL_READ_FRAMEBUFFER_ANGLE                                                  0x8CA8
#define GL_READ_FRAMEBUFFER_APPLE                                                  0x8CA8
#define GL_READ_FRAMEBUFFER_EXT                                                    0x8CA8
#define GL_READ_FRAMEBUFFER_NV                                                     0x8CA8
#define GL_DRAW_FRAMEBUFFER                                                        0x8CA9
#define GL_DRAW_FRAMEBUFFER_ANGLE                                                  0x8CA9
#define GL_DRAW_FRAMEBUFFER_APPLE                                                  0x8CA9
#define GL_DRAW_FRAMEBUFFER_EXT                                                    0x8CA9
#define GL_DRAW_FRAMEBUFFER_NV                                                     0x8CA9
#define GL_READ_FRAMEBUFFER_BINDING                                                0x8CAA
#define GL_READ_FRAMEBUFFER_BINDING_ANGLE                                          0x8CAA
#define GL_READ_FRAMEBUFFER_BINDING_APPLE                                          0x8CAA
#define GL_READ_FRAMEBUFFER_BINDING_EXT                                            0x8CAA
#define GL_READ_FRAMEBUFFER_BINDING_NV                                             0x8CAA
#define GL_RENDERBUFFER_COVERAGE_SAMPLES_NV                                        0x8CAB
#define GL_RENDERBUFFER_SAMPLES                                                    0x8CAB
#define GL_RENDERBUFFER_SAMPLES_ANGLE                                              0x8CAB
#define GL_RENDERBUFFER_SAMPLES_APPLE                                              0x8CAB
#define GL_RENDERBUFFER_SAMPLES_EXT                                                0x8CAB
#define GL_RENDERBUFFER_SAMPLES_NV                                                 0x8CAB
#define GL_DEPTH_COMPONENT32F                                                      0x8CAC
#define GL_DEPTH32F_STENCIL8                                                       0x8CAD
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE                                      0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_EXT                                  0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_OES                                  0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME                                      0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_EXT                                  0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_OES                                  0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL                                    0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_EXT                                0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_OES                                0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE                            0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_EXT                        0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_OES                        0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_EXT                           0x8CD4
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES                           0x8CD4
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER                                    0x8CD4
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT                                0x8CD4
#define GL_FRAMEBUFFER_COMPLETE                                                    0x8CD5
#define GL_FRAMEBUFFER_COMPLETE_EXT                                                0x8CD5
#define GL_FRAMEBUFFER_COMPLETE_OES                                                0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT                                       0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT                                   0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_OES                                   0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT                               0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_EXT                           0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_OES                           0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS                                       0x8CD9
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_EXT                                   0x8CD9
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_OES                                   0x8CD9
#define GL_FRAMEBUFFER_INCOMPLETE_FORMATS_EXT                                      0x8CDA
#define GL_FRAMEBUFFER_INCOMPLETE_FORMATS_OES                                      0x8CDA
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER                                      0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER_EXT                                  0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER_OES                                  0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER                                      0x8CDC
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER_EXT                                  0x8CDC
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER_OES                                  0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED                                                 0x8CDD
#define GL_FRAMEBUFFER_UNSUPPORTED_EXT                                             0x8CDD
#define GL_FRAMEBUFFER_UNSUPPORTED_OES                                             0x8CDD
#define GL_MAX_COLOR_ATTACHMENTS                                                   0x8CDF
#define GL_MAX_COLOR_ATTACHMENTS_EXT                                               0x8CDF
#define GL_MAX_COLOR_ATTACHMENTS_NV                                                0x8CDF
#define GL_COLOR_ATTACHMENT0                                                       0x8CE0
#define GL_COLOR_ATTACHMENT0_EXT                                                   0x8CE0
#define GL_COLOR_ATTACHMENT0_NV                                                    0x8CE0
#define GL_COLOR_ATTACHMENT0_OES                                                   0x8CE0
#define GL_COLOR_ATTACHMENT1                                                       0x8CE1
#define GL_COLOR_ATTACHMENT1_EXT                                                   0x8CE1
#define GL_COLOR_ATTACHMENT1_NV                                                    0x8CE1
#define GL_COLOR_ATTACHMENT2                                                       0x8CE2
#define GL_COLOR_ATTACHMENT2_EXT                                                   0x8CE2
#define GL_COLOR_ATTACHMENT2_NV                                                    0x8CE2
#define GL_COLOR_ATTACHMENT3                                                       0x8CE3
#define GL_COLOR_ATTACHMENT3_EXT                                                   0x8CE3
#define GL_COLOR_ATTACHMENT3_NV                                                    0x8CE3
#define GL_COLOR_ATTACHMENT4                                                       0x8CE4
#define GL_COLOR_ATTACHMENT4_EXT                                                   0x8CE4
#define GL_COLOR_ATTACHMENT4_NV                                                    0x8CE4
#define GL_COLOR_ATTACHMENT5                                                       0x8CE5
#define GL_COLOR_ATTACHMENT5_EXT                                                   0x8CE5
#define GL_COLOR_ATTACHMENT5_NV                                                    0x8CE5
#define GL_COLOR_ATTACHMENT6                                                       0x8CE6
#define GL_COLOR_ATTACHMENT6_EXT                                                   0x8CE6
#define GL_COLOR_ATTACHMENT6_NV                                                    0x8CE6
#define GL_COLOR_ATTACHMENT7                                                       0x8CE7
#define GL_COLOR_ATTACHMENT7_EXT                                                   0x8CE7
#define GL_COLOR_ATTACHMENT7_NV                                                    0x8CE7
#define GL_COLOR_ATTACHMENT8                                                       0x8CE8
#define GL_COLOR_ATTACHMENT8_EXT                                                   0x8CE8
#define GL_COLOR_ATTACHMENT8_NV                                                    0x8CE8
#define GL_COLOR_ATTACHMENT9                                                       0x8CE9
#define GL_COLOR_ATTACHMENT9_EXT                                                   0x8CE9
#define GL_COLOR_ATTACHMENT9_NV                                                    0x8CE9
#define GL_COLOR_ATTACHMENT10                                                      0x8CEA
#define GL_COLOR_ATTACHMENT10_EXT                                                  0x8CEA
#define GL_COLOR_ATTACHMENT10_NV                                                   0x8CEA
#define GL_COLOR_ATTACHMENT11                                                      0x8CEB
#define GL_COLOR_ATTACHMENT11_EXT                                                  0x8CEB
#define GL_COLOR_ATTACHMENT11_NV                                                   0x8CEB
#define GL_COLOR_ATTACHMENT12                                                      0x8CEC
#define GL_COLOR_ATTACHMENT12_EXT                                                  0x8CEC
#define GL_COLOR_ATTACHMENT12_NV                                                   0x8CEC
#define GL_COLOR_ATTACHMENT13                                                      0x8CED
#define GL_COLOR_ATTACHMENT13_EXT                                                  0x8CED
#define GL_COLOR_ATTACHMENT13_NV                                                   0x8CED
#define GL_COLOR_ATTACHMENT14                                                      0x8CEE
#define GL_COLOR_ATTACHMENT14_EXT                                                  0x8CEE
#define GL_COLOR_ATTACHMENT14_NV                                                   0x8CEE
#define GL_COLOR_ATTACHMENT15                                                      0x8CEF
#define GL_COLOR_ATTACHMENT15_EXT                                                  0x8CEF
#define GL_COLOR_ATTACHMENT15_NV                                                   0x8CEF
#define GL_COLOR_ATTACHMENT16                                                      0x8CF0
#define GL_COLOR_ATTACHMENT17                                                      0x8CF1
#define GL_COLOR_ATTACHMENT18                                                      0x8CF2
#define GL_COLOR_ATTACHMENT19                                                      0x8CF3
#define GL_COLOR_ATTACHMENT20                                                      0x8CF4
#define GL_COLOR_ATTACHMENT21                                                      0x8CF5
#define GL_COLOR_ATTACHMENT22                                                      0x8CF6
#define GL_COLOR_ATTACHMENT23                                                      0x8CF7
#define GL_COLOR_ATTACHMENT24                                                      0x8CF8
#define GL_COLOR_ATTACHMENT25                                                      0x8CF9
#define GL_COLOR_ATTACHMENT26                                                      0x8CFA
#define GL_COLOR_ATTACHMENT27                                                      0x8CFB
#define GL_COLOR_ATTACHMENT28                                                      0x8CFC
#define GL_COLOR_ATTACHMENT29                                                      0x8CFD
#define GL_COLOR_ATTACHMENT30                                                      0x8CFE
#define GL_COLOR_ATTACHMENT31                                                      0x8CFF
#define GL_DEPTH_ATTACHMENT                                                        0x8D00
#define GL_DEPTH_ATTACHMENT_EXT                                                    0x8D00
#define GL_DEPTH_ATTACHMENT_OES                                                    0x8D00
#define GL_STENCIL_ATTACHMENT                                                      0x8D20
#define GL_STENCIL_ATTACHMENT_EXT                                                  0x8D20
#define GL_STENCIL_ATTACHMENT_OES                                                  0x8D20
#define GL_FRAMEBUFFER                                                             0x8D40
#define GL_FRAMEBUFFER_EXT                                                         0x8D40
#define GL_FRAMEBUFFER_OES                                                         0x8D40
#define GL_RENDERBUFFER                                                            0x8D41
#define GL_RENDERBUFFER_EXT                                                        0x8D41
#define GL_RENDERBUFFER_OES                                                        0x8D41
#define GL_RENDERBUFFER_WIDTH                                                      0x8D42
#define GL_RENDERBUFFER_WIDTH_EXT                                                  0x8D42
#define GL_RENDERBUFFER_WIDTH_OES                                                  0x8D42
#define GL_RENDERBUFFER_HEIGHT                                                     0x8D43
#define GL_RENDERBUFFER_HEIGHT_EXT                                                 0x8D43
#define GL_RENDERBUFFER_HEIGHT_OES                                                 0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT                                            0x8D44
#define GL_RENDERBUFFER_INTERNAL_FORMAT_EXT                                        0x8D44
#define GL_RENDERBUFFER_INTERNAL_FORMAT_OES                                        0x8D44
#define GL_STENCIL_INDEX1                                                          0x8D46
#define GL_STENCIL_INDEX1_EXT                                                      0x8D46
#define GL_STENCIL_INDEX1_OES                                                      0x8D46
#define GL_STENCIL_INDEX4                                                          0x8D47
#define GL_STENCIL_INDEX4_EXT                                                      0x8D47
#define GL_STENCIL_INDEX4_OES                                                      0x8D47
#define GL_STENCIL_INDEX8                                                          0x8D48
#define GL_STENCIL_INDEX8_EXT                                                      0x8D48
#define GL_STENCIL_INDEX8_OES                                                      0x8D48
#define GL_STENCIL_INDEX16                                                         0x8D49
#define GL_STENCIL_INDEX16_EXT                                                     0x8D49
#define GL_RENDERBUFFER_RED_SIZE                                                   0x8D50
#define GL_RENDERBUFFER_RED_SIZE_EXT                                               0x8D50
#define GL_RENDERBUFFER_RED_SIZE_OES                                               0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE                                                 0x8D51
#define GL_RENDERBUFFER_GREEN_SIZE_EXT                                             0x8D51
#define GL_RENDERBUFFER_GREEN_SIZE_OES                                             0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE                                                  0x8D52
#define GL_RENDERBUFFER_BLUE_SIZE_EXT                                              0x8D52
#define GL_RENDERBUFFER_BLUE_SIZE_OES                                              0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE                                                 0x8D53
#define GL_RENDERBUFFER_ALPHA_SIZE_EXT                                             0x8D53
#define GL_RENDERBUFFER_ALPHA_SIZE_OES                                             0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE                                                 0x8D54
#define GL_RENDERBUFFER_DEPTH_SIZE_EXT                                             0x8D54
#define GL_RENDERBUFFER_DEPTH_SIZE_OES                                             0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE                                               0x8D55
#define GL_RENDERBUFFER_STENCIL_SIZE_EXT                                           0x8D55
#define GL_RENDERBUFFER_STENCIL_SIZE_OES                                           0x8D55
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE                                      0x8D56
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE                                0x8D56
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE                                0x8D56
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT                                  0x8D56
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_NV                                   0x8D56
#define GL_MAX_SAMPLES                                                             0x8D57
#define GL_MAX_SAMPLES_ANGLE                                                       0x8D57
#define GL_MAX_SAMPLES_APPLE                                                       0x8D57
#define GL_MAX_SAMPLES_EXT                                                         0x8D57
#define GL_MAX_SAMPLES_NV                                                          0x8D57
#define GL_TEXTURE_GEN_STR_OES                                                     0x8D60
#define GL_HALF_FLOAT_OES                                                          0x8D61
#define GL_RGB565                                                                  0x8D62
#define GL_RGB565_OES                                                              0x8D62
#define GL_ETC1_RGB8_OES                                                           0x8D64
#define GL_TEXTURE_EXTERNAL_OES                                                    0x8D65
#define GL_SAMPLER_EXTERNAL_OES                                                    0x8D66
#define GL_TEXTURE_BINDING_EXTERNAL_OES                                            0x8D67
#define GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES                                        0x8D68
#define GL_PRIMITIVE_RESTART_FIXED_INDEX                                           0x8D69
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE                                         0x8D6A
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE_EXT                                     0x8D6A
#define GL_MAX_ELEMENT_INDEX                                                       0x8D6B
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT                              0x8D6C
#define GL_RGBA32UI                                                                0x8D70
#define GL_RGBA32UI_EXT                                                            0x8D70
#define GL_RGB32UI                                                                 0x8D71
#define GL_RGB32UI_EXT                                                             0x8D71
#define GL_ALPHA32UI_EXT                                                           0x8D72
#define GL_INTENSITY32UI_EXT                                                       0x8D73
#define GL_LUMINANCE32UI_EXT                                                       0x8D74
#define GL_LUMINANCE_ALPHA32UI_EXT                                                 0x8D75
#define GL_RGBA16UI                                                                0x8D76
#define GL_RGBA16UI_EXT                                                            0x8D76
#define GL_RGB16UI                                                                 0x8D77
#define GL_RGB16UI_EXT                                                             0x8D77
#define GL_ALPHA16UI_EXT                                                           0x8D78
#define GL_INTENSITY16UI_EXT                                                       0x8D79
#define GL_LUMINANCE16UI_EXT                                                       0x8D7A
#define GL_LUMINANCE_ALPHA16UI_EXT                                                 0x8D7B
#define GL_RGBA8UI                                                                 0x8D7C
#define GL_RGBA8UI_EXT                                                             0x8D7C
#define GL_RGB8UI                                                                  0x8D7D
#define GL_RGB8UI_EXT                                                              0x8D7D
#define GL_ALPHA8UI_EXT                                                            0x8D7E
#define GL_INTENSITY8UI_EXT                                                        0x8D7F
#define GL_LUMINANCE8UI_EXT                                                        0x8D80
#define GL_LUMINANCE_ALPHA8UI_EXT                                                  0x8D81
#define GL_RGBA32I                                                                 0x8D82
#define GL_RGBA32I_EXT                                                             0x8D82
#define GL_RGB32I                                                                  0x8D83
#define GL_RGB32I_EXT                                                              0x8D83
#define GL_ALPHA32I_EXT                                                            0x8D84
#define GL_INTENSITY32I_EXT                                                        0x8D85
#define GL_LUMINANCE32I_EXT                                                        0x8D86
#define GL_LUMINANCE_ALPHA32I_EXT                                                  0x8D87
#define GL_RGBA16I                                                                 0x8D88
#define GL_RGBA16I_EXT                                                             0x8D88
#define GL_RGB16I                                                                  0x8D89
#define GL_RGB16I_EXT                                                              0x8D89
#define GL_ALPHA16I_EXT                                                            0x8D8A
#define GL_INTENSITY16I_EXT                                                        0x8D8B
#define GL_LUMINANCE16I_EXT                                                        0x8D8C
#define GL_LUMINANCE_ALPHA16I_EXT                                                  0x8D8D
#define GL_RGBA8I                                                                  0x8D8E
#define GL_RGBA8I_EXT                                                              0x8D8E
#define GL_RGB8I                                                                   0x8D8F
#define GL_RGB8I_EXT                                                               0x8D8F
#define GL_ALPHA8I_EXT                                                             0x8D90
#define GL_INTENSITY8I_EXT                                                         0x8D91
#define GL_LUMINANCE8I_EXT                                                         0x8D92
#define GL_LUMINANCE_ALPHA8I_EXT                                                   0x8D93
#define GL_RED_INTEGER                                                             0x8D94
#define GL_RED_INTEGER_EXT                                                         0x8D94
#define GL_GREEN_INTEGER                                                           0x8D95
#define GL_GREEN_INTEGER_EXT                                                       0x8D95
#define GL_BLUE_INTEGER                                                            0x8D96
#define GL_BLUE_INTEGER_EXT                                                        0x8D96
#define GL_ALPHA_INTEGER                                                           0x8D97
#define GL_ALPHA_INTEGER_EXT                                                       0x8D97
#define GL_RGB_INTEGER                                                             0x8D98
#define GL_RGB_INTEGER_EXT                                                         0x8D98
#define GL_RGBA_INTEGER                                                            0x8D99
#define GL_RGBA_INTEGER_EXT                                                        0x8D99
#define GL_BGR_INTEGER                                                             0x8D9A
#define GL_BGR_INTEGER_EXT                                                         0x8D9A
#define GL_BGRA_INTEGER                                                            0x8D9B
#define GL_BGRA_INTEGER_EXT                                                        0x8D9B
#define GL_LUMINANCE_INTEGER_EXT                                                   0x8D9C
#define GL_LUMINANCE_ALPHA_INTEGER_EXT                                             0x8D9D
#define GL_RGBA_INTEGER_MODE_EXT                                                   0x8D9E
#define GL_INT_2_10_10_10_REV                                                      0x8D9F
#define GL_MAX_PROGRAM_PARAMETER_BUFFER_BINDINGS_NV                                0x8DA0
#define GL_MAX_PROGRAM_PARAMETER_BUFFER_SIZE_NV                                    0x8DA1
#define GL_VERTEX_PROGRAM_PARAMETER_BUFFER_NV                                      0x8DA2
#define GL_GEOMETRY_PROGRAM_PARAMETER_BUFFER_NV                                    0x8DA3
#define GL_FRAGMENT_PROGRAM_PARAMETER_BUFFER_NV                                    0x8DA4
#define GL_MAX_PROGRAM_GENERIC_ATTRIBS_NV                                          0x8DA5
#define GL_MAX_PROGRAM_GENERIC_RESULTS_NV                                          0x8DA6
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED                                          0x8DA7
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_ARB                                      0x8DA7
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT                                      0x8DA7
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_OES                                      0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS                                    0x8DA8
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_ARB                                0x8DA8
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT                                0x8DA8
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_OES                                0x8DA8
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_ARB                                  0x8DA9
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_EXT                                  0x8DA9
#define GL_LAYER_NV                                                                0x8DAA
#define GL_DEPTH_COMPONENT32F_NV                                                   0x8DAB
#define GL_DEPTH32F_STENCIL8_NV                                                    0x8DAC
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV                                          0x8DAD
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV_NV                                       0x8DAD
#define GL_SHADER_INCLUDE_ARB                                                      0x8DAE
#define GL_DEPTH_BUFFER_FLOAT_MODE_NV                                              0x8DAF
#define GL_FRAMEBUFFER_SRGB                                                        0x8DB9
#define GL_FRAMEBUFFER_SRGB_EXT                                                    0x8DB9
#define GL_FRAMEBUFFER_SRGB_CAPABLE_EXT                                            0x8DBA
#define GL_COMPRESSED_RED_RGTC1                                                    0x8DBB
#define GL_COMPRESSED_RED_RGTC1_EXT                                                0x8DBB
#define GL_COMPRESSED_SIGNED_RED_RGTC1                                             0x8DBC
#define GL_COMPRESSED_SIGNED_RED_RGTC1_EXT                                         0x8DBC
#define GL_COMPRESSED_RED_GREEN_RGTC2_EXT                                          0x8DBD
#define GL_COMPRESSED_RG_RGTC2                                                     0x8DBD
#define GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT                                   0x8DBE
#define GL_COMPRESSED_SIGNED_RG_RGTC2                                              0x8DBE
#define GL_SAMPLER_1D_ARRAY                                                        0x8DC0
#define GL_SAMPLER_1D_ARRAY_EXT                                                    0x8DC0
#define GL_SAMPLER_2D_ARRAY                                                        0x8DC1
#define GL_SAMPLER_2D_ARRAY_EXT                                                    0x8DC1
#define GL_SAMPLER_BUFFER                                                          0x8DC2
#define GL_SAMPLER_BUFFER_EXT                                                      0x8DC2
#define GL_SAMPLER_BUFFER_OES                                                      0x8DC2
#define GL_SAMPLER_1D_ARRAY_SHADOW                                                 0x8DC3
#define GL_SAMPLER_1D_ARRAY_SHADOW_EXT                                             0x8DC3
#define GL_SAMPLER_2D_ARRAY_SHADOW                                                 0x8DC4
#define GL_SAMPLER_2D_ARRAY_SHADOW_EXT                                             0x8DC4
#define GL_SAMPLER_2D_ARRAY_SHADOW_NV                                              0x8DC4
#define GL_SAMPLER_CUBE_SHADOW                                                     0x8DC5
#define GL_SAMPLER_CUBE_SHADOW_EXT                                                 0x8DC5
#define GL_SAMPLER_CUBE_SHADOW_NV                                                  0x8DC5
#define GL_UNSIGNED_INT_VEC2                                                       0x8DC6
#define GL_UNSIGNED_INT_VEC2_EXT                                                   0x8DC6
#define GL_UNSIGNED_INT_VEC3                                                       0x8DC7
#define GL_UNSIGNED_INT_VEC3_EXT                                                   0x8DC7
#define GL_UNSIGNED_INT_VEC4                                                       0x8DC8
#define GL_UNSIGNED_INT_VEC4_EXT                                                   0x8DC8
#define GL_INT_SAMPLER_1D                                                          0x8DC9
#define GL_INT_SAMPLER_1D_EXT                                                      0x8DC9
#define GL_INT_SAMPLER_2D                                                          0x8DCA
#define GL_INT_SAMPLER_2D_EXT                                                      0x8DCA
#define GL_INT_SAMPLER_3D                                                          0x8DCB
#define GL_INT_SAMPLER_3D_EXT                                                      0x8DCB
#define GL_INT_SAMPLER_CUBE                                                        0x8DCC
#define GL_INT_SAMPLER_CUBE_EXT                                                    0x8DCC
#define GL_INT_SAMPLER_2D_RECT                                                     0x8DCD
#define GL_INT_SAMPLER_2D_RECT_EXT                                                 0x8DCD
#define GL_INT_SAMPLER_1D_ARRAY                                                    0x8DCE
#define GL_INT_SAMPLER_1D_ARRAY_EXT                                                0x8DCE
#define GL_INT_SAMPLER_2D_ARRAY                                                    0x8DCF
#define GL_INT_SAMPLER_2D_ARRAY_EXT                                                0x8DCF
#define GL_INT_SAMPLER_BUFFER                                                      0x8DD0
#define GL_INT_SAMPLER_BUFFER_EXT                                                  0x8DD0
#define GL_INT_SAMPLER_BUFFER_OES                                                  0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_1D                                                 0x8DD1
#define GL_UNSIGNED_INT_SAMPLER_1D_EXT                                             0x8DD1
#define GL_UNSIGNED_INT_SAMPLER_2D                                                 0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_2D_EXT                                             0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D                                                 0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_3D_EXT                                             0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE                                               0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_CUBE_EXT                                           0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT                                            0x8DD5
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT_EXT                                        0x8DD5
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY                                           0x8DD6
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY_EXT                                       0x8DD6
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY                                           0x8DD7
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY_EXT                                       0x8DD7
#define GL_UNSIGNED_INT_SAMPLER_BUFFER                                             0x8DD8
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT                                         0x8DD8
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_OES                                         0x8DD8
#define GL_GEOMETRY_SHADER                                                         0x8DD9
#define GL_GEOMETRY_SHADER_ARB                                                     0x8DD9
#define GL_GEOMETRY_SHADER_EXT                                                     0x8DD9
#define GL_GEOMETRY_SHADER_OES                                                     0x8DD9
#define GL_GEOMETRY_VERTICES_OUT_ARB                                               0x8DDA
#define GL_GEOMETRY_VERTICES_OUT_EXT                                               0x8DDA
#define GL_GEOMETRY_INPUT_TYPE_ARB                                                 0x8DDB
#define GL_GEOMETRY_INPUT_TYPE_EXT                                                 0x8DDB
#define GL_GEOMETRY_OUTPUT_TYPE_ARB                                                0x8DDC
#define GL_GEOMETRY_OUTPUT_TYPE_EXT                                                0x8DDC
#define GL_MAX_GEOMETRY_VARYING_COMPONENTS_ARB                                     0x8DDD
#define GL_MAX_GEOMETRY_VARYING_COMPONENTS_EXT                                     0x8DDD
#define GL_MAX_VERTEX_VARYING_COMPONENTS_ARB                                       0x8DDE
#define GL_MAX_VERTEX_VARYING_COMPONENTS_EXT                                       0x8DDE
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS                                         0x8DDF
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_ARB                                     0x8DDF
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT                                     0x8DDF
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_OES                                     0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES                                            0x8DE0
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_ARB                                        0x8DE0
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT                                        0x8DE0
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_OES                                        0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS                                    0x8DE1
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_ARB                                0x8DE1
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT                                0x8DE1
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_OES                                0x8DE1
#define GL_MAX_VERTEX_BINDABLE_UNIFORMS_EXT                                        0x8DE2
#define GL_MAX_FRAGMENT_BINDABLE_UNIFORMS_EXT                                      0x8DE3
#define GL_MAX_GEOMETRY_BINDABLE_UNIFORMS_EXT                                      0x8DE4
#define GL_ACTIVE_SUBROUTINES                                                      0x8DE5
#define GL_ACTIVE_SUBROUTINE_UNIFORMS                                              0x8DE6
#define GL_MAX_SUBROUTINES                                                         0x8DE7
#define GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS                                        0x8DE8
#define GL_NAMED_STRING_LENGTH_ARB                                                 0x8DE9
#define GL_NAMED_STRING_TYPE_ARB                                                   0x8DEA
#define GL_MAX_BINDABLE_UNIFORM_SIZE_EXT                                           0x8DED
#define GL_UNIFORM_BUFFER_EXT                                                      0x8DEE
#define GL_UNIFORM_BUFFER_BINDING_EXT                                              0x8DEF
#define GL_LOW_FLOAT                                                               0x8DF0
#define GL_MEDIUM_FLOAT                                                            0x8DF1
#define GL_HIGH_FLOAT                                                              0x8DF2
#define GL_LOW_INT                                                                 0x8DF3
#define GL_MEDIUM_INT                                                              0x8DF4
#define GL_HIGH_INT                                                                0x8DF5
#define GL_UNSIGNED_INT_10_10_10_2_OES                                             0x8DF6
#define GL_INT_10_10_10_2_OES                                                      0x8DF7
#define GL_SHADER_BINARY_FORMATS                                                   0x8DF8
#define GL_NUM_SHADER_BINARY_FORMATS                                               0x8DF9
#define GL_SHADER_COMPILER                                                         0x8DFA
#define GL_MAX_VERTEX_UNIFORM_VECTORS                                              0x8DFB
#define GL_MAX_VARYING_VECTORS                                                     0x8DFC
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS                                            0x8DFD
#define GL_RENDERBUFFER_COLOR_SAMPLES_NV                                           0x8E10
#define GL_MAX_MULTISAMPLE_COVERAGE_MODES_NV                                       0x8E11
#define GL_MULTISAMPLE_COVERAGE_MODES_NV                                           0x8E12
#define GL_QUERY_WAIT                                                              0x8E13
#define GL_QUERY_WAIT_NV                                                           0x8E13
#define GL_QUERY_NO_WAIT                                                           0x8E14
#define GL_QUERY_NO_WAIT_NV                                                        0x8E14
#define GL_QUERY_BY_REGION_WAIT                                                    0x8E15
#define GL_QUERY_BY_REGION_WAIT_NV                                                 0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT                                                 0x8E16
#define GL_QUERY_BY_REGION_NO_WAIT_NV                                              0x8E16
#define GL_QUERY_WAIT_INVERTED                                                     0x8E17
#define GL_QUERY_NO_WAIT_INVERTED                                                  0x8E18
#define GL_QUERY_BY_REGION_WAIT_INVERTED                                           0x8E19
#define GL_QUERY_BY_REGION_NO_WAIT_INVERTED                                        0x8E1A
#define GL_POLYGON_OFFSET_CLAMP                                                    0x8E1B
#define GL_POLYGON_OFFSET_CLAMP_EXT                                                0x8E1B
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS                            0x8E1E
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_EXT                        0x8E1E
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_OES                        0x8E1E
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS                         0x8E1F
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT                     0x8E1F
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_OES                     0x8E1F
#define GL_COLOR_SAMPLES_NV                                                        0x8E20
#define GL_TRANSFORM_FEEDBACK                                                      0x8E22
#define GL_TRANSFORM_FEEDBACK_NV                                                   0x8E22
#define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED                                        0x8E23
#define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED_NV                                     0x8E23
#define GL_TRANSFORM_FEEDBACK_PAUSED                                               0x8E23
#define GL_TRANSFORM_FEEDBACK_ACTIVE                                               0x8E24
#define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE                                        0x8E24
#define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE_NV                                     0x8E24
#define GL_TRANSFORM_FEEDBACK_BINDING                                              0x8E25
#define GL_TRANSFORM_FEEDBACK_BINDING_NV                                           0x8E25
#define GL_FRAME_NV                                                                0x8E26
#define GL_FIELDS_NV                                                               0x8E27
#define GL_CURRENT_TIME_NV                                                         0x8E28
#define GL_TIMESTAMP                                                               0x8E28
#define GL_TIMESTAMP_EXT                                                           0x8E28
#define GL_NUM_FILL_STREAMS_NV                                                     0x8E29
#define GL_PRESENT_TIME_NV                                                         0x8E2A
#define GL_PRESENT_DURATION_NV                                                     0x8E2B
#define GL_DEPTH_COMPONENT16_NONLINEAR_NV                                          0x8E2C
#define GL_PROGRAM_MATRIX_EXT                                                      0x8E2D
#define GL_TRANSPOSE_PROGRAM_MATRIX_EXT                                            0x8E2E
#define GL_PROGRAM_MATRIX_STACK_DEPTH_EXT                                          0x8E2F
#define GL_TEXTURE_SWIZZLE_R                                                       0x8E42
#define GL_TEXTURE_SWIZZLE_R_EXT                                                   0x8E42
#define GL_TEXTURE_SWIZZLE_G                                                       0x8E43
#define GL_TEXTURE_SWIZZLE_G_EXT                                                   0x8E43
#define GL_TEXTURE_SWIZZLE_B                                                       0x8E44
#define GL_TEXTURE_SWIZZLE_B_EXT                                                   0x8E44
#define GL_TEXTURE_SWIZZLE_A                                                       0x8E45
#define GL_TEXTURE_SWIZZLE_A_EXT                                                   0x8E45
#define GL_TEXTURE_SWIZZLE_RGBA                                                    0x8E46
#define GL_TEXTURE_SWIZZLE_RGBA_EXT                                                0x8E46
#define GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS                                     0x8E47
#define GL_ACTIVE_SUBROUTINE_MAX_LENGTH                                            0x8E48
#define GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH                                    0x8E49
#define GL_NUM_COMPATIBLE_SUBROUTINES                                              0x8E4A
#define GL_COMPATIBLE_SUBROUTINES                                                  0x8E4B
#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION                                0x8E4C
#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION_EXT                            0x8E4C
#define GL_FIRST_VERTEX_CONVENTION                                                 0x8E4D
#define GL_FIRST_VERTEX_CONVENTION_EXT                                             0x8E4D
#define GL_FIRST_VERTEX_CONVENTION_OES                                             0x8E4D
#define GL_LAST_VERTEX_CONVENTION                                                  0x8E4E
#define GL_LAST_VERTEX_CONVENTION_EXT                                              0x8E4E
#define GL_LAST_VERTEX_CONVENTION_OES                                              0x8E4E
#define GL_PROVOKING_VERTEX                                                        0x8E4F
#define GL_PROVOKING_VERTEX_EXT                                                    0x8E4F
#define GL_SAMPLE_LOCATION_ARB                                                     0x8E50
#define GL_SAMPLE_LOCATION_NV                                                      0x8E50
#define GL_SAMPLE_POSITION                                                         0x8E50
#define GL_SAMPLE_POSITION_NV                                                      0x8E50
#define GL_SAMPLE_MASK                                                             0x8E51
#define GL_SAMPLE_MASK_NV                                                          0x8E51
#define GL_SAMPLE_MASK_VALUE                                                       0x8E52
#define GL_SAMPLE_MASK_VALUE_NV                                                    0x8E52
#define GL_TEXTURE_BINDING_RENDERBUFFER_NV                                         0x8E53
#define GL_TEXTURE_RENDERBUFFER_DATA_STORE_BINDING_NV                              0x8E54
#define GL_TEXTURE_RENDERBUFFER_NV                                                 0x8E55
#define GL_SAMPLER_RENDERBUFFER_NV                                                 0x8E56
#define GL_INT_SAMPLER_RENDERBUFFER_NV                                             0x8E57
#define GL_UNSIGNED_INT_SAMPLER_RENDERBUFFER_NV                                    0x8E58
#define GL_MAX_SAMPLE_MASK_WORDS                                                   0x8E59
#define GL_MAX_SAMPLE_MASK_WORDS_NV                                                0x8E59
#define GL_MAX_GEOMETRY_PROGRAM_INVOCATIONS_NV                                     0x8E5A
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS                                         0x8E5A
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT                                     0x8E5A
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS_OES                                     0x8E5A
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET                                       0x8E5B
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_NV                                    0x8E5B
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES                                   0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET                                       0x8E5C
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_NV                                    0x8E5C
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES                                   0x8E5C
#define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS                                      0x8E5D
#define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES                                  0x8E5D
#define GL_FRAGMENT_PROGRAM_INTERPOLATION_OFFSET_BITS_NV                           0x8E5D
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET                                       0x8E5E
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_ARB                                   0x8E5E
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_NV                                    0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET                                       0x8E5F
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_ARB                                   0x8E5F
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_NV                                    0x8E5F
#define GL_MAX_TRANSFORM_FEEDBACK_BUFFERS                                          0x8E70
#define GL_MAX_VERTEX_STREAMS                                                      0x8E71
#define GL_PATCH_VERTICES                                                          0x8E72
#define GL_PATCH_VERTICES_EXT                                                      0x8E72
#define GL_PATCH_VERTICES_OES                                                      0x8E72
#define GL_PATCH_DEFAULT_INNER_LEVEL                                               0x8E73
#define GL_PATCH_DEFAULT_INNER_LEVEL_EXT                                           0x8E73
#define GL_PATCH_DEFAULT_OUTER_LEVEL                                               0x8E74
#define GL_PATCH_DEFAULT_OUTER_LEVEL_EXT                                           0x8E74
#define GL_TESS_CONTROL_OUTPUT_VERTICES                                            0x8E75
#define GL_TESS_CONTROL_OUTPUT_VERTICES_EXT                                        0x8E75
#define GL_TESS_CONTROL_OUTPUT_VERTICES_OES                                        0x8E75
#define GL_TESS_GEN_MODE                                                           0x8E76
#define GL_TESS_GEN_MODE_EXT                                                       0x8E76
#define GL_TESS_GEN_MODE_OES                                                       0x8E76
#define GL_TESS_GEN_SPACING                                                        0x8E77
#define GL_TESS_GEN_SPACING_EXT                                                    0x8E77
#define GL_TESS_GEN_SPACING_OES                                                    0x8E77
#define GL_TESS_GEN_VERTEX_ORDER                                                   0x8E78
#define GL_TESS_GEN_VERTEX_ORDER_EXT                                               0x8E78
#define GL_TESS_GEN_VERTEX_ORDER_OES                                               0x8E78
#define GL_TESS_GEN_POINT_MODE                                                     0x8E79
#define GL_TESS_GEN_POINT_MODE_EXT                                                 0x8E79
#define GL_TESS_GEN_POINT_MODE_OES                                                 0x8E79
#define GL_ISOLINES                                                                0x8E7A
#define GL_ISOLINES_EXT                                                            0x8E7A
#define GL_ISOLINES_OES                                                            0x8E7A
#define GL_FRACTIONAL_ODD                                                          0x8E7B
#define GL_FRACTIONAL_ODD_EXT                                                      0x8E7B
#define GL_FRACTIONAL_ODD_OES                                                      0x8E7B
#define GL_FRACTIONAL_EVEN                                                         0x8E7C
#define GL_FRACTIONAL_EVEN_EXT                                                     0x8E7C
#define GL_FRACTIONAL_EVEN_OES                                                     0x8E7C
#define GL_MAX_PATCH_VERTICES                                                      0x8E7D
#define GL_MAX_PATCH_VERTICES_EXT                                                  0x8E7D
#define GL_MAX_PATCH_VERTICES_OES                                                  0x8E7D
#define GL_MAX_TESS_GEN_LEVEL                                                      0x8E7E
#define GL_MAX_TESS_GEN_LEVEL_EXT                                                  0x8E7E
#define GL_MAX_TESS_GEN_LEVEL_OES                                                  0x8E7E
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS                                     0x8E7F
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_EXT                                 0x8E7F
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_OES                                 0x8E7F
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS                                  0x8E80
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT                              0x8E80
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_OES                              0x8E80
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS                                    0x8E81
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_EXT                                0x8E81
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_OES                                0x8E81
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS                                 0x8E82
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_EXT                             0x8E82
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_OES                             0x8E82
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS                                      0x8E83
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT                                  0x8E83
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_OES                                  0x8E83
#define GL_MAX_TESS_PATCH_COMPONENTS                                               0x8E84
#define GL_MAX_TESS_PATCH_COMPONENTS_EXT                                           0x8E84
#define GL_MAX_TESS_PATCH_COMPONENTS_OES                                           0x8E84
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS                                0x8E85
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_EXT                            0x8E85
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_OES                            0x8E85
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS                                   0x8E86
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT                               0x8E86
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_OES                               0x8E86
#define GL_TESS_EVALUATION_SHADER                                                  0x8E87
#define GL_TESS_EVALUATION_SHADER_EXT                                              0x8E87
#define GL_TESS_EVALUATION_SHADER_OES                                              0x8E87
#define GL_TESS_CONTROL_SHADER                                                     0x8E88
#define GL_TESS_CONTROL_SHADER_EXT                                                 0x8E88
#define GL_TESS_CONTROL_SHADER_OES                                                 0x8E88
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS                                         0x8E89
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_EXT                                     0x8E89
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_OES                                     0x8E89
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS                                      0x8E8A
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_EXT                                  0x8E8A
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_OES                                  0x8E8A
#define GL_COMPRESSED_RGBA_BPTC_UNORM                                              0x8E8C
#define GL_COMPRESSED_RGBA_BPTC_UNORM_ARB                                          0x8E8C
#define GL_COMPRESSED_RGBA_BPTC_UNORM_EXT                                          0x8E8C
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM                                        0x8E8D
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB                                    0x8E8D
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT                                    0x8E8D
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT                                        0x8E8E
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB                                    0x8E8E
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT                                    0x8E8E
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT                                      0x8E8F
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB                                  0x8E8F
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT                                  0x8E8F
#define GL_COVERAGE_COMPONENT_NV                                                   0x8ED0
#define GL_COVERAGE_COMPONENT4_NV                                                  0x8ED1
#define GL_COVERAGE_ATTACHMENT_NV                                                  0x8ED2
#define GL_COVERAGE_BUFFERS_NV                                                     0x8ED3
#define GL_COVERAGE_SAMPLES_NV                                                     0x8ED4
#define GL_COVERAGE_ALL_FRAGMENTS_NV                                               0x8ED5
#define GL_COVERAGE_EDGE_FRAGMENTS_NV                                              0x8ED6
#define GL_COVERAGE_AUTOMATIC_NV                                                   0x8ED7
#define GL_INCLUSIVE_EXT                                                           0x8F10
#define GL_EXCLUSIVE_EXT                                                           0x8F11
#define GL_WINDOW_RECTANGLE_EXT                                                    0x8F12
#define GL_WINDOW_RECTANGLE_MODE_EXT                                               0x8F13
#define GL_MAX_WINDOW_RECTANGLES_EXT                                               0x8F14
#define GL_NUM_WINDOW_RECTANGLES_EXT                                               0x8F15
#define GL_BUFFER_GPU_ADDRESS_NV                                                   0x8F1D
#define GL_VERTEX_ATTRIB_ARRAY_UNIFIED_NV                                          0x8F1E
#define GL_ELEMENT_ARRAY_UNIFIED_NV                                                0x8F1F
#define GL_VERTEX_ATTRIB_ARRAY_ADDRESS_NV                                          0x8F20
#define GL_VERTEX_ARRAY_ADDRESS_NV                                                 0x8F21
#define GL_NORMAL_ARRAY_ADDRESS_NV                                                 0x8F22
#define GL_COLOR_ARRAY_ADDRESS_NV                                                  0x8F23
#define GL_INDEX_ARRAY_ADDRESS_NV                                                  0x8F24
#define GL_TEXTURE_COORD_ARRAY_ADDRESS_NV                                          0x8F25
#define GL_EDGE_FLAG_ARRAY_ADDRESS_NV                                              0x8F26
#define GL_SECONDARY_COLOR_ARRAY_ADDRESS_NV                                        0x8F27
#define GL_FOG_COORD_ARRAY_ADDRESS_NV                                              0x8F28
#define GL_ELEMENT_ARRAY_ADDRESS_NV                                                0x8F29
#define GL_VERTEX_ATTRIB_ARRAY_LENGTH_NV                                           0x8F2A
#define GL_VERTEX_ARRAY_LENGTH_NV                                                  0x8F2B
#define GL_NORMAL_ARRAY_LENGTH_NV                                                  0x8F2C
#define GL_COLOR_ARRAY_LENGTH_NV                                                   0x8F2D
#define GL_INDEX_ARRAY_LENGTH_NV                                                   0x8F2E
#define GL_TEXTURE_COORD_ARRAY_LENGTH_NV                                           0x8F2F
#define GL_EDGE_FLAG_ARRAY_LENGTH_NV                                               0x8F30
#define GL_SECONDARY_COLOR_ARRAY_LENGTH_NV                                         0x8F31
#define GL_FOG_COORD_ARRAY_LENGTH_NV                                               0x8F32
#define GL_ELEMENT_ARRAY_LENGTH_NV                                                 0x8F33
#define GL_GPU_ADDRESS_NV                                                          0x8F34
#define GL_MAX_SHADER_BUFFER_ADDRESS_NV                                            0x8F35
#define GL_COPY_READ_BUFFER                                                        0x8F36
#define GL_COPY_READ_BUFFER_BINDING                                                0x8F36
#define GL_COPY_READ_BUFFER_NV                                                     0x8F36
#define GL_COPY_WRITE_BUFFER                                                       0x8F37
#define GL_COPY_WRITE_BUFFER_BINDING                                               0x8F37
#define GL_COPY_WRITE_BUFFER_NV                                                    0x8F37
#define GL_MAX_IMAGE_UNITS                                                         0x8F38
#define GL_MAX_IMAGE_UNITS_EXT                                                     0x8F38
#define GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS                           0x8F39
#define GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS_EXT                       0x8F39
#define GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES                                    0x8F39
#define GL_IMAGE_BINDING_NAME                                                      0x8F3A
#define GL_IMAGE_BINDING_NAME_EXT                                                  0x8F3A
#define GL_IMAGE_BINDING_LEVEL                                                     0x8F3B
#define GL_IMAGE_BINDING_LEVEL_EXT                                                 0x8F3B
#define GL_IMAGE_BINDING_LAYERED                                                   0x8F3C
#define GL_IMAGE_BINDING_LAYERED_EXT                                               0x8F3C
#define GL_IMAGE_BINDING_LAYER                                                     0x8F3D
#define GL_IMAGE_BINDING_LAYER_EXT                                                 0x8F3D
#define GL_IMAGE_BINDING_ACCESS                                                    0x8F3E
#define GL_IMAGE_BINDING_ACCESS_EXT                                                0x8F3E
#define GL_DRAW_INDIRECT_BUFFER                                                    0x8F3F
#define GL_DRAW_INDIRECT_UNIFIED_NV                                                0x8F40
#define GL_DRAW_INDIRECT_ADDRESS_NV                                                0x8F41
#define GL_DRAW_INDIRECT_LENGTH_NV                                                 0x8F42
#define GL_DRAW_INDIRECT_BUFFER_BINDING                                            0x8F43
#define GL_MAX_PROGRAM_SUBROUTINE_PARAMETERS_NV                                    0x8F44
#define GL_MAX_PROGRAM_SUBROUTINE_NUM_NV                                           0x8F45
#define GL_DOUBLE_MAT2                                                             0x8F46
#define GL_DOUBLE_MAT2_EXT                                                         0x8F46
#define GL_DOUBLE_MAT3                                                             0x8F47
#define GL_DOUBLE_MAT3_EXT                                                         0x8F47
#define GL_DOUBLE_MAT4                                                             0x8F48
#define GL_DOUBLE_MAT4_EXT                                                         0x8F48
#define GL_DOUBLE_MAT2x3                                                           0x8F49
#define GL_DOUBLE_MAT2x3_EXT                                                       0x8F49
#define GL_DOUBLE_MAT2x4                                                           0x8F4A
#define GL_DOUBLE_MAT2x4_EXT                                                       0x8F4A
#define GL_DOUBLE_MAT3x2                                                           0x8F4B
#define GL_DOUBLE_MAT3x2_EXT                                                       0x8F4B
#define GL_DOUBLE_MAT3x4                                                           0x8F4C
#define GL_DOUBLE_MAT3x4_EXT                                                       0x8F4C
#define GL_DOUBLE_MAT4x2                                                           0x8F4D
#define GL_DOUBLE_MAT4x2_EXT                                                       0x8F4D
#define GL_DOUBLE_MAT4x3                                                           0x8F4E
#define GL_DOUBLE_MAT4x3_EXT                                                       0x8F4E
#define GL_VERTEX_BINDING_BUFFER                                                   0x8F4F
#define GL_MALI_SHADER_BINARY_ARM                                                  0x8F60
#define GL_MALI_PROGRAM_BINARY_ARM                                                 0x8F61
#define GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_FAST_SIZE_EXT                            0x8F63
#define GL_SHADER_PIXEL_LOCAL_STORAGE_EXT                                          0x8F64
#define GL_FETCH_PER_SAMPLE_ARM                                                    0x8F65
#define GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM                               0x8F66
#define GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_SIZE_EXT                                 0x8F67
#define GL_TEXTURE_ASTC_DECODE_PRECISION_EXT                                       0x8F69
#define GL_RED_SNORM                                                               0x8F90
#define GL_RG_SNORM                                                                0x8F91
#define GL_RGB_SNORM                                                               0x8F92
#define GL_RGBA_SNORM                                                              0x8F93
#define GL_R8_SNORM                                                                0x8F94
#define GL_RG8_SNORM                                                               0x8F95
#define GL_RGB8_SNORM                                                              0x8F96
#define GL_RGBA8_SNORM                                                             0x8F97
#define GL_R16_SNORM                                                               0x8F98
#define GL_R16_SNORM_EXT                                                           0x8F98
#define GL_RG16_SNORM                                                              0x8F99
#define GL_RG16_SNORM_EXT                                                          0x8F99
#define GL_RGB16_SNORM                                                             0x8F9A
#define GL_RGB16_SNORM_EXT                                                         0x8F9A
#define GL_RGBA16_SNORM                                                            0x8F9B
#define GL_RGBA16_SNORM_EXT                                                        0x8F9B
#define GL_SIGNED_NORMALIZED                                                       0x8F9C
#define GL_PRIMITIVE_RESTART                                                       0x8F9D
#define GL_PRIMITIVE_RESTART_INDEX                                                 0x8F9E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_COMPONENTS_ARB                               0x8F9F
#define GL_PERFMON_GLOBAL_MODE_QCOM                                                0x8FA0
#define GL_BINNING_CONTROL_HINT_QCOM                                               0x8FB0
#define GL_CPU_OPTIMIZED_QCOM                                                      0x8FB1
#define GL_GPU_OPTIMIZED_QCOM                                                      0x8FB2
#define GL_RENDER_DIRECT_TO_FRAMEBUFFER_QCOM                                       0x8FB3
#define GL_GPU_DISJOINT_EXT                                                        0x8FBB
#define GL_SR8_EXT                                                                 0x8FBD
#define GL_SRG8_EXT                                                                0x8FBE
#define GL_SHADER_BINARY_VIV                                                       0x8FC4
#define GL_INT8_NV                                                                 0x8FE0
#define GL_INT8_VEC2_NV                                                            0x8FE1
#define GL_INT8_VEC3_NV                                                            0x8FE2
#define GL_INT8_VEC4_NV                                                            0x8FE3
#define GL_INT16_NV                                                                0x8FE4
#define GL_INT16_VEC2_NV                                                           0x8FE5
#define GL_INT16_VEC3_NV                                                           0x8FE6
#define GL_INT16_VEC4_NV                                                           0x8FE7
#define GL_INT64_VEC2_ARB                                                          0x8FE9
#define GL_INT64_VEC2_NV                                                           0x8FE9
#define GL_INT64_VEC3_ARB                                                          0x8FEA
#define GL_INT64_VEC3_NV                                                           0x8FEA
#define GL_INT64_VEC4_ARB                                                          0x8FEB
#define GL_INT64_VEC4_NV                                                           0x8FEB
#define GL_UNSIGNED_INT8_NV                                                        0x8FEC
#define GL_UNSIGNED_INT8_VEC2_NV                                                   0x8FED
#define GL_UNSIGNED_INT8_VEC3_NV                                                   0x8FEE
#define GL_UNSIGNED_INT8_VEC4_NV                                                   0x8FEF
#define GL_UNSIGNED_INT16_NV                                                       0x8FF0
#define GL_UNSIGNED_INT16_VEC2_NV                                                  0x8FF1
#define GL_UNSIGNED_INT16_VEC3_NV                                                  0x8FF2
#define GL_UNSIGNED_INT16_VEC4_NV                                                  0x8FF3
#define GL_UNSIGNED_INT64_VEC2_ARB                                                 0x8FF5
#define GL_UNSIGNED_INT64_VEC2_NV                                                  0x8FF5
#define GL_UNSIGNED_INT64_VEC3_ARB                                                 0x8FF6
#define GL_UNSIGNED_INT64_VEC3_NV                                                  0x8FF6
#define GL_UNSIGNED_INT64_VEC4_ARB                                                 0x8FF7
#define GL_UNSIGNED_INT64_VEC4_NV                                                  0x8FF7
#define GL_FLOAT16_NV                                                              0x8FF8
#define GL_FLOAT16_VEC2_NV                                                         0x8FF9
#define GL_FLOAT16_VEC3_NV                                                         0x8FFA
#define GL_FLOAT16_VEC4_NV                                                         0x8FFB
#define GL_DOUBLE_VEC2                                                             0x8FFC
#define GL_DOUBLE_VEC2_EXT                                                         0x8FFC
#define GL_DOUBLE_VEC3                                                             0x8FFD
#define GL_DOUBLE_VEC3_EXT                                                         0x8FFD
#define GL_DOUBLE_VEC4                                                             0x8FFE
#define GL_DOUBLE_VEC4_EXT                                                         0x8FFE
#define GL_SAMPLER_BUFFER_AMD                                                      0x9001
#define GL_INT_SAMPLER_BUFFER_AMD                                                  0x9002
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_AMD                                         0x9003
#define GL_TESSELLATION_MODE_AMD                                                   0x9004
#define GL_TESSELLATION_FACTOR_AMD                                                 0x9005
#define GL_DISCRETE_AMD                                                            0x9006
#define GL_CONTINUOUS_AMD                                                          0x9007
#define GL_TEXTURE_CUBE_MAP_ARRAY                                                  0x9009
#define GL_TEXTURE_CUBE_MAP_ARRAY_ARB                                              0x9009
#define GL_TEXTURE_CUBE_MAP_ARRAY_EXT                                              0x9009
#define GL_TEXTURE_CUBE_MAP_ARRAY_OES                                              0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY                                          0x900A
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_ARB                                      0x900A
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT                                      0x900A
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_OES                                      0x900A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY                                            0x900B
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY_ARB                                        0x900B
#define GL_SAMPLER_CUBE_MAP_ARRAY                                                  0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_ARB                                              0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_EXT                                              0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_OES                                              0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW                                           0x900D
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_ARB                                       0x900D
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT                                       0x900D
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_OES                                       0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY                                              0x900E
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_ARB                                          0x900E
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT                                          0x900E
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_OES                                          0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY                                     0x900F
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_ARB                                 0x900F
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT                                 0x900F
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_OES                                 0x900F
#define GL_ALPHA_SNORM                                                             0x9010
#define GL_LUMINANCE_SNORM                                                         0x9011
#define GL_LUMINANCE_ALPHA_SNORM                                                   0x9012
#define GL_INTENSITY_SNORM                                                         0x9013
#define GL_ALPHA8_SNORM                                                            0x9014
#define GL_LUMINANCE8_SNORM                                                        0x9015
#define GL_LUMINANCE8_ALPHA8_SNORM                                                 0x9016
#define GL_INTENSITY8_SNORM                                                        0x9017
#define GL_ALPHA16_SNORM                                                           0x9018
#define GL_LUMINANCE16_SNORM                                                       0x9019
#define GL_LUMINANCE16_ALPHA16_SNORM                                               0x901A
#define GL_INTENSITY16_SNORM                                                       0x901B
#define GL_FACTOR_MIN_AMD                                                          0x901C
#define GL_FACTOR_MAX_AMD                                                          0x901D
#define GL_DEPTH_CLAMP_NEAR_AMD                                                    0x901E
#define GL_DEPTH_CLAMP_FAR_AMD                                                     0x901F
#define GL_VIDEO_BUFFER_NV                                                         0x9020
#define GL_VIDEO_BUFFER_BINDING_NV                                                 0x9021
#define GL_FIELD_UPPER_NV                                                          0x9022
#define GL_FIELD_LOWER_NV                                                          0x9023
#define GL_NUM_VIDEO_CAPTURE_STREAMS_NV                                            0x9024
#define GL_NEXT_VIDEO_CAPTURE_BUFFER_STATUS_NV                                     0x9025
#define GL_VIDEO_CAPTURE_TO_422_SUPPORTED_NV                                       0x9026
#define GL_LAST_VIDEO_CAPTURE_STATUS_NV                                            0x9027
#define GL_VIDEO_BUFFER_PITCH_NV                                                   0x9028
#define GL_VIDEO_COLOR_CONVERSION_MATRIX_NV                                        0x9029
#define GL_VIDEO_COLOR_CONVERSION_MAX_NV                                           0x902A
#define GL_VIDEO_COLOR_CONVERSION_MIN_NV                                           0x902B
#define GL_VIDEO_COLOR_CONVERSION_OFFSET_NV                                        0x902C
#define GL_VIDEO_BUFFER_INTERNAL_FORMAT_NV                                         0x902D
#define GL_PARTIAL_SUCCESS_NV                                                      0x902E
#define GL_SUCCESS_NV                                                              0x902F
#define GL_FAILURE_NV                                                              0x9030
#define GL_YCBYCR8_422_NV                                                          0x9031
#define GL_YCBAYCR8A_4224_NV                                                       0x9032
#define GL_Z6Y10Z6CB10Z6Y10Z6CR10_422_NV                                           0x9033
#define GL_Z6Y10Z6CB10Z6A10Z6Y10Z6CR10Z6A10_4224_NV                                0x9034
#define GL_Z4Y12Z4CB12Z4Y12Z4CR12_422_NV                                           0x9035
#define GL_Z4Y12Z4CB12Z4A12Z4Y12Z4CR12Z4A12_4224_NV                                0x9036
#define GL_Z4Y12Z4CB12Z4CR12_444_NV                                                0x9037
#define GL_VIDEO_CAPTURE_FRAME_WIDTH_NV                                            0x9038
#define GL_VIDEO_CAPTURE_FRAME_HEIGHT_NV                                           0x9039
#define GL_VIDEO_CAPTURE_FIELD_UPPER_HEIGHT_NV                                     0x903A
#define GL_VIDEO_CAPTURE_FIELD_LOWER_HEIGHT_NV                                     0x903B
#define GL_VIDEO_CAPTURE_SURFACE_ORIGIN_NV                                         0x903C
#define GL_TEXTURE_COVERAGE_SAMPLES_NV                                             0x9045
#define GL_TEXTURE_COLOR_SAMPLES_NV                                                0x9046
#define GL_GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX                                    0x9047
#define GL_GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX                              0x9048
#define GL_GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX                            0x9049
#define GL_GPU_MEMORY_INFO_EVICTION_COUNT_NVX                                      0x904A
#define GL_GPU_MEMORY_INFO_EVICTED_MEMORY_NVX                                      0x904B
#define GL_IMAGE_1D                                                                0x904C
#define GL_IMAGE_1D_EXT                                                            0x904C
#define GL_IMAGE_2D                                                                0x904D
#define GL_IMAGE_2D_EXT                                                            0x904D
#define GL_IMAGE_3D                                                                0x904E
#define GL_IMAGE_3D_EXT                                                            0x904E
#define GL_IMAGE_2D_RECT                                                           0x904F
#define GL_IMAGE_2D_RECT_EXT                                                       0x904F
#define GL_IMAGE_CUBE                                                              0x9050
#define GL_IMAGE_CUBE_EXT                                                          0x9050
#define GL_IMAGE_BUFFER                                                            0x9051
#define GL_IMAGE_BUFFER_EXT                                                        0x9051
#define GL_IMAGE_BUFFER_OES                                                        0x9051
#define GL_IMAGE_1D_ARRAY                                                          0x9052
#define GL_IMAGE_1D_ARRAY_EXT                                                      0x9052
#define GL_IMAGE_2D_ARRAY                                                          0x9053
#define GL_IMAGE_2D_ARRAY_EXT                                                      0x9053
#define GL_IMAGE_CUBE_MAP_ARRAY                                                    0x9054
#define GL_IMAGE_CUBE_MAP_ARRAY_EXT                                                0x9054
#define GL_IMAGE_CUBE_MAP_ARRAY_OES                                                0x9054
#define GL_IMAGE_2D_MULTISAMPLE                                                    0x9055
#define GL_IMAGE_2D_MULTISAMPLE_EXT                                                0x9055
#define GL_IMAGE_2D_MULTISAMPLE_ARRAY                                              0x9056
#define GL_IMAGE_2D_MULTISAMPLE_ARRAY_EXT                                          0x9056
#define GL_INT_IMAGE_1D                                                            0x9057
#define GL_INT_IMAGE_1D_EXT                                                        0x9057
#define GL_INT_IMAGE_2D                                                            0x9058
#define GL_INT_IMAGE_2D_EXT                                                        0x9058
#define GL_INT_IMAGE_3D                                                            0x9059
#define GL_INT_IMAGE_3D_EXT                                                        0x9059
#define GL_INT_IMAGE_2D_RECT                                                       0x905A
#define GL_INT_IMAGE_2D_RECT_EXT                                                   0x905A
#define GL_INT_IMAGE_CUBE                                                          0x905B
#define GL_INT_IMAGE_CUBE_EXT                                                      0x905B
#define GL_INT_IMAGE_BUFFER                                                        0x905C
#define GL_INT_IMAGE_BUFFER_EXT                                                    0x905C
#define GL_INT_IMAGE_BUFFER_OES                                                    0x905C
#define GL_INT_IMAGE_1D_ARRAY                                                      0x905D
#define GL_INT_IMAGE_1D_ARRAY_EXT                                                  0x905D
#define GL_INT_IMAGE_2D_ARRAY                                                      0x905E
#define GL_INT_IMAGE_2D_ARRAY_EXT                                                  0x905E
#define GL_INT_IMAGE_CUBE_MAP_ARRAY                                                0x905F
#define GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT                                            0x905F
#define GL_INT_IMAGE_CUBE_MAP_ARRAY_OES                                            0x905F
#define GL_INT_IMAGE_2D_MULTISAMPLE                                                0x9060
#define GL_INT_IMAGE_2D_MULTISAMPLE_EXT                                            0x9060
#define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY                                          0x9061
#define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT                                      0x9061
#define GL_UNSIGNED_INT_IMAGE_1D                                                   0x9062
#define GL_UNSIGNED_INT_IMAGE_1D_EXT                                               0x9062
#define GL_UNSIGNED_INT_IMAGE_2D                                                   0x9063
#define GL_UNSIGNED_INT_IMAGE_2D_EXT                                               0x9063
#define GL_UNSIGNED_INT_IMAGE_3D                                                   0x9064
#define GL_UNSIGNED_INT_IMAGE_3D_EXT                                               0x9064
#define GL_UNSIGNED_INT_IMAGE_2D_RECT                                              0x9065
#define GL_UNSIGNED_INT_IMAGE_2D_RECT_EXT                                          0x9065
#define GL_UNSIGNED_INT_IMAGE_CUBE                                                 0x9066
#define GL_UNSIGNED_INT_IMAGE_CUBE_EXT                                             0x9066
#define GL_UNSIGNED_INT_IMAGE_BUFFER                                               0x9067
#define GL_UNSIGNED_INT_IMAGE_BUFFER_EXT                                           0x9067
#define GL_UNSIGNED_INT_IMAGE_BUFFER_OES                                           0x9067
#define GL_UNSIGNED_INT_IMAGE_1D_ARRAY                                             0x9068
#define GL_UNSIGNED_INT_IMAGE_1D_ARRAY_EXT                                         0x9068
#define GL_UNSIGNED_INT_IMAGE_2D_ARRAY                                             0x9069
#define GL_UNSIGNED_INT_IMAGE_2D_ARRAY_EXT                                         0x9069
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY                                       0x906A
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT                                   0x906A
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_OES                                   0x906A
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE                                       0x906B
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_EXT                                   0x906B
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY                                 0x906C
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT                             0x906C
#define GL_MAX_IMAGE_SAMPLES                                                       0x906D
#define GL_MAX_IMAGE_SAMPLES_EXT                                                   0x906D
#define GL_IMAGE_BINDING_FORMAT                                                    0x906E
#define GL_IMAGE_BINDING_FORMAT_EXT                                                0x906E
#define GL_RGB10_A2UI                                                              0x906F
#define GL_PATH_FORMAT_SVG_NV                                                      0x9070
#define GL_PATH_FORMAT_PS_NV                                                       0x9071
#define GL_STANDARD_FONT_NAME_NV                                                   0x9072
#define GL_SYSTEM_FONT_NAME_NV                                                     0x9073
#define GL_FILE_NAME_NV                                                            0x9074
#define GL_PATH_STROKE_WIDTH_NV                                                    0x9075
#define GL_PATH_END_CAPS_NV                                                        0x9076
#define GL_PATH_INITIAL_END_CAP_NV                                                 0x9077
#define GL_PATH_TERMINAL_END_CAP_NV                                                0x9078
#define GL_PATH_JOIN_STYLE_NV                                                      0x9079
#define GL_PATH_MITER_LIMIT_NV                                                     0x907A
#define GL_PATH_DASH_CAPS_NV                                                       0x907B
#define GL_PATH_INITIAL_DASH_CAP_NV                                                0x907C
#define GL_PATH_TERMINAL_DASH_CAP_NV                                               0x907D
#define GL_PATH_DASH_OFFSET_NV                                                     0x907E
#define GL_PATH_CLIENT_LENGTH_NV                                                   0x907F
#define GL_PATH_FILL_MODE_NV                                                       0x9080
#define GL_PATH_FILL_MASK_NV                                                       0x9081
#define GL_PATH_FILL_COVER_MODE_NV                                                 0x9082
#define GL_PATH_STROKE_COVER_MODE_NV                                               0x9083
#define GL_PATH_STROKE_MASK_NV                                                     0x9084
#define GL_COUNT_UP_NV                                                             0x9088
#define GL_COUNT_DOWN_NV                                                           0x9089
#define GL_PATH_OBJECT_BOUNDING_BOX_NV                                             0x908A
#define GL_CONVEX_HULL_NV                                                          0x908B
#define GL_BOUNDING_BOX_NV                                                         0x908D
#define GL_TRANSLATE_X_NV                                                          0x908E
#define GL_TRANSLATE_Y_NV                                                          0x908F
#define GL_TRANSLATE_2D_NV                                                         0x9090
#define GL_TRANSLATE_3D_NV                                                         0x9091
#define GL_AFFINE_2D_NV                                                            0x9092
#define GL_AFFINE_3D_NV                                                            0x9094
#define GL_TRANSPOSE_AFFINE_2D_NV                                                  0x9096
#define GL_TRANSPOSE_AFFINE_3D_NV                                                  0x9098
#define GL_UTF8_NV                                                                 0x909A
#define GL_UTF16_NV                                                                0x909B
#define GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV                                       0x909C
#define GL_PATH_COMMAND_COUNT_NV                                                   0x909D
#define GL_PATH_COORD_COUNT_NV                                                     0x909E
#define GL_PATH_DASH_ARRAY_COUNT_NV                                                0x909F
#define GL_PATH_COMPUTED_LENGTH_NV                                                 0x90A0
#define GL_PATH_FILL_BOUNDING_BOX_NV                                               0x90A1
#define GL_PATH_STROKE_BOUNDING_BOX_NV                                             0x90A2
#define GL_SQUARE_NV                                                               0x90A3
#define GL_ROUND_NV                                                                0x90A4
#define GL_TRIANGULAR_NV                                                           0x90A5
#define GL_BEVEL_NV                                                                0x90A6
#define GL_MITER_REVERT_NV                                                         0x90A7
#define GL_MITER_TRUNCATE_NV                                                       0x90A8
#define GL_SKIP_MISSING_GLYPH_NV                                                   0x90A9
#define GL_USE_MISSING_GLYPH_NV                                                    0x90AA
#define GL_PATH_ERROR_POSITION_NV                                                  0x90AB
#define GL_PATH_FOG_GEN_MODE_NV                                                    0x90AC
#define GL_ACCUM_ADJACENT_PAIRS_NV                                                 0x90AD
#define GL_ADJACENT_PAIRS_NV                                                       0x90AE
#define GL_FIRST_TO_REST_NV                                                        0x90AF
#define GL_PATH_GEN_MODE_NV                                                        0x90B0
#define GL_PATH_GEN_COEFF_NV                                                       0x90B1
#define GL_PATH_GEN_COLOR_FORMAT_NV                                                0x90B2
#define GL_PATH_GEN_COMPONENTS_NV                                                  0x90B3
#define GL_PATH_DASH_OFFSET_RESET_NV                                               0x90B4
#define GL_MOVE_TO_RESETS_NV                                                       0x90B5
#define GL_MOVE_TO_CONTINUES_NV                                                    0x90B6
#define GL_PATH_STENCIL_FUNC_NV                                                    0x90B7
#define GL_PATH_STENCIL_REF_NV                                                     0x90B8
#define GL_PATH_STENCIL_VALUE_MASK_NV                                              0x90B9
#define GL_SCALED_RESOLVE_FASTEST_EXT                                              0x90BA
#define GL_SCALED_RESOLVE_NICEST_EXT                                               0x90BB
#define GL_MIN_MAP_BUFFER_ALIGNMENT                                                0x90BC
#define GL_PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV                                     0x90BD
#define GL_PATH_STENCIL_DEPTH_OFFSET_UNITS_NV                                      0x90BE
#define GL_PATH_COVER_DEPTH_FUNC_NV                                                0x90BF
#define GL_IMAGE_FORMAT_COMPATIBILITY_TYPE                                         0x90C7
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE                                      0x90C8
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS                                     0x90C9
#define GL_MAX_VERTEX_IMAGE_UNIFORMS                                               0x90CA
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS                                         0x90CB
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_EXT                                     0x90CB
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_OES                                     0x90CB
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS                                      0x90CC
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_EXT                                  0x90CC
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_OES                                  0x90CC
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS                                             0x90CD
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT                                         0x90CD
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS_OES                                         0x90CD
#define GL_MAX_FRAGMENT_IMAGE_UNIFORMS                                             0x90CE
#define GL_MAX_COMBINED_IMAGE_UNIFORMS                                             0x90CF
#define GL_MAX_DEEP_3D_TEXTURE_WIDTH_HEIGHT_NV                                     0x90D0
#define GL_MAX_DEEP_3D_TEXTURE_DEPTH_NV                                            0x90D1
#define GL_SHADER_STORAGE_BUFFER                                                   0x90D2
#define GL_SHADER_STORAGE_BUFFER_BINDING                                           0x90D3
#define GL_SHADER_STORAGE_BUFFER_START                                             0x90D4
#define GL_SHADER_STORAGE_BUFFER_SIZE                                              0x90D5
#define GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS                                        0x90D6
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS                                      0x90D7
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT                                  0x90D7
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_OES                                  0x90D7
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS                                  0x90D8
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT                              0x90D8
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_OES                              0x90D8
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS                               0x90D9
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT                           0x90D9
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_OES                           0x90D9
#define GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS                                      0x90DA
#define GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS                                       0x90DB
#define GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS                                      0x90DC
#define GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS                                      0x90DD
#define GL_MAX_SHADER_STORAGE_BLOCK_SIZE                                           0x90DE
#define GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT                                  0x90DF
#define GL_SYNC_X11_FENCE_EXT                                                      0x90E1
#define GL_DEPTH_STENCIL_TEXTURE_MODE                                              0x90EA
#define GL_MAX_COMPUTE_FIXED_GROUP_INVOCATIONS_ARB                                 0x90EB
#define GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS                                      0x90EB
#define GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER                              0x90EC
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER                      0x90ED
#define GL_DISPATCH_INDIRECT_BUFFER                                                0x90EE
#define GL_DISPATCH_INDIRECT_BUFFER_BINDING                                        0x90EF
#define GL_COLOR_ATTACHMENT_EXT                                                    0x90F0
#define GL_MULTIVIEW_EXT                                                           0x90F1
#define GL_MAX_MULTIVIEW_BUFFERS_EXT                                               0x90F2
#define GL_CONTEXT_ROBUST_ACCESS                                                   0x90F3
#define GL_CONTEXT_ROBUST_ACCESS_EXT                                               0x90F3
#define GL_CONTEXT_ROBUST_ACCESS_KHR                                               0x90F3
#define GL_COMPUTE_PROGRAM_NV                                                      0x90FB
#define GL_COMPUTE_PROGRAM_PARAMETER_BUFFER_NV                                     0x90FC
#define GL_TEXTURE_2D_MULTISAMPLE                                                  0x9100
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE                                            0x9101
#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY                                            0x9102
#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES                                        0x9102
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY                                      0x9103
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE                                          0x9104
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY                                    0x9105
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY_OES                                0x9105
#define GL_TEXTURE_SAMPLES                                                         0x9106
#define GL_TEXTURE_FIXED_SAMPLE_LOCATIONS                                          0x9107
#define GL_SAMPLER_2D_MULTISAMPLE                                                  0x9108
#define GL_INT_SAMPLER_2D_MULTISAMPLE                                              0x9109
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE                                     0x910A
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY                                            0x910B
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY_OES                                        0x910B
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY                                        0x910C
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES                                    0x910C
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY                               0x910D
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES                           0x910D
#define GL_MAX_COLOR_TEXTURE_SAMPLES                                               0x910E
#define GL_MAX_DEPTH_TEXTURE_SAMPLES                                               0x910F
#define GL_MAX_INTEGER_SAMPLES                                                     0x9110
#define GL_MAX_SERVER_WAIT_TIMEOUT                                                 0x9111
#define GL_MAX_SERVER_WAIT_TIMEOUT_APPLE                                           0x9111
#define GL_OBJECT_TYPE                                                             0x9112
#define GL_OBJECT_TYPE_APPLE                                                       0x9112
#define GL_SYNC_CONDITION                                                          0x9113
#define GL_SYNC_CONDITION_APPLE                                                    0x9113
#define GL_SYNC_STATUS                                                             0x9114
#define GL_SYNC_STATUS_APPLE                                                       0x9114
#define GL_SYNC_FLAGS                                                              0x9115
#define GL_SYNC_FLAGS_APPLE                                                        0x9115
#define GL_SYNC_FENCE                                                              0x9116
#define GL_SYNC_FENCE_APPLE                                                        0x9116
#define GL_SYNC_GPU_COMMANDS_COMPLETE                                              0x9117
#define GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE                                        0x9117
#define GL_UNSIGNALED                                                              0x9118
#define GL_UNSIGNALED_APPLE                                                        0x9118
#define GL_SIGNALED                                                                0x9119
#define GL_SIGNALED_APPLE                                                          0x9119
#define GL_ALREADY_SIGNALED                                                        0x911A
#define GL_ALREADY_SIGNALED_APPLE                                                  0x911A
#define GL_TIMEOUT_EXPIRED                                                         0x911B
#define GL_TIMEOUT_EXPIRED_APPLE                                                   0x911B
#define GL_CONDITION_SATISFIED                                                     0x911C
#define GL_CONDITION_SATISFIED_APPLE                                               0x911C
#define GL_WAIT_FAILED                                                             0x911D
#define GL_WAIT_FAILED_APPLE                                                       0x911D
#define GL_BUFFER_ACCESS_FLAGS                                                     0x911F
#define GL_BUFFER_MAP_LENGTH                                                       0x9120
#define GL_BUFFER_MAP_OFFSET                                                       0x9121
#define GL_MAX_VERTEX_OUTPUT_COMPONENTS                                            0x9122
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS                                           0x9123
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT                                       0x9123
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS_OES                                       0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS                                          0x9124
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT                                      0x9124
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_OES                                      0x9124
#define GL_MAX_FRAGMENT_INPUT_COMPONENTS                                           0x9125
#define GL_CONTEXT_PROFILE_MASK                                                    0x9126
#define GL_UNPACK_COMPRESSED_BLOCK_WIDTH                                           0x9127
#define GL_UNPACK_COMPRESSED_BLOCK_HEIGHT                                          0x9128
#define GL_UNPACK_COMPRESSED_BLOCK_DEPTH                                           0x9129
#define GL_UNPACK_COMPRESSED_BLOCK_SIZE                                            0x912A
#define GL_PACK_COMPRESSED_BLOCK_WIDTH                                             0x912B
#define GL_PACK_COMPRESSED_BLOCK_HEIGHT                                            0x912C
#define GL_PACK_COMPRESSED_BLOCK_DEPTH                                             0x912D
#define GL_PACK_COMPRESSED_BLOCK_SIZE                                              0x912E
#define GL_TEXTURE_IMMUTABLE_FORMAT                                                0x912F
#define GL_TEXTURE_IMMUTABLE_FORMAT_EXT                                            0x912F
#define GL_SGX_PROGRAM_BINARY_IMG                                                  0x9130
#define GL_RENDERBUFFER_SAMPLES_IMG                                                0x9133
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG                                  0x9134
#define GL_MAX_SAMPLES_IMG                                                         0x9135
#define GL_TEXTURE_SAMPLES_IMG                                                     0x9136
#define GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG                                        0x9137
#define GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG                                        0x9138
#define GL_CUBIC_IMG                                                               0x9139
#define GL_CUBIC_MIPMAP_NEAREST_IMG                                                0x913A
#define GL_CUBIC_MIPMAP_LINEAR_IMG                                                 0x913B
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_AND_DOWNSAMPLE_IMG                   0x913C
#define GL_NUM_DOWNSAMPLE_SCALES_IMG                                               0x913D
#define GL_DOWNSAMPLE_SCALES_IMG                                                   0x913E
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SCALE_IMG                                0x913F
#define GL_MAX_DEBUG_MESSAGE_LENGTH                                                0x9143
#define GL_MAX_DEBUG_MESSAGE_LENGTH_AMD                                            0x9143
#define GL_MAX_DEBUG_MESSAGE_LENGTH_ARB                                            0x9143
#define GL_MAX_DEBUG_MESSAGE_LENGTH_KHR                                            0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES                                               0x9144
#define GL_MAX_DEBUG_LOGGED_MESSAGES_AMD                                           0x9144
#define GL_MAX_DEBUG_LOGGED_MESSAGES_ARB                                           0x9144
#define GL_MAX_DEBUG_LOGGED_MESSAGES_KHR                                           0x9144
#define GL_DEBUG_LOGGED_MESSAGES                                                   0x9145
#define GL_DEBUG_LOGGED_MESSAGES_AMD                                               0x9145
#define GL_DEBUG_LOGGED_MESSAGES_ARB                                               0x9145
#define GL_DEBUG_LOGGED_MESSAGES_KHR                                               0x9145
#define GL_DEBUG_SEVERITY_HIGH                                                     0x9146
#define GL_DEBUG_SEVERITY_HIGH_AMD                                                 0x9146
#define GL_DEBUG_SEVERITY_HIGH_ARB                                                 0x9146
#define GL_DEBUG_SEVERITY_HIGH_KHR                                                 0x9146
#define GL_DEBUG_SEVERITY_MEDIUM                                                   0x9147
#define GL_DEBUG_SEVERITY_MEDIUM_AMD                                               0x9147
#define GL_DEBUG_SEVERITY_MEDIUM_ARB                                               0x9147
#define GL_DEBUG_SEVERITY_MEDIUM_KHR                                               0x9147
#define GL_DEBUG_SEVERITY_LOW                                                      0x9148
#define GL_DEBUG_SEVERITY_LOW_AMD                                                  0x9148
#define GL_DEBUG_SEVERITY_LOW_ARB                                                  0x9148
#define GL_DEBUG_SEVERITY_LOW_KHR                                                  0x9148
#define GL_DEBUG_CATEGORY_API_ERROR_AMD                                            0x9149
#define GL_DEBUG_CATEGORY_WINDOW_SYSTEM_AMD                                        0x914A
#define GL_DEBUG_CATEGORY_DEPRECATION_AMD                                          0x914B
#define GL_DEBUG_CATEGORY_UNDEFINED_BEHAVIOR_AMD                                   0x914C
#define GL_DEBUG_CATEGORY_PERFORMANCE_AMD                                          0x914D
#define GL_DEBUG_CATEGORY_SHADER_COMPILER_AMD                                      0x914E
#define GL_DEBUG_CATEGORY_APPLICATION_AMD                                          0x914F
#define GL_DEBUG_CATEGORY_OTHER_AMD                                                0x9150
#define GL_BUFFER_OBJECT_EXT                                                       0x9151
#define GL_DATA_BUFFER_AMD                                                         0x9151
#define GL_PERFORMANCE_MONITOR_AMD                                                 0x9152
#define GL_QUERY_OBJECT_AMD                                                        0x9153
#define GL_QUERY_OBJECT_EXT                                                        0x9153
#define GL_VERTEX_ARRAY_OBJECT_AMD                                                 0x9154
#define GL_VERTEX_ARRAY_OBJECT_EXT                                                 0x9154
#define GL_SAMPLER_OBJECT_AMD                                                      0x9155
#define GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD                                      0x9160
#define GL_QUERY_BUFFER                                                            0x9192
#define GL_QUERY_BUFFER_AMD                                                        0x9192
#define GL_QUERY_BUFFER_BINDING                                                    0x9193
#define GL_QUERY_BUFFER_BINDING_AMD                                                0x9193
#define GL_QUERY_RESULT_NO_WAIT                                                    0x9194
#define GL_QUERY_RESULT_NO_WAIT_AMD                                                0x9194
#define GL_VIRTUAL_PAGE_SIZE_X_AMD                                                 0x9195
#define GL_VIRTUAL_PAGE_SIZE_X_ARB                                                 0x9195
#define GL_VIRTUAL_PAGE_SIZE_X_EXT                                                 0x9195
#define GL_VIRTUAL_PAGE_SIZE_Y_AMD                                                 0x9196
#define GL_VIRTUAL_PAGE_SIZE_Y_ARB                                                 0x9196
#define GL_VIRTUAL_PAGE_SIZE_Y_EXT                                                 0x9196
#define GL_VIRTUAL_PAGE_SIZE_Z_AMD                                                 0x9197
#define GL_VIRTUAL_PAGE_SIZE_Z_ARB                                                 0x9197
#define GL_VIRTUAL_PAGE_SIZE_Z_EXT                                                 0x9197
#define GL_MAX_SPARSE_TEXTURE_SIZE_AMD                                             0x9198
#define GL_MAX_SPARSE_TEXTURE_SIZE_ARB                                             0x9198
#define GL_MAX_SPARSE_TEXTURE_SIZE_EXT                                             0x9198
#define GL_MAX_SPARSE_3D_TEXTURE_SIZE_AMD                                          0x9199
#define GL_MAX_SPARSE_3D_TEXTURE_SIZE_ARB                                          0x9199
#define GL_MAX_SPARSE_3D_TEXTURE_SIZE_EXT                                          0x9199
#define GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS                                         0x919A
#define GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_ARB                                     0x919A
#define GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_EXT                                     0x919A
#define GL_MIN_SPARSE_LEVEL_AMD                                                    0x919B
#define GL_MIN_LOD_WARNING_AMD                                                     0x919C
#define GL_TEXTURE_BUFFER_OFFSET                                                   0x919D
#define GL_TEXTURE_BUFFER_OFFSET_EXT                                               0x919D
#define GL_TEXTURE_BUFFER_OFFSET_OES                                               0x919D
#define GL_TEXTURE_BUFFER_SIZE                                                     0x919E
#define GL_TEXTURE_BUFFER_SIZE_EXT                                                 0x919E
#define GL_TEXTURE_BUFFER_SIZE_OES                                                 0x919E
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT                                         0x919F
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT                                     0x919F
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_OES                                     0x919F
#define GL_STREAM_RASTERIZATION_AMD                                                0x91A0
#define GL_VERTEX_ELEMENT_SWIZZLE_AMD                                              0x91A4
#define GL_VERTEX_ID_SWIZZLE_AMD                                                   0x91A5
#define GL_TEXTURE_SPARSE_ARB                                                      0x91A6
#define GL_TEXTURE_SPARSE_EXT                                                      0x91A6
#define GL_VIRTUAL_PAGE_SIZE_INDEX_ARB                                             0x91A7
#define GL_VIRTUAL_PAGE_SIZE_INDEX_EXT                                             0x91A7
#define GL_NUM_VIRTUAL_PAGE_SIZES_ARB                                              0x91A8
#define GL_NUM_VIRTUAL_PAGE_SIZES_EXT                                              0x91A8
#define GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_ARB                              0x91A9
#define GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_EXT                              0x91A9
#define GL_NUM_SPARSE_LEVELS_ARB                                                   0x91AA
#define GL_NUM_SPARSE_LEVELS_EXT                                                   0x91AA
#define GL_PIXELS_PER_SAMPLE_PATTERN_X_AMD                                         0x91AE
#define GL_PIXELS_PER_SAMPLE_PATTERN_Y_AMD                                         0x91AF
#define GL_MAX_SHADER_COMPILER_THREADS_ARB                                         0x91B0
#define GL_MAX_SHADER_COMPILER_THREADS_KHR                                         0x91B0
#define GL_COMPLETION_STATUS_ARB                                                   0x91B1
#define GL_COMPLETION_STATUS_KHR                                                   0x91B1
#define GL_COMPUTE_SHADER                                                          0x91B9
#define GL_MAX_COMPUTE_UNIFORM_BLOCKS                                              0x91BB
#define GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS                                         0x91BC
#define GL_MAX_COMPUTE_IMAGE_UNIFORMS                                              0x91BD
#define GL_MAX_COMPUTE_WORK_GROUP_COUNT                                            0x91BE
#define GL_MAX_COMPUTE_FIXED_GROUP_SIZE_ARB                                        0x91BF
#define GL_MAX_COMPUTE_WORK_GROUP_SIZE                                             0x91BF
#define GL_FLOAT16_MAT2_AMD                                                        0x91C5
#define GL_FLOAT16_MAT3_AMD                                                        0x91C6
#define GL_FLOAT16_MAT4_AMD                                                        0x91C7
#define GL_FLOAT16_MAT2x3_AMD                                                      0x91C8
#define GL_FLOAT16_MAT2x4_AMD                                                      0x91C9
#define GL_FLOAT16_MAT3x2_AMD                                                      0x91CA
#define GL_FLOAT16_MAT3x4_AMD                                                      0x91CB
#define GL_FLOAT16_MAT4x2_AMD                                                      0x91CC
#define GL_FLOAT16_MAT4x3_AMD                                                      0x91CD
#define GL_UNPACK_FLIP_Y_WEBGL                                                     0x9240
#define GL_UNPACK_PREMULTIPLY_ALPHA_WEBGL                                          0x9241
#define GL_CONTEXT_LOST_WEBGL                                                      0x9242
#define GL_UNPACK_COLORSPACE_CONVERSION_WEBGL                                      0x9243
#define GL_BROWSER_DEFAULT_WEBGL                                                   0x9244
#define GL_SHADER_BINARY_DMP                                                       0x9250
#define GL_SMAPHS30_PROGRAM_BINARY_DMP                                             0x9251
#define GL_SMAPHS_PROGRAM_BINARY_DMP                                               0x9252
#define GL_DMP_PROGRAM_BINARY_DMP                                                  0x9253
#define GL_GCCSO_SHADER_BINARY_FJ                                                  0x9260
#define GL_COMPRESSED_R11_EAC                                                      0x9270
#define GL_COMPRESSED_R11_EAC_OES                                                  0x9270
#define GL_COMPRESSED_SIGNED_R11_EAC                                               0x9271
#define GL_COMPRESSED_SIGNED_R11_EAC_OES                                           0x9271
#define GL_COMPRESSED_RG11_EAC                                                     0x9272
#define GL_COMPRESSED_RG11_EAC_OES                                                 0x9272
#define GL_COMPRESSED_SIGNED_RG11_EAC                                              0x9273
#define GL_COMPRESSED_SIGNED_RG11_EAC_OES                                          0x9273
#define GL_COMPRESSED_RGB8_ETC2                                                    0x9274
#define GL_COMPRESSED_RGB8_ETC2_OES                                                0x9274
#define GL_COMPRESSED_SRGB8_ETC2                                                   0x9275
#define GL_COMPRESSED_SRGB8_ETC2_OES                                               0x9275
#define GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2                                0x9276
#define GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2_OES                            0x9276
#define GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2                               0x9277
#define GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2_OES                           0x9277
#define GL_COMPRESSED_RGBA8_ETC2_EAC                                               0x9278
#define GL_COMPRESSED_RGBA8_ETC2_EAC_OES                                           0x9278
#define GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC                                        0x9279
#define GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC_OES                                    0x9279
#define GL_BLEND_PREMULTIPLIED_SRC_NV                                              0x9280
#define GL_BLEND_OVERLAP_NV                                                        0x9281
#define GL_UNCORRELATED_NV                                                         0x9282
#define GL_DISJOINT_NV                                                             0x9283
#define GL_CONJOINT_NV                                                             0x9284
#define GL_BLEND_ADVANCED_COHERENT_KHR                                             0x9285
#define GL_BLEND_ADVANCED_COHERENT_NV                                              0x9285
#define GL_SRC_NV                                                                  0x9286
#define GL_DST_NV                                                                  0x9287
#define GL_SRC_OVER_NV                                                             0x9288
#define GL_DST_OVER_NV                                                             0x9289
#define GL_SRC_IN_NV                                                               0x928A
#define GL_DST_IN_NV                                                               0x928B
#define GL_SRC_OUT_NV                                                              0x928C
#define GL_DST_OUT_NV                                                              0x928D
#define GL_SRC_ATOP_NV                                                             0x928E
#define GL_DST_ATOP_NV                                                             0x928F
#define GL_PLUS_NV                                                                 0x9291
#define GL_PLUS_DARKER_NV                                                          0x9292
#define GL_MULTIPLY                                                                0x9294
#define GL_MULTIPLY_KHR                                                            0x9294
#define GL_MULTIPLY_NV                                                             0x9294
#define GL_SCREEN                                                                  0x9295
#define GL_SCREEN_KHR                                                              0x9295
#define GL_SCREEN_NV                                                               0x9295
#define GL_OVERLAY                                                                 0x9296
#define GL_OVERLAY_KHR                                                             0x9296
#define GL_OVERLAY_NV                                                              0x9296
#define GL_DARKEN                                                                  0x9297
#define GL_DARKEN_KHR                                                              0x9297
#define GL_DARKEN_NV                                                               0x9297
#define GL_LIGHTEN                                                                 0x9298
#define GL_LIGHTEN_KHR                                                             0x9298
#define GL_LIGHTEN_NV                                                              0x9298
#define GL_COLORDODGE                                                              0x9299
#define GL_COLORDODGE_KHR                                                          0x9299
#define GL_COLORDODGE_NV                                                           0x9299
#define GL_COLORBURN                                                               0x929A
#define GL_COLORBURN_KHR                                                           0x929A
#define GL_COLORBURN_NV                                                            0x929A
#define GL_HARDLIGHT                                                               0x929B
#define GL_HARDLIGHT_KHR                                                           0x929B
#define GL_HARDLIGHT_NV                                                            0x929B
#define GL_SOFTLIGHT                                                               0x929C
#define GL_SOFTLIGHT_KHR                                                           0x929C
#define GL_SOFTLIGHT_NV                                                            0x929C
#define GL_DIFFERENCE                                                              0x929E
#define GL_DIFFERENCE_KHR                                                          0x929E
#define GL_DIFFERENCE_NV                                                           0x929E
#define GL_MINUS_NV                                                                0x929F
#define GL_EXCLUSION                                                               0x92A0
#define GL_EXCLUSION_KHR                                                           0x92A0
#define GL_EXCLUSION_NV                                                            0x92A0
#define GL_CONTRAST_NV                                                             0x92A1
#define GL_INVERT_RGB_NV                                                           0x92A3
#define GL_LINEARDODGE_NV                                                          0x92A4
#define GL_LINEARBURN_NV                                                           0x92A5
#define GL_VIVIDLIGHT_NV                                                           0x92A6
#define GL_LINEARLIGHT_NV                                                          0x92A7
#define GL_PINLIGHT_NV                                                             0x92A8
#define GL_HARDMIX_NV                                                              0x92A9
#define GL_HSL_HUE                                                                 0x92AD
#define GL_HSL_HUE_KHR                                                             0x92AD
#define GL_HSL_HUE_NV                                                              0x92AD
#define GL_HSL_SATURATION                                                          0x92AE
#define GL_HSL_SATURATION_KHR                                                      0x92AE
#define GL_HSL_SATURATION_NV                                                       0x92AE
#define GL_HSL_COLOR                                                               0x92AF
#define GL_HSL_COLOR_KHR                                                           0x92AF
#define GL_HSL_COLOR_NV                                                            0x92AF
#define GL_HSL_LUMINOSITY                                                          0x92B0
#define GL_HSL_LUMINOSITY_KHR                                                      0x92B0
#define GL_HSL_LUMINOSITY_NV                                                       0x92B0
#define GL_PLUS_CLAMPED_NV                                                         0x92B1
#define GL_PLUS_CLAMPED_ALPHA_NV                                                   0x92B2
#define GL_MINUS_CLAMPED_NV                                                        0x92B3
#define GL_INVERT_OVG_NV                                                           0x92B4
#define GL_MAX_LGPU_GPUS_NVX                                                       0x92BA
#define GL_MULTICAST_GPUS_NV                                                       0x92BA
#define GL_PURGED_CONTEXT_RESET_NV                                                 0x92BB
#define GL_PRIMITIVE_BOUNDING_BOX                                                  0x92BE
#define GL_PRIMITIVE_BOUNDING_BOX_ARB                                              0x92BE
#define GL_PRIMITIVE_BOUNDING_BOX_EXT                                              0x92BE
#define GL_PRIMITIVE_BOUNDING_BOX_OES                                              0x92BE
#define GL_ALPHA_TO_COVERAGE_DITHER_MODE_NV                                        0x92BF
#define GL_ATOMIC_COUNTER_BUFFER                                                   0x92C0
#define GL_ATOMIC_COUNTER_BUFFER_BINDING                                           0x92C1
#define GL_ATOMIC_COUNTER_BUFFER_START                                             0x92C2
#define GL_ATOMIC_COUNTER_BUFFER_SIZE                                              0x92C3
#define GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE                                         0x92C4
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS                            0x92C5
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES                     0x92C6
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER                       0x92C7
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER                 0x92C8
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER              0x92C9
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER                     0x92CA
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER                     0x92CB
#define GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS                                       0x92CC
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS                                 0x92CD
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT                             0x92CD
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_OES                             0x92CD
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS                              0x92CE
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT                          0x92CE
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_OES                          0x92CE
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS                                     0x92CF
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT                                 0x92CF
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_OES                                 0x92CF
#define GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS                                     0x92D0
#define GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS                                     0x92D1
#define GL_MAX_VERTEX_ATOMIC_COUNTERS                                              0x92D2
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS                                        0x92D3
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT                                    0x92D3
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_OES                                    0x92D3
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS                                     0x92D4
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT                                 0x92D4
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_OES                                 0x92D4
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS                                            0x92D5
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT                                        0x92D5
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS_OES                                        0x92D5
#define GL_MAX_FRAGMENT_ATOMIC_COUNTERS                                            0x92D6
#define GL_MAX_COMBINED_ATOMIC_COUNTERS                                            0x92D7
#define GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE                                          0x92D8
#define GL_ACTIVE_ATOMIC_COUNTER_BUFFERS                                           0x92D9
#define GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX                                     0x92DA
#define GL_UNSIGNED_INT_ATOMIC_COUNTER                                             0x92DB
#define GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS                                      0x92DC
#define GL_FRAGMENT_COVERAGE_TO_COLOR_NV                                           0x92DD
#define GL_FRAGMENT_COVERAGE_COLOR_NV                                              0x92DE
#define GL_DEBUG_OUTPUT                                                            0x92E0
#define GL_DEBUG_OUTPUT_KHR                                                        0x92E0
#define GL_UNIFORM                                                                 0x92E1
#define GL_UNIFORM_BLOCK                                                           0x92E2
#define GL_PROGRAM_INPUT                                                           0x92E3
#define GL_PROGRAM_OUTPUT                                                          0x92E4
#define GL_BUFFER_VARIABLE                                                         0x92E5
#define GL_SHADER_STORAGE_BLOCK                                                    0x92E6
#define GL_IS_PER_PATCH                                                            0x92E7
#define GL_IS_PER_PATCH_EXT                                                        0x92E7
#define GL_IS_PER_PATCH_OES                                                        0x92E7
#define GL_VERTEX_SUBROUTINE                                                       0x92E8
#define GL_TESS_CONTROL_SUBROUTINE                                                 0x92E9
#define GL_TESS_EVALUATION_SUBROUTINE                                              0x92EA
#define GL_GEOMETRY_SUBROUTINE                                                     0x92EB
#define GL_FRAGMENT_SUBROUTINE                                                     0x92EC
#define GL_COMPUTE_SUBROUTINE                                                      0x92ED
#define GL_VERTEX_SUBROUTINE_UNIFORM                                               0x92EE
#define GL_TESS_CONTROL_SUBROUTINE_UNIFORM                                         0x92EF
#define GL_TESS_EVALUATION_SUBROUTINE_UNIFORM                                      0x92F0
#define GL_GEOMETRY_SUBROUTINE_UNIFORM                                             0x92F1
#define GL_FRAGMENT_SUBROUTINE_UNIFORM                                             0x92F2
#define GL_COMPUTE_SUBROUTINE_UNIFORM                                              0x92F3
#define GL_TRANSFORM_FEEDBACK_VARYING                                              0x92F4
#define GL_ACTIVE_RESOURCES                                                        0x92F5
#define GL_MAX_NAME_LENGTH                                                         0x92F6
#define GL_MAX_NUM_ACTIVE_VARIABLES                                                0x92F7
#define GL_MAX_NUM_COMPATIBLE_SUBROUTINES                                          0x92F8
#define GL_NAME_LENGTH                                                             0x92F9
#define GL_TYPE                                                                    0x92FA
#define GL_ARRAY_SIZE                                                              0x92FB
#define GL_OFFSET                                                                  0x92FC
#define GL_BLOCK_INDEX                                                             0x92FD
#define GL_ARRAY_STRIDE                                                            0x92FE
#define GL_MATRIX_STRIDE                                                           0x92FF
#define GL_IS_ROW_MAJOR                                                            0x9300
#define GL_ATOMIC_COUNTER_BUFFER_INDEX                                             0x9301
#define GL_BUFFER_BINDING                                                          0x9302
#define GL_BUFFER_DATA_SIZE                                                        0x9303
#define GL_NUM_ACTIVE_VARIABLES                                                    0x9304
#define GL_ACTIVE_VARIABLES                                                        0x9305
#define GL_REFERENCED_BY_VERTEX_SHADER                                             0x9306
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER                                       0x9307
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT                                   0x9307
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER_OES                                   0x9307
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER                                    0x9308
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT                                0x9308
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER_OES                                0x9308
#define GL_REFERENCED_BY_GEOMETRY_SHADER                                           0x9309
#define GL_REFERENCED_BY_GEOMETRY_SHADER_EXT                                       0x9309
#define GL_REFERENCED_BY_GEOMETRY_SHADER_OES                                       0x9309
#define GL_REFERENCED_BY_FRAGMENT_SHADER                                           0x930A
#define GL_REFERENCED_BY_COMPUTE_SHADER                                            0x930B
#define GL_TOP_LEVEL_ARRAY_SIZE                                                    0x930C
#define GL_TOP_LEVEL_ARRAY_STRIDE                                                  0x930D
#define GL_LOCATION                                                                0x930E
#define GL_LOCATION_INDEX                                                          0x930F
#define GL_LOCATION_INDEX_EXT                                                      0x930F
#define GL_FRAMEBUFFER_DEFAULT_WIDTH                                               0x9310
#define GL_FRAMEBUFFER_DEFAULT_HEIGHT                                              0x9311
#define GL_FRAMEBUFFER_DEFAULT_LAYERS                                              0x9312
#define GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT                                          0x9312
#define GL_FRAMEBUFFER_DEFAULT_LAYERS_OES                                          0x9312
#define GL_FRAMEBUFFER_DEFAULT_SAMPLES                                             0x9313
#define GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS                              0x9314
#define GL_MAX_FRAMEBUFFER_WIDTH                                                   0x9315
#define GL_MAX_FRAMEBUFFER_HEIGHT                                                  0x9316
#define GL_MAX_FRAMEBUFFER_LAYERS                                                  0x9317
#define GL_MAX_FRAMEBUFFER_LAYERS_EXT                                              0x9317
#define GL_MAX_FRAMEBUFFER_LAYERS_OES                                              0x9317
#define GL_MAX_FRAMEBUFFER_SAMPLES                                                 0x9318
#define GL_RASTER_MULTISAMPLE_EXT                                                  0x9327
#define GL_RASTER_SAMPLES_EXT                                                      0x9328
#define GL_MAX_RASTER_SAMPLES_EXT                                                  0x9329
#define GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT                                       0x932A
#define GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT                                   0x932B
#define GL_EFFECTIVE_RASTER_SAMPLES_EXT                                            0x932C
#define GL_DEPTH_SAMPLES_NV                                                        0x932D
#define GL_STENCIL_SAMPLES_NV                                                      0x932E
#define GL_MIXED_DEPTH_SAMPLES_SUPPORTED_NV                                        0x932F
#define GL_MIXED_STENCIL_SAMPLES_SUPPORTED_NV                                      0x9330
#define GL_COVERAGE_MODULATION_TABLE_NV                                            0x9331
#define GL_COVERAGE_MODULATION_NV                                                  0x9332
#define GL_COVERAGE_MODULATION_TABLE_SIZE_NV                                       0x9333
#define GL_WARP_SIZE_NV                                                            0x9339
#define GL_WARPS_PER_SM_NV                                                         0x933A
#define GL_SM_COUNT_NV                                                             0x933B
#define GL_FILL_RECTANGLE_NV                                                       0x933C
#define GL_SAMPLE_LOCATION_SUBPIXEL_BITS_ARB                                       0x933D
#define GL_SAMPLE_LOCATION_SUBPIXEL_BITS_NV                                        0x933D
#define GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_ARB                                    0x933E
#define GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_NV                                     0x933E
#define GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_ARB                                   0x933F
#define GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_NV                                    0x933F
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_ARB                             0x9340
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_NV                              0x9340
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_ARB                                        0x9341
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_NV                                         0x9341
#define GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_ARB                           0x9342
#define GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_NV                            0x9342
#define GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_ARB                              0x9343
#define GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_NV                               0x9343
#define GL_MAX_COMPUTE_VARIABLE_GROUP_INVOCATIONS_ARB                              0x9344
#define GL_MAX_COMPUTE_VARIABLE_GROUP_SIZE_ARB                                     0x9345
#define GL_CONSERVATIVE_RASTERIZATION_NV                                           0x9346
#define GL_SUBPIXEL_PRECISION_BIAS_X_BITS_NV                                       0x9347
#define GL_SUBPIXEL_PRECISION_BIAS_Y_BITS_NV                                       0x9348
#define GL_MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV                                     0x9349
#define GL_LOCATION_COMPONENT                                                      0x934A
#define GL_TRANSFORM_FEEDBACK_BUFFER_INDEX                                         0x934B
#define GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE                                        0x934C
#define GL_ALPHA_TO_COVERAGE_DITHER_DEFAULT_NV                                     0x934D
#define GL_ALPHA_TO_COVERAGE_DITHER_ENABLE_NV                                      0x934E
#define GL_ALPHA_TO_COVERAGE_DITHER_DISABLE_NV                                     0x934F
#define GL_VIEWPORT_SWIZZLE_POSITIVE_X_NV                                          0x9350
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_X_NV                                          0x9351
#define GL_VIEWPORT_SWIZZLE_POSITIVE_Y_NV                                          0x9352
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_Y_NV                                          0x9353
#define GL_VIEWPORT_SWIZZLE_POSITIVE_Z_NV                                          0x9354
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_Z_NV                                          0x9355
#define GL_VIEWPORT_SWIZZLE_POSITIVE_W_NV                                          0x9356
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_W_NV                                          0x9357
#define GL_VIEWPORT_SWIZZLE_X_NV                                                   0x9358
#define GL_VIEWPORT_SWIZZLE_Y_NV                                                   0x9359
#define GL_VIEWPORT_SWIZZLE_Z_NV                                                   0x935A
#define GL_VIEWPORT_SWIZZLE_W_NV                                                   0x935B
#define GL_CLIP_ORIGIN                                                             0x935C
#define GL_CLIP_ORIGIN_EXT                                                         0x935C
#define GL_CLIP_DEPTH_MODE                                                         0x935D
#define GL_CLIP_DEPTH_MODE_EXT                                                     0x935D
#define GL_NEGATIVE_ONE_TO_ONE                                                     0x935E
#define GL_NEGATIVE_ONE_TO_ONE_EXT                                                 0x935E
#define GL_ZERO_TO_ONE                                                             0x935F
#define GL_ZERO_TO_ONE_EXT                                                         0x935F
#define GL_CLEAR_TEXTURE                                                           0x9365
#define GL_TEXTURE_REDUCTION_MODE_ARB                                              0x9366
#define GL_TEXTURE_REDUCTION_MODE_EXT                                              0x9366
#define GL_WEIGHTED_AVERAGE_ARB                                                    0x9367
#define GL_WEIGHTED_AVERAGE_EXT                                                    0x9367
#define GL_FONT_GLYPHS_AVAILABLE_NV                                                0x9368
#define GL_FONT_TARGET_UNAVAILABLE_NV                                              0x9369
#define GL_FONT_UNAVAILABLE_NV                                                     0x936A
#define GL_FONT_UNINTELLIGIBLE_NV                                                  0x936B
#define GL_STANDARD_FONT_FORMAT_NV                                                 0x936C
#define GL_FRAGMENT_INPUT_NV                                                       0x936D
#define GL_UNIFORM_BUFFER_UNIFIED_NV                                               0x936E
#define GL_UNIFORM_BUFFER_ADDRESS_NV                                               0x936F
#define GL_UNIFORM_BUFFER_LENGTH_NV                                                0x9370
#define GL_MULTISAMPLES_NV                                                         0x9371
#define GL_SUPERSAMPLE_SCALE_X_NV                                                  0x9372
#define GL_SUPERSAMPLE_SCALE_Y_NV                                                  0x9373
#define GL_CONFORMANT_NV                                                           0x9374
#define GL_CONSERVATIVE_RASTER_DILATE_NV                                           0x9379
#define GL_CONSERVATIVE_RASTER_DILATE_RANGE_NV                                     0x937A
#define GL_CONSERVATIVE_RASTER_DILATE_GRANULARITY_NV                               0x937B
#define GL_VIEWPORT_POSITION_W_SCALE_NV                                            0x937C
#define GL_VIEWPORT_POSITION_W_SCALE_X_COEFF_NV                                    0x937D
#define GL_VIEWPORT_POSITION_W_SCALE_Y_COEFF_NV                                    0x937E
#define GL_NUM_SAMPLE_COUNTS                                                       0x9380
#define GL_MULTISAMPLE_LINE_WIDTH_RANGE                                            0x9381
#define GL_MULTISAMPLE_LINE_WIDTH_RANGE_ARB                                        0x9381
#define GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY                                      0x9382
#define GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY_ARB                                  0x9382
#define GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE                                   0x93A0
#define GL_BGRA8_EXT                                                               0x93A1
#define GL_TEXTURE_USAGE_ANGLE                                                     0x93A2
#define GL_FRAMEBUFFER_ATTACHMENT_ANGLE                                            0x93A3
#define GL_PACK_REVERSE_ROW_ORDER_ANGLE                                            0x93A4
#define GL_PROGRAM_BINARY_ANGLE                                                    0x93A6
#define GL_COMPRESSED_RGBA_ASTC_4x4                                                0x93B0
#define GL_COMPRESSED_RGBA_ASTC_4x4_KHR                                            0x93B0
#define GL_COMPRESSED_RGBA_ASTC_5x4                                                0x93B1
#define GL_COMPRESSED_RGBA_ASTC_5x4_KHR                                            0x93B1
#define GL_COMPRESSED_RGBA_ASTC_5x5                                                0x93B2
#define GL_COMPRESSED_RGBA_ASTC_5x5_KHR                                            0x93B2
#define GL_COMPRESSED_RGBA_ASTC_6x5                                                0x93B3
#define GL_COMPRESSED_RGBA_ASTC_6x5_KHR                                            0x93B3
#define GL_COMPRESSED_RGBA_ASTC_6x6                                                0x93B4
#define GL_COMPRESSED_RGBA_ASTC_6x6_KHR                                            0x93B4
#define GL_COMPRESSED_RGBA_ASTC_8x5                                                0x93B5
#define GL_COMPRESSED_RGBA_ASTC_8x5_KHR                                            0x93B5
#define GL_COMPRESSED_RGBA_ASTC_8x6                                                0x93B6
#define GL_COMPRESSED_RGBA_ASTC_8x6_KHR                                            0x93B6
#define GL_COMPRESSED_RGBA_ASTC_8x8                                                0x93B7
#define GL_COMPRESSED_RGBA_ASTC_8x8_KHR                                            0x93B7
#define GL_COMPRESSED_RGBA_ASTC_10x5                                               0x93B8
#define GL_COMPRESSED_RGBA_ASTC_10x5_KHR                                           0x93B8
#define GL_COMPRESSED_RGBA_ASTC_10x6                                               0x93B9
#define GL_COMPRESSED_RGBA_ASTC_10x6_KHR                                           0x93B9
#define GL_COMPRESSED_RGBA_ASTC_10x8                                               0x93BA
#define GL_COMPRESSED_RGBA_ASTC_10x8_KHR                                           0x93BA
#define GL_COMPRESSED_RGBA_ASTC_10x10                                              0x93BB
#define GL_COMPRESSED_RGBA_ASTC_10x10_KHR                                          0x93BB
#define GL_COMPRESSED_RGBA_ASTC_12x10                                              0x93BC
#define GL_COMPRESSED_RGBA_ASTC_12x10_KHR                                          0x93BC
#define GL_COMPRESSED_RGBA_ASTC_12x12                                              0x93BD
#define GL_COMPRESSED_RGBA_ASTC_12x12_KHR                                          0x93BD
#define GL_COMPRESSED_RGBA_ASTC_3x3x3_OES                                          0x93C0
#define GL_COMPRESSED_RGBA_ASTC_4x3x3_OES                                          0x93C1
#define GL_COMPRESSED_RGBA_ASTC_4x4x3_OES                                          0x93C2
#define GL_COMPRESSED_RGBA_ASTC_4x4x4_OES                                          0x93C3
#define GL_COMPRESSED_RGBA_ASTC_5x4x4_OES                                          0x93C4
#define GL_COMPRESSED_RGBA_ASTC_5x5x4_OES                                          0x93C5
#define GL_COMPRESSED_RGBA_ASTC_5x5x5_OES                                          0x93C6
#define GL_COMPRESSED_RGBA_ASTC_6x5x5_OES                                          0x93C7
#define GL_COMPRESSED_RGBA_ASTC_6x6x5_OES                                          0x93C8
#define GL_COMPRESSED_RGBA_ASTC_6x6x6_OES                                          0x93C9
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4                                        0x93D0
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR                                    0x93D0
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4                                        0x93D1
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR                                    0x93D1
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5                                        0x93D2
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR                                    0x93D2
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5                                        0x93D3
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR                                    0x93D3
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6                                        0x93D4
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR                                    0x93D4
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5                                        0x93D5
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR                                    0x93D5
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6                                        0x93D6
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR                                    0x93D6
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8                                        0x93D7
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR                                    0x93D7
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5                                       0x93D8
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR                                   0x93D8
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6                                       0x93D9
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR                                   0x93D9
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8                                       0x93DA
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR                                   0x93DA
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10                                      0x93DB
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR                                  0x93DB
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10                                      0x93DC
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR                                  0x93DC
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12                                      0x93DD
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR                                  0x93DD
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES                                  0x93E0
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES                                  0x93E1
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES                                  0x93E2
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES                                  0x93E3
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES                                  0x93E4
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES                                  0x93E5
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES                                  0x93E6
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES                                  0x93E7
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES                                  0x93E8
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES                                  0x93E9
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV2_IMG                                  0x93F0
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV2_IMG                                  0x93F1
#define GL_PERFQUERY_COUNTER_EVENT_INTEL                                           0x94F0
#define GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL                                   0x94F1
#define GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL                                    0x94F2
#define GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL                                      0x94F3
#define GL_PERFQUERY_COUNTER_RAW_INTEL                                             0x94F4
#define GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL                                       0x94F5
#define GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL                                     0x94F8
#define GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL                                     0x94F9
#define GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL                                      0x94FA
#define GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL                                     0x94FB
#define GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL                                     0x94FC
#define GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL                                   0x94FD
#define GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL                                 0x94FE
#define GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL                                 0x94FF
#define GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL                                   0x9500
#define GL_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_EXT                           0x9530
#define GL_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_EXT                           0x9531
#define GL_QUERY_RESOURCE_TYPE_VIDMEM_ALLOC_NV                                     0x9540
#define GL_QUERY_RESOURCE_MEMTYPE_VIDMEM_NV                                        0x9542
#define GL_QUERY_RESOURCE_SYS_RESERVED_NV                                          0x9544
#define GL_QUERY_RESOURCE_TEXTURE_NV                                               0x9545
#define GL_QUERY_RESOURCE_RENDERBUFFER_NV                                          0x9546
#define GL_QUERY_RESOURCE_BUFFEROBJECT_NV                                          0x9547
#define GL_PER_GPU_STORAGE_NV                                                      0x9548
#define GL_MULTICAST_PROGRAMMABLE_SAMPLE_LOCATION_NV                               0x9549
#define GL_CONSERVATIVE_RASTER_MODE_NV                                             0x954D
#define GL_CONSERVATIVE_RASTER_MODE_POST_SNAP_NV                                   0x954E
#define GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_TRIANGLES_NV                          0x954F
#define GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_NV                                    0x9550
#define GL_SHADER_BINARY_FORMAT_SPIR_V                                             0x9551
#define GL_SHADER_BINARY_FORMAT_SPIR_V_ARB                                         0x9551
#define GL_SPIR_V_BINARY                                                           0x9552
#define GL_SPIR_V_BINARY_ARB                                                       0x9552
#define GL_SPIR_V_EXTENSIONS                                                       0x9553
#define GL_NUM_SPIR_V_EXTENSIONS                                                   0x9554
#define GL_RENDER_GPU_MASK_NV                                                      0x9558
#define GL_TEXTURE_TILING_EXT                                                      0x9580
#define GL_DEDICATED_MEMORY_OBJECT_EXT                                             0x9581
#define GL_NUM_TILING_TYPES_EXT                                                    0x9582
#define GL_TILING_TYPES_EXT                                                        0x9583
#define GL_OPTIMAL_TILING_EXT                                                      0x9584
#define GL_LINEAR_TILING_EXT                                                       0x9585
#define GL_HANDLE_TYPE_OPAQUE_FD_EXT                                               0x9586
#define GL_HANDLE_TYPE_OPAQUE_WIN32_EXT                                            0x9587
#define GL_HANDLE_TYPE_OPAQUE_WIN32_KMT_EXT                                        0x9588
#define GL_HANDLE_TYPE_D3D12_TILEPOOL_EXT                                          0x9589
#define GL_HANDLE_TYPE_D3D12_RESOURCE_EXT                                          0x958A
#define GL_HANDLE_TYPE_D3D11_IMAGE_EXT                                             0x958B
#define GL_HANDLE_TYPE_D3D11_IMAGE_KMT_EXT                                         0x958C
#define GL_LAYOUT_GENERAL_EXT                                                      0x958D
#define GL_LAYOUT_COLOR_ATTACHMENT_EXT                                             0x958E
#define GL_LAYOUT_DEPTH_STENCIL_ATTACHMENT_EXT                                     0x958F
#define GL_LAYOUT_DEPTH_STENCIL_READ_ONLY_EXT                                      0x9590
#define GL_LAYOUT_SHADER_READ_ONLY_EXT                                             0x9591
#define GL_LAYOUT_TRANSFER_SRC_EXT                                                 0x9592
#define GL_LAYOUT_TRANSFER_DST_EXT                                                 0x9593
#define GL_HANDLE_TYPE_D3D12_FENCE_EXT                                             0x9594
#define GL_D3D12_FENCE_VALUE_EXT                                                   0x9595
#define GL_NUM_DEVICE_UUIDS_EXT                                                    0x9596
#define GL_DEVICE_UUID_EXT                                                         0x9597
#define GL_DRIVER_UUID_EXT                                                         0x9598
#define GL_DEVICE_LUID_EXT                                                         0x9599
#define GL_DEVICE_NODE_MASK_EXT                                                    0x959A
#define GL_PROTECTED_MEMORY_OBJECT_EXT                                             0x959B
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR                            0x9630
#define GL_MAX_VIEWS_OVR                                                           0x9631
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR                      0x9632
#define GL_FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR                                 0x9633
#define GL_GS_SHADER_BINARY_MTK                                                    0x9640
#define GL_GS_PROGRAM_BINARY_MTK                                                   0x9641
#define GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_FAST_SIZE_EXT                         0x9650
#define GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_SIZE_EXT                              0x9651
#define GL_FRAMEBUFFER_INCOMPLETE_INSUFFICIENT_SHADER_COMBINED_LOCAL_STORAGE_EXT   0x9652
#define GL_FRAMEBUFFER_FETCH_NONCOHERENT_QCOM                                      0x96A2
#define GL_SHARED_EDGE_NV                                                          0xC0
#define GL_ROUNDED_RECT_NV                                                         0xE8
#define GL_RELATIVE_ROUNDED_RECT_NV                                                0xE9
#define GL_ROUNDED_RECT2_NV                                                        0xEA
#define GL_RELATIVE_ROUNDED_RECT2_NV                                               0xEB
#define GL_ROUNDED_RECT4_NV                                                        0xEC
#define GL_RELATIVE_ROUNDED_RECT4_NV                                               0xED
#define GL_ROUNDED_RECT8_NV                                                        0xEE
#define GL_RELATIVE_ROUNDED_RECT8_NV                                               0xEF
#define GL_RESTART_PATH_NV                                                         0xF0
#define GL_DUP_FIRST_CUBIC_CURVE_TO_NV                                             0xF2
#define GL_DUP_LAST_CUBIC_CURVE_TO_NV                                              0xF4
#define GL_RECT_NV                                                                 0xF6
#define GL_RELATIVE_RECT_NV                                                        0xF7
#define GL_CIRCULAR_CCW_ARC_TO_NV                                                  0xF8
#define GL_CIRCULAR_CW_ARC_TO_NV                                                   0xFA
#define GL_CIRCULAR_TANGENT_ARC_TO_NV                                              0xFC
#define GL_ARC_TO_NV                                                               0xFE
#define GL_RELATIVE_ARC_TO_NV                                                      0xFF
#define GL_TRACE_ALL_BITS_MESA                                                     0xFFFF
#define GL_ALL_BARRIER_BITS                                                        0xFFFFFFFF
#define GL_ALL_BARRIER_BITS_EXT                                                    0xFFFFFFFF
#define GL_ALL_PIXELS_AMD                                                          0xFFFFFFFF
#define GL_ALL_SHADER_BITS                                                         0xFFFFFFFF
#define GL_ALL_SHADER_BITS_EXT                                                     0xFFFFFFFF
#define GL_CLIENT_ALL_ATTRIB_BITS                                                  0xFFFFFFFF
#define GL_INVALID_INDEX                                                           0xFFFFFFFF
#define GL_QUERY_ALL_EVENT_BITS_AMD                                                0xFFFFFFFF
#define GL_TIMEOUT_IGNORED                                                         0xFFFFFFFFFFFFFFFF
#define GL_TIMEOUT_IGNORED_APPLE                                                   0xFFFFFFFFFFFFFFFF
#define GL_LAYOUT_LINEAR_INTEL                                                     1
#define GL_ONE                                                                     1
#define GL_TRUE                                                                    1
#define GL_VERSION_ES_CL_1_0                                                       1
#define GL_VERSION_ES_CL_1_1                                                       1
#define GL_VERSION_ES_CM_1_1                                                       1
#define GL_CULL_VERTEX_IBM                                                         103050
#define GL_ALL_STATIC_DATA_IBM                                                     103060
#define GL_STATIC_VERTEX_ARRAY_IBM                                                 103061
#define GL_VERTEX_ARRAY_LIST_IBM                                                   103070
#define GL_NORMAL_ARRAY_LIST_IBM                                                   103071
#define GL_COLOR_ARRAY_LIST_IBM                                                    103072
#define GL_INDEX_ARRAY_LIST_IBM                                                    103073
#define GL_TEXTURE_COORD_ARRAY_LIST_IBM                                            103074
#define GL_EDGE_FLAG_ARRAY_LIST_IBM                                                103075
#define GL_FOG_COORDINATE_ARRAY_LIST_IBM                                           103076
#define GL_SECONDARY_COLOR_ARRAY_LIST_IBM                                          103077
#define GL_VERTEX_ARRAY_LIST_STRIDE_IBM                                            103080
#define GL_NORMAL_ARRAY_LIST_STRIDE_IBM                                            103081
#define GL_COLOR_ARRAY_LIST_STRIDE_IBM                                             103082
#define GL_INDEX_ARRAY_LIST_STRIDE_IBM                                             103083
#define GL_TEXTURE_COORD_ARRAY_LIST_STRIDE_IBM                                     103084
#define GL_EDGE_FLAG_ARRAY_LIST_STRIDE_IBM                                         103085
#define GL_FOG_COORDINATE_ARRAY_LIST_STRIDE_IBM                                    103086
#define GL_SECONDARY_COLOR_ARRAY_LIST_STRIDE_IBM                                   103087
#define GL_UUID_SIZE_EXT                                                           16
#define GL_LAYOUT_LINEAR_CPU_CACHED_INTEL                                          2
#define GL_LUID_SIZE_EXT                                                           8

typedef void (GLAPIENTRY *PFNGLACCUMPROC)(GLenum op, GLfloat value);
typedef void (GLAPIENTRY *PFNGLACTIVESHADERPROGRAMPROC)(GLuint pipeline, GLuint program);
typedef void (GLAPIENTRY *PFNGLACTIVETEXTUREPROC)(GLenum texture);
typedef void (GLAPIENTRY *PFNGLALPHAFUNCPROC)(GLenum func, GLfloat ref);
typedef void (GLAPIENTRY *PFNGLALPHAFUNCXPROC)(GLenum func, GLfixed ref);
typedef GLboolean (GLAPIENTRY *PFNGLARETEXTURESRESIDENTPROC)(GLsizei n, const GLuint * textures, GLboolean * residences);
typedef void (GLAPIENTRY *PFNGLARRAYELEMENTPROC)(GLint i);
typedef void (GLAPIENTRY *PFNGLATTACHSHADERPROC)(GLuint program, GLuint shader);
typedef void (GLAPIENTRY *PFNGLBEGINPROC)(GLenum mode);
typedef void (GLAPIENTRY *PFNGLBEGINCONDITIONALRENDERPROC)(GLuint id, GLenum mode);
typedef void (GLAPIENTRY *PFNGLBEGINQUERYPROC)(GLenum target, GLuint id);
typedef void (GLAPIENTRY *PFNGLBEGINQUERYINDEXEDPROC)(GLenum target, GLuint index, GLuint id);
typedef void (GLAPIENTRY *PFNGLBEGINTRANSFORMFEEDBACKPROC)(GLenum primitiveMode);
typedef void (GLAPIENTRY *PFNGLBINDATTRIBLOCATIONPROC)(GLuint program, GLuint index, const GLchar * name);
typedef void (GLAPIENTRY *PFNGLBINDBUFFERPROC)(GLenum target, GLuint buffer);
typedef void (GLAPIENTRY *PFNGLBINDBUFFERARBPROC)(GLenum target, GLuint buffer);
typedef void (GLAPIENTRY *PFNGLBINDBUFFERBASEPROC)(GLenum target, GLuint index, GLuint buffer);
typedef void (GLAPIENTRY *PFNGLBINDBUFFERRANGEPROC)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GLAPIENTRY *PFNGLBINDBUFFERSBASEPROC)(GLenum target, GLuint first, GLsizei count, const GLuint * buffers);
typedef void (GLAPIENTRY *PFNGLBINDBUFFERSRANGEPROC)(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes);
typedef void (GLAPIENTRY *PFNGLBINDFRAGDATALOCATIONPROC)(GLuint program, GLuint color, const GLchar * name);
typedef void (GLAPIENTRY *PFNGLBINDFRAGDATALOCATIONINDEXEDPROC)(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name);
typedef void (GLAPIENTRY *PFNGLBINDFRAMEBUFFERPROC)(GLenum target, GLuint framebuffer);
typedef void (GLAPIENTRY *PFNGLBINDIMAGETEXTUREPROC)(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
typedef void (GLAPIENTRY *PFNGLBINDIMAGETEXTURESPROC)(GLuint first, GLsizei count, const GLuint * textures);
typedef void (GLAPIENTRY *PFNGLBINDPROGRAMPIPELINEPROC)(GLuint pipeline);
typedef void (GLAPIENTRY *PFNGLBINDRENDERBUFFERPROC)(GLenum target, GLuint renderbuffer);
typedef void (GLAPIENTRY *PFNGLBINDSAMPLERPROC)(GLuint unit, GLuint sampler);
typedef void (GLAPIENTRY *PFNGLBINDSAMPLERSPROC)(GLuint first, GLsizei count, const GLuint * samplers);
typedef void (GLAPIENTRY *PFNGLBINDTEXTUREPROC)(GLenum target, GLuint texture);
typedef void (GLAPIENTRY *PFNGLBINDTEXTUREUNITPROC)(GLuint unit, GLuint texture);
typedef void (GLAPIENTRY *PFNGLBINDTEXTURESPROC)(GLuint first, GLsizei count, const GLuint * textures);
typedef void (GLAPIENTRY *PFNGLBINDTRANSFORMFEEDBACKPROC)(GLenum target, GLuint id);
typedef void (GLAPIENTRY *PFNGLBINDVERTEXARRAYPROC)(GLuint array);
typedef void (GLAPIENTRY *PFNGLBINDVERTEXBUFFERPROC)(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (GLAPIENTRY *PFNGLBINDVERTEXBUFFERSPROC)(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides);
typedef void (GLAPIENTRY *PFNGLBITMAPPROC)(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap);
typedef void (GLAPIENTRY *PFNGLBLENDBARRIERPROC)(void);
typedef void (GLAPIENTRY *PFNGLBLENDCOLORPROC)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (GLAPIENTRY *PFNGLBLENDEQUATIONPROC)(GLenum mode);
typedef void (GLAPIENTRY *PFNGLBLENDEQUATIONSEPARATEPROC)(GLenum modeRGB, GLenum modeAlpha);
typedef void (GLAPIENTRY *PFNGLBLENDEQUATIONSEPARATEIPROC)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (GLAPIENTRY *PFNGLBLENDEQUATIONIPROC)(GLuint buf, GLenum mode);
typedef void (GLAPIENTRY *PFNGLBLENDFUNCPROC)(GLenum sfactor, GLenum dfactor);
typedef void (GLAPIENTRY *PFNGLBLENDFUNCSEPARATEPROC)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef void (GLAPIENTRY *PFNGLBLENDFUNCSEPARATEIPROC)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (GLAPIENTRY *PFNGLBLENDFUNCIPROC)(GLuint buf, GLenum src, GLenum dst);
typedef void (GLAPIENTRY *PFNGLBLITFRAMEBUFFERPROC)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (GLAPIENTRY *PFNGLBLITNAMEDFRAMEBUFFERPROC)(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (GLAPIENTRY *PFNGLBUFFERDATAPROC)(GLenum target, GLsizeiptr size, const void * data, GLenum usage);
typedef void (GLAPIENTRY *PFNGLBUFFERDATAARBPROC)(GLenum target, GLsizeiptrARB size, const void * data, GLenum usage);
typedef void (GLAPIENTRY *PFNGLBUFFERSTORAGEPROC)(GLenum target, GLsizeiptr size, const void * data, GLbitfield flags);
typedef void (GLAPIENTRY *PFNGLBUFFERSTORAGEEXTPROC)(GLenum target, GLsizeiptr size, const void * data, GLbitfield flags);
typedef void (GLAPIENTRY *PFNGLBUFFERSUBDATAPROC)(GLenum target, GLintptr offset, GLsizeiptr size, const void * data);
typedef void (GLAPIENTRY *PFNGLBUFFERSUBDATAARBPROC)(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const void * data);
typedef void (GLAPIENTRY *PFNGLCALLLISTPROC)(GLuint list);
typedef void (GLAPIENTRY *PFNGLCALLLISTSPROC)(GLsizei n, GLenum type, const void * lists);
typedef GLenum (GLAPIENTRY *PFNGLCHECKFRAMEBUFFERSTATUSPROC)(GLenum target);
typedef GLenum (GLAPIENTRY *PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC)(GLuint framebuffer, GLenum target);
typedef void (GLAPIENTRY *PFNGLCLAMPCOLORPROC)(GLenum target, GLenum clamp);
typedef void (GLAPIENTRY *PFNGLCLEARPROC)(GLbitfield mask);
typedef void (GLAPIENTRY *PFNGLCLEARACCUMPROC)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (GLAPIENTRY *PFNGLCLEARBUFFERDATAPROC)(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data);
typedef void (GLAPIENTRY *PFNGLCLEARBUFFERSUBDATAPROC)(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);
typedef void (GLAPIENTRY *PFNGLCLEARBUFFERFIPROC)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
typedef void (GLAPIENTRY *PFNGLCLEARBUFFERFVPROC)(GLenum buffer, GLint drawbuffer, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLCLEARBUFFERIVPROC)(GLenum buffer, GLint drawbuffer, const GLint * value);
typedef void (GLAPIENTRY *PFNGLCLEARBUFFERUIVPROC)(GLenum buffer, GLint drawbuffer, const GLuint * value);
typedef void (GLAPIENTRY *PFNGLCLEARCOLORPROC)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (GLAPIENTRY *PFNGLCLEARCOLORXPROC)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
typedef void (GLAPIENTRY *PFNGLCLEARDEPTHPROC)(GLdouble depth);
typedef void (GLAPIENTRY *PFNGLCLEARDEPTHFPROC)(GLfloat d);
typedef void (GLAPIENTRY *PFNGLCLEARDEPTHFOESPROC)(GLclampf depth);
typedef void (GLAPIENTRY *PFNGLCLEARDEPTHXPROC)(GLfixed depth);
typedef void (GLAPIENTRY *PFNGLCLEARINDEXPROC)(GLfloat c);
typedef void (GLAPIENTRY *PFNGLCLEARNAMEDBUFFERDATAPROC)(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data);
typedef void (GLAPIENTRY *PFNGLCLEARNAMEDBUFFERSUBDATAPROC)(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);
typedef void (GLAPIENTRY *PFNGLCLEARNAMEDFRAMEBUFFERFIPROC)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
typedef void (GLAPIENTRY *PFNGLCLEARNAMEDFRAMEBUFFERFVPROC)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLCLEARNAMEDFRAMEBUFFERIVPROC)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value);
typedef void (GLAPIENTRY *PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value);
typedef void (GLAPIENTRY *PFNGLCLEARSTENCILPROC)(GLint s);
typedef void (GLAPIENTRY *PFNGLCLEARTEXIMAGEPROC)(GLuint texture, GLint level, GLenum format, GLenum type, const void * data);
typedef void (GLAPIENTRY *PFNGLCLEARTEXSUBIMAGEPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data);
typedef void (GLAPIENTRY *PFNGLCLIENTACTIVETEXTUREPROC)(GLenum texture);
typedef GLenum (GLAPIENTRY *PFNGLCLIENTWAITSYNCPROC)(GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GLAPIENTRY *PFNGLCLIPCONTROLPROC)(GLenum origin, GLenum depth);
typedef void (GLAPIENTRY *PFNGLCLIPPLANEPROC)(GLenum plane, const GLdouble * equation);
typedef void (GLAPIENTRY *PFNGLCLIPPLANEFPROC)(GLenum p, const GLfloat * eqn);
typedef void (GLAPIENTRY *PFNGLCLIPPLANEFOESPROC)(GLenum plane, const GLfloat * equation);
typedef void (GLAPIENTRY *PFNGLCLIPPLANEXPROC)(GLenum plane, const GLfixed * equation);
typedef void (GLAPIENTRY *PFNGLCOLOR3BPROC)(GLbyte red, GLbyte green, GLbyte blue);
typedef void (GLAPIENTRY *PFNGLCOLOR3BVPROC)(const GLbyte * v);
typedef void (GLAPIENTRY *PFNGLCOLOR3DPROC)(GLdouble red, GLdouble green, GLdouble blue);
typedef void (GLAPIENTRY *PFNGLCOLOR3DVPROC)(const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLCOLOR3FPROC)(GLfloat red, GLfloat green, GLfloat blue);
typedef void (GLAPIENTRY *PFNGLCOLOR3FVPROC)(const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLCOLOR3IPROC)(GLint red, GLint green, GLint blue);
typedef void (GLAPIENTRY *PFNGLCOLOR3IVPROC)(const GLint * v);
typedef void (GLAPIENTRY *PFNGLCOLOR3SPROC)(GLshort red, GLshort green, GLshort blue);
typedef void (GLAPIENTRY *PFNGLCOLOR3SVPROC)(const GLshort * v);
typedef void (GLAPIENTRY *PFNGLCOLOR3UBPROC)(GLubyte red, GLubyte green, GLubyte blue);
typedef void (GLAPIENTRY *PFNGLCOLOR3UBVPROC)(const GLubyte * v);
typedef void (GLAPIENTRY *PFNGLCOLOR3UIPROC)(GLuint red, GLuint green, GLuint blue);
typedef void (GLAPIENTRY *PFNGLCOLOR3UIVPROC)(const GLuint * v);
typedef void (GLAPIENTRY *PFNGLCOLOR3USPROC)(GLushort red, GLushort green, GLushort blue);
typedef void (GLAPIENTRY *PFNGLCOLOR3USVPROC)(const GLushort * v);
typedef void (GLAPIENTRY *PFNGLCOLOR4BPROC)(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
typedef void (GLAPIENTRY *PFNGLCOLOR4BVPROC)(const GLbyte * v);
typedef void (GLAPIENTRY *PFNGLCOLOR4DPROC)(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
typedef void (GLAPIENTRY *PFNGLCOLOR4DVPROC)(const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLCOLOR4FPROC)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (GLAPIENTRY *PFNGLCOLOR4FVPROC)(const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLCOLOR4IPROC)(GLint red, GLint green, GLint blue, GLint alpha);
typedef void (GLAPIENTRY *PFNGLCOLOR4IVPROC)(const GLint * v);
typedef void (GLAPIENTRY *PFNGLCOLOR4SPROC)(GLshort red, GLshort green, GLshort blue, GLshort alpha);
typedef void (GLAPIENTRY *PFNGLCOLOR4SVPROC)(const GLshort * v);
typedef void (GLAPIENTRY *PFNGLCOLOR4UBPROC)(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
typedef void (GLAPIENTRY *PFNGLCOLOR4UBVPROC)(const GLubyte * v);
typedef void (GLAPIENTRY *PFNGLCOLOR4UIPROC)(GLuint red, GLuint green, GLuint blue, GLuint alpha);
typedef void (GLAPIENTRY *PFNGLCOLOR4UIVPROC)(const GLuint * v);
typedef void (GLAPIENTRY *PFNGLCOLOR4USPROC)(GLushort red, GLushort green, GLushort blue, GLushort alpha);
typedef void (GLAPIENTRY *PFNGLCOLOR4USVPROC)(const GLushort * v);
typedef void (GLAPIENTRY *PFNGLCOLOR4XPROC)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
typedef void (GLAPIENTRY *PFNGLCOLORMASKPROC)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
typedef void (GLAPIENTRY *PFNGLCOLORMASKIPROC)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef void (GLAPIENTRY *PFNGLCOLORMATERIALPROC)(GLenum face, GLenum mode);
typedef void (GLAPIENTRY *PFNGLCOLORP3UIPROC)(GLenum type, GLuint color);
typedef void (GLAPIENTRY *PFNGLCOLORP3UIVPROC)(GLenum type, const GLuint * color);
typedef void (GLAPIENTRY *PFNGLCOLORP4UIPROC)(GLenum type, GLuint color);
typedef void (GLAPIENTRY *PFNGLCOLORP4UIVPROC)(GLenum type, const GLuint * color);
typedef void (GLAPIENTRY *PFNGLCOLORPOINTERPROC)(GLint size, GLenum type, GLsizei stride, const void * pointer);
typedef void (GLAPIENTRY *PFNGLCOMPILESHADERPROC)(GLuint shader);
typedef void (GLAPIENTRY *PFNGLCOMPRESSEDTEXIMAGE1DPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data);
typedef void (GLAPIENTRY *PFNGLCOMPRESSEDTEXIMAGE2DPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data);
typedef void (GLAPIENTRY *PFNGLCOMPRESSEDTEXIMAGE3DPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data);
typedef void (GLAPIENTRY *PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data);
typedef void (GLAPIENTRY *PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
typedef void (GLAPIENTRY *PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
typedef void (GLAPIENTRY *PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data);
typedef void (GLAPIENTRY *PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
typedef void (GLAPIENTRY *PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
typedef void (GLAPIENTRY *PFNGLCOPYBUFFERSUBDATAPROC)(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (GLAPIENTRY *PFNGLCOPYIMAGESUBDATAPROC)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
typedef void (GLAPIENTRY *PFNGLCOPYNAMEDBUFFERSUBDATAPROC)(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (GLAPIENTRY *PFNGLCOPYPIXELSPROC)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
typedef void (GLAPIENTRY *PFNGLCOPYTEXIMAGE1DPROC)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
typedef void (GLAPIENTRY *PFNGLCOPYTEXIMAGE2DPROC)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (GLAPIENTRY *PFNGLCOPYTEXSUBIMAGE1DPROC)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (GLAPIENTRY *PFNGLCOPYTEXSUBIMAGE2DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *PFNGLCOPYTEXSUBIMAGE3DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *PFNGLCOPYTEXTURESUBIMAGE1DPROC)(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (GLAPIENTRY *PFNGLCOPYTEXTURESUBIMAGE2DPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *PFNGLCOPYTEXTURESUBIMAGE3DPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *PFNGLCREATEBUFFERSPROC)(GLsizei n, GLuint * buffers);
typedef void (GLAPIENTRY *PFNGLCREATEFRAMEBUFFERSPROC)(GLsizei n, GLuint * framebuffers);
typedef GLuint (GLAPIENTRY *PFNGLCREATEPROGRAMPROC)(void);
typedef void (GLAPIENTRY *PFNGLCREATEPROGRAMPIPELINESPROC)(GLsizei n, GLuint * pipelines);
typedef void (GLAPIENTRY *PFNGLCREATEQUERIESPROC)(GLenum target, GLsizei n, GLuint * ids);
typedef void (GLAPIENTRY *PFNGLCREATERENDERBUFFERSPROC)(GLsizei n, GLuint * renderbuffers);
typedef void (GLAPIENTRY *PFNGLCREATESAMPLERSPROC)(GLsizei n, GLuint * samplers);
typedef GLuint (GLAPIENTRY *PFNGLCREATESHADERPROC)(GLenum type);
typedef GLuint (GLAPIENTRY *PFNGLCREATESHADERPROGRAMVPROC)(GLenum type, GLsizei count, const GLchar *const* strings);
typedef void (GLAPIENTRY *PFNGLCREATETEXTURESPROC)(GLenum target, GLsizei n, GLuint * textures);
typedef void (GLAPIENTRY *PFNGLCREATETRANSFORMFEEDBACKSPROC)(GLsizei n, GLuint * ids);
typedef void (GLAPIENTRY *PFNGLCREATEVERTEXARRAYSPROC)(GLsizei n, GLuint * arrays);
typedef void (GLAPIENTRY *PFNGLCULLFACEPROC)(GLenum mode);
typedef void (GLAPIENTRY *PFNGLDEBUGMESSAGECALLBACKPROC)(GLDEBUGPROC callback, const void * userParam);
typedef void (GLAPIENTRY *PFNGLDEBUGMESSAGECALLBACKARBPROC)(GLDEBUGPROCARB callback, const void * userParam);
typedef void (GLAPIENTRY *PFNGLDEBUGMESSAGECALLBACKKHRPROC)(GLDEBUGPROCKHR callback, const void * userParam);
typedef void (GLAPIENTRY *PFNGLDEBUGMESSAGECONTROLPROC)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
typedef void (GLAPIENTRY *PFNGLDEBUGMESSAGECONTROLARBPROC)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
typedef void (GLAPIENTRY *PFNGLDEBUGMESSAGECONTROLKHRPROC)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
typedef void (GLAPIENTRY *PFNGLDEBUGMESSAGEINSERTPROC)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
typedef void (GLAPIENTRY *PFNGLDEBUGMESSAGEINSERTARBPROC)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
typedef void (GLAPIENTRY *PFNGLDEBUGMESSAGEINSERTKHRPROC)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
typedef void (GLAPIENTRY *PFNGLDELETEBUFFERSPROC)(GLsizei n, const GLuint * buffers);
typedef void (GLAPIENTRY *PFNGLDELETEBUFFERSARBPROC)(GLsizei n, const GLuint * buffers);
typedef void (GLAPIENTRY *PFNGLDELETEFRAMEBUFFERSPROC)(GLsizei n, const GLuint * framebuffers);
typedef void (GLAPIENTRY *PFNGLDELETELISTSPROC)(GLuint list, GLsizei range);
typedef void (GLAPIENTRY *PFNGLDELETEPROGRAMPROC)(GLuint program);
typedef void (GLAPIENTRY *PFNGLDELETEPROGRAMPIPELINESPROC)(GLsizei n, const GLuint * pipelines);
typedef void (GLAPIENTRY *PFNGLDELETEQUERIESPROC)(GLsizei n, const GLuint * ids);
typedef void (GLAPIENTRY *PFNGLDELETERENDERBUFFERSPROC)(GLsizei n, const GLuint * renderbuffers);
typedef void (GLAPIENTRY *PFNGLDELETESAMPLERSPROC)(GLsizei count, const GLuint * samplers);
typedef void (GLAPIENTRY *PFNGLDELETESHADERPROC)(GLuint shader);
typedef void (GLAPIENTRY *PFNGLDELETESYNCPROC)(GLsync sync);
typedef void (GLAPIENTRY *PFNGLDELETETEXTURESPROC)(GLsizei n, const GLuint * textures);
typedef void (GLAPIENTRY *PFNGLDELETETRANSFORMFEEDBACKSPROC)(GLsizei n, const GLuint * ids);
typedef void (GLAPIENTRY *PFNGLDELETEVERTEXARRAYSPROC)(GLsizei n, const GLuint * arrays);
typedef void (GLAPIENTRY *PFNGLDEPTHFUNCPROC)(GLenum func);
typedef void (GLAPIENTRY *PFNGLDEPTHMASKPROC)(GLboolean flag);
typedef void (GLAPIENTRY *PFNGLDEPTHRANGEPROC)(GLdouble hither, GLdouble yon);
typedef void (GLAPIENTRY *PFNGLDEPTHRANGEARRAYVPROC)(GLuint first, GLsizei count, const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLDEPTHRANGEINDEXEDPROC)(GLuint index, GLdouble n, GLdouble f);
typedef void (GLAPIENTRY *PFNGLDEPTHRANGEFPROC)(GLfloat n, GLfloat f);
typedef void (GLAPIENTRY *PFNGLDEPTHRANGEFOESPROC)(GLclampf n, GLclampf f);
typedef void (GLAPIENTRY *PFNGLDEPTHRANGEXPROC)(GLfixed n, GLfixed f);
typedef void (GLAPIENTRY *PFNGLDETACHSHADERPROC)(GLuint program, GLuint shader);
typedef void (GLAPIENTRY *PFNGLDISABLEPROC)(GLenum cap);
typedef void (GLAPIENTRY *PFNGLDISABLECLIENTSTATEPROC)(GLenum array);
typedef void (GLAPIENTRY *PFNGLDISABLEVERTEXARRAYATTRIBPROC)(GLuint vaobj, GLuint index);
typedef void (GLAPIENTRY *PFNGLDISABLEVERTEXATTRIBARRAYPROC)(GLuint index);
typedef void (GLAPIENTRY *PFNGLDISABLEIPROC)(GLenum target, GLuint index);
typedef void (GLAPIENTRY *PFNGLDISPATCHCOMPUTEPROC)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
typedef void (GLAPIENTRY *PFNGLDISPATCHCOMPUTEINDIRECTPROC)(GLintptr indirect);
typedef void (GLAPIENTRY *PFNGLDRAWARRAYSPROC)(GLenum mode, GLint first, GLsizei count);
typedef void (GLAPIENTRY *PFNGLDRAWARRAYSINDIRECTPROC)(GLenum mode, const void * indirect);
typedef void (GLAPIENTRY *PFNGLDRAWARRAYSINSTANCEDPROC)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
typedef void (GLAPIENTRY *PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
typedef void (GLAPIENTRY *PFNGLDRAWBUFFERPROC)(GLenum buf);
typedef void (GLAPIENTRY *PFNGLDRAWBUFFERSPROC)(GLsizei n, const GLenum * bufs);
typedef void (GLAPIENTRY *PFNGLDRAWELEMENTSPROC)(GLenum mode, GLsizei count, GLenum type, const void * indices);
typedef void (GLAPIENTRY *PFNGLDRAWELEMENTSBASEVERTEXPROC)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef void (GLAPIENTRY *PFNGLDRAWELEMENTSBASEVERTEXEXTPROC)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef void (GLAPIENTRY *PFNGLDRAWELEMENTSBASEVERTEXOESPROC)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef void (GLAPIENTRY *PFNGLDRAWELEMENTSINDIRECTPROC)(GLenum mode, GLenum type, const void * indirect);
typedef void (GLAPIENTRY *PFNGLDRAWELEMENTSINSTANCEDPROC)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount);
typedef void (GLAPIENTRY *PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance);
typedef void (GLAPIENTRY *PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
typedef void (GLAPIENTRY *PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
typedef void (GLAPIENTRY *PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
typedef void (GLAPIENTRY *PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
typedef void (GLAPIENTRY *PFNGLDRAWPIXELSPROC)(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
typedef void (GLAPIENTRY *PFNGLDRAWRANGEELEMENTSPROC)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices);
typedef void (GLAPIENTRY *PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef void (GLAPIENTRY *PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef void (GLAPIENTRY *PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef void (GLAPIENTRY *PFNGLDRAWTRANSFORMFEEDBACKPROC)(GLenum mode, GLuint id);
typedef void (GLAPIENTRY *PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC)(GLenum mode, GLuint id, GLsizei instancecount);
typedef void (GLAPIENTRY *PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC)(GLenum mode, GLuint id, GLuint stream);
typedef void (GLAPIENTRY *PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC)(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
typedef void (GLAPIENTRY *PFNGLEDGEFLAGPROC)(GLboolean flag);
typedef void (GLAPIENTRY *PFNGLEDGEFLAGPOINTERPROC)(GLsizei stride, const void * pointer);
typedef void (GLAPIENTRY *PFNGLEDGEFLAGVPROC)(const GLboolean * flag);
typedef void (GLAPIENTRY *PFNGLENABLEPROC)(GLenum cap);
typedef void (GLAPIENTRY *PFNGLENABLECLIENTSTATEPROC)(GLenum array);
typedef void (GLAPIENTRY *PFNGLENABLEVERTEXARRAYATTRIBPROC)(GLuint vaobj, GLuint index);
typedef void (GLAPIENTRY *PFNGLENABLEVERTEXATTRIBARRAYPROC)(GLuint index);
typedef void (GLAPIENTRY *PFNGLENABLEIPROC)(GLenum target, GLuint index);
typedef void (GLAPIENTRY *PFNGLENDPROC)(void);
typedef void (GLAPIENTRY *PFNGLENDCONDITIONALRENDERPROC)(void);
typedef void (GLAPIENTRY *PFNGLENDLISTPROC)(void);
typedef void (GLAPIENTRY *PFNGLENDQUERYPROC)(GLenum target);
typedef void (GLAPIENTRY *PFNGLENDQUERYINDEXEDPROC)(GLenum target, GLuint index);
typedef void (GLAPIENTRY *PFNGLENDTRANSFORMFEEDBACKPROC)(void);
typedef void (GLAPIENTRY *PFNGLEVALCOORD1DPROC)(GLdouble u);
typedef void (GLAPIENTRY *PFNGLEVALCOORD1DVPROC)(const GLdouble * u);
typedef void (GLAPIENTRY *PFNGLEVALCOORD1FPROC)(GLfloat u);
typedef void (GLAPIENTRY *PFNGLEVALCOORD1FVPROC)(const GLfloat * u);
typedef void (GLAPIENTRY *PFNGLEVALCOORD2DPROC)(GLdouble u, GLdouble v);
typedef void (GLAPIENTRY *PFNGLEVALCOORD2DVPROC)(const GLdouble * u);
typedef void (GLAPIENTRY *PFNGLEVALCOORD2FPROC)(GLfloat u, GLfloat v);
typedef void (GLAPIENTRY *PFNGLEVALCOORD2FVPROC)(const GLfloat * u);
typedef void (GLAPIENTRY *PFNGLEVALMESH1PROC)(GLenum mode, GLint i1, GLint i2);
typedef void (GLAPIENTRY *PFNGLEVALMESH2PROC)(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
typedef void (GLAPIENTRY *PFNGLEVALPOINT1PROC)(GLint i);
typedef void (GLAPIENTRY *PFNGLEVALPOINT2PROC)(GLint i, GLint j);
typedef void (GLAPIENTRY *PFNGLFEEDBACKBUFFERPROC)(GLsizei size, GLenum type, GLfloat * buffer);
typedef GLsync (GLAPIENTRY *PFNGLFENCESYNCPROC)(GLenum condition, GLbitfield flags);
typedef void (GLAPIENTRY *PFNGLFINISHPROC)(void);
typedef void (GLAPIENTRY *PFNGLFLUSHPROC)(void);
typedef void (GLAPIENTRY *PFNGLFLUSHMAPPEDBUFFERRANGEPROC)(GLenum target, GLintptr offset, GLsizeiptr length);
typedef void (GLAPIENTRY *PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC)(GLenum target, GLintptr offset, GLsizeiptr length);
typedef void (GLAPIENTRY *PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC)(GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef void (GLAPIENTRY *PFNGLFOGCOORDPOINTERPROC)(GLenum type, GLsizei stride, const void * pointer);
typedef void (GLAPIENTRY *PFNGLFOGCOORDDPROC)(GLdouble coord);
typedef void (GLAPIENTRY *PFNGLFOGCOORDDVPROC)(const GLdouble * coord);
typedef void (GLAPIENTRY *PFNGLFOGCOORDFPROC)(GLfloat coord);
typedef void (GLAPIENTRY *PFNGLFOGCOORDFVPROC)(const GLfloat * coord);
typedef void (GLAPIENTRY *PFNGLFOGFPROC)(GLenum pname, GLfloat param);
typedef void (GLAPIENTRY *PFNGLFOGFVPROC)(GLenum pname, const GLfloat * params);
typedef void (GLAPIENTRY *PFNGLFOGIPROC)(GLenum pname, GLint param);
typedef void (GLAPIENTRY *PFNGLFOGIVPROC)(GLenum pname, const GLint * params);
typedef void (GLAPIENTRY *PFNGLFOGXPROC)(GLenum pname, GLfixed param);
typedef void (GLAPIENTRY *PFNGLFOGXVPROC)(GLenum pname, const GLfixed * param);
typedef void (GLAPIENTRY *PFNGLFRAMEBUFFERPARAMETERIPROC)(GLenum target, GLenum pname, GLint param);
typedef void (GLAPIENTRY *PFNGLFRAMEBUFFERRENDERBUFFERPROC)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (GLAPIENTRY *PFNGLFRAMEBUFFERTEXTUREPROC)(GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (GLAPIENTRY *PFNGLFRAMEBUFFERTEXTURE1DPROC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (GLAPIENTRY *PFNGLFRAMEBUFFERTEXTURE2DPROC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (GLAPIENTRY *PFNGLFRAMEBUFFERTEXTURE3DPROC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void (GLAPIENTRY *PFNGLFRAMEBUFFERTEXTURELAYERPROC)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void (GLAPIENTRY *PFNGLFRONTFACEPROC)(GLenum mode);
typedef void (GLAPIENTRY *PFNGLFRUSTUMPROC)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
typedef void (GLAPIENTRY *PFNGLFRUSTUMFPROC)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
typedef void (GLAPIENTRY *PFNGLFRUSTUMFOESPROC)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
typedef void (GLAPIENTRY *PFNGLFRUSTUMXPROC)(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
typedef void (GLAPIENTRY *PFNGLGENBUFFERSPROC)(GLsizei n, GLuint * buffers);
typedef void (GLAPIENTRY *PFNGLGENBUFFERSARBPROC)(GLsizei n, GLuint * buffers);
typedef void (GLAPIENTRY *PFNGLGENFRAMEBUFFERSPROC)(GLsizei n, GLuint * framebuffers);
typedef GLuint (GLAPIENTRY *PFNGLGENLISTSPROC)(GLsizei range);
typedef void (GLAPIENTRY *PFNGLGENPROGRAMPIPELINESPROC)(GLsizei n, GLuint * pipelines);
typedef void (GLAPIENTRY *PFNGLGENQUERIESPROC)(GLsizei n, GLuint * ids);
typedef void (GLAPIENTRY *PFNGLGENRENDERBUFFERSPROC)(GLsizei n, GLuint * renderbuffers);
typedef void (GLAPIENTRY *PFNGLGENSAMPLERSPROC)(GLsizei count, GLuint * samplers);
typedef void (GLAPIENTRY *PFNGLGENTEXTURESPROC)(GLsizei n, GLuint * textures);
typedef void (GLAPIENTRY *PFNGLGENTRANSFORMFEEDBACKSPROC)(GLsizei n, GLuint * ids);
typedef void (GLAPIENTRY *PFNGLGENVERTEXARRAYSPROC)(GLsizei n, GLuint * arrays);
typedef void (GLAPIENTRY *PFNGLGENERATEMIPMAPPROC)(GLenum target);
typedef void (GLAPIENTRY *PFNGLGENERATETEXTUREMIPMAPPROC)(GLuint texture);
typedef void (GLAPIENTRY *PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC)(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETACTIVEATTRIBPROC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);
typedef void (GLAPIENTRY *PFNGLGETACTIVESUBROUTINENAMEPROC)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name);
typedef void (GLAPIENTRY *PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name);
typedef void (GLAPIENTRY *PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC)(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values);
typedef void (GLAPIENTRY *PFNGLGETACTIVEUNIFORMPROC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);
typedef void (GLAPIENTRY *PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName);
typedef void (GLAPIENTRY *PFNGLGETACTIVEUNIFORMBLOCKIVPROC)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETACTIVEUNIFORMNAMEPROC)(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName);
typedef void (GLAPIENTRY *PFNGLGETACTIVEUNIFORMSIVPROC)(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETATTACHEDSHADERSPROC)(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders);
typedef GLint (GLAPIENTRY *PFNGLGETATTRIBLOCATIONPROC)(GLuint program, const GLchar * name);
typedef void (GLAPIENTRY *PFNGLGETBOOLEANI_VPROC)(GLenum target, GLuint index, GLboolean * data);
typedef void (GLAPIENTRY *PFNGLGETBOOLEANVPROC)(GLenum pname, GLboolean * data);
typedef void (GLAPIENTRY *PFNGLGETBUFFERPARAMETERI64VPROC)(GLenum target, GLenum pname, GLint64 * params);
typedef void (GLAPIENTRY *PFNGLGETBUFFERPARAMETERIVPROC)(GLenum target, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETBUFFERPARAMETERIVARBPROC)(GLenum target, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETBUFFERPOINTERVPROC)(GLenum target, GLenum pname, void ** params);
typedef void (GLAPIENTRY *PFNGLGETBUFFERPOINTERVARBPROC)(GLenum target, GLenum pname, void ** params);
typedef void (GLAPIENTRY *PFNGLGETBUFFERPOINTERVOESPROC)(GLenum target, GLenum pname, void ** params);
typedef void (GLAPIENTRY *PFNGLGETBUFFERSUBDATAPROC)(GLenum target, GLintptr offset, GLsizeiptr size, void * data);
typedef void (GLAPIENTRY *PFNGLGETBUFFERSUBDATAARBPROC)(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data);
typedef void (GLAPIENTRY *PFNGLGETCLIPPLANEPROC)(GLenum plane, GLdouble * equation);
typedef void (GLAPIENTRY *PFNGLGETCLIPPLANEFPROC)(GLenum plane, GLfloat * equation);
typedef void (GLAPIENTRY *PFNGLGETCLIPPLANEFOESPROC)(GLenum plane, GLfloat * equation);
typedef void (GLAPIENTRY *PFNGLGETCLIPPLANEXPROC)(GLenum plane, GLfixed * equation);
typedef void (GLAPIENTRY *PFNGLGETCOMPRESSEDTEXIMAGEPROC)(GLenum target, GLint level, void * img);
typedef void (GLAPIENTRY *PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC)(GLuint texture, GLint level, GLsizei bufSize, void * pixels);
typedef void (GLAPIENTRY *PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels);
typedef GLuint (GLAPIENTRY *PFNGLGETDEBUGMESSAGELOGPROC)(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
typedef GLuint (GLAPIENTRY *PFNGLGETDEBUGMESSAGELOGARBPROC)(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
typedef GLuint (GLAPIENTRY *PFNGLGETDEBUGMESSAGELOGKHRPROC)(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
typedef void (GLAPIENTRY *PFNGLGETDOUBLEI_VPROC)(GLenum target, GLuint index, GLdouble * data);
typedef void (GLAPIENTRY *PFNGLGETDOUBLEVPROC)(GLenum pname, GLdouble * data);
typedef GLenum (GLAPIENTRY *PFNGLGETERRORPROC)(void);
typedef void (GLAPIENTRY *PFNGLGETFIXEDVPROC)(GLenum pname, GLfixed * params);
typedef void (GLAPIENTRY *PFNGLGETFLOATI_VPROC)(GLenum target, GLuint index, GLfloat * data);
typedef void (GLAPIENTRY *PFNGLGETFLOATVPROC)(GLenum pname, GLfloat * data);
typedef GLint (GLAPIENTRY *PFNGLGETFRAGDATAINDEXPROC)(GLuint program, const GLchar * name);
typedef GLint (GLAPIENTRY *PFNGLGETFRAGDATALOCATIONPROC)(GLuint program, const GLchar * name);
typedef void (GLAPIENTRY *PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)(GLenum target, GLenum attachment, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETFRAMEBUFFERPARAMETERIVPROC)(GLenum target, GLenum pname, GLint * params);
typedef GLenum (GLAPIENTRY *PFNGLGETGRAPHICSRESETSTATUSPROC)(void);
typedef void (GLAPIENTRY *PFNGLGETINTEGER64I_VPROC)(GLenum target, GLuint index, GLint64 * data);
typedef void (GLAPIENTRY *PFNGLGETINTEGER64VPROC)(GLenum pname, GLint64 * data);
typedef void (GLAPIENTRY *PFNGLGETINTEGERI_VPROC)(GLenum target, GLuint index, GLint * data);
typedef void (GLAPIENTRY *PFNGLGETINTEGERVPROC)(GLenum pname, GLint * data);
typedef void (GLAPIENTRY *PFNGLGETINTERNALFORMATI64VPROC)(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params);
typedef void (GLAPIENTRY *PFNGLGETINTERNALFORMATIVPROC)(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETLIGHTFVPROC)(GLenum light, GLenum pname, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETLIGHTIVPROC)(GLenum light, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETLIGHTXVPROC)(GLenum light, GLenum pname, GLfixed * params);
typedef void (GLAPIENTRY *PFNGLGETMAPDVPROC)(GLenum target, GLenum query, GLdouble * v);
typedef void (GLAPIENTRY *PFNGLGETMAPFVPROC)(GLenum target, GLenum query, GLfloat * v);
typedef void (GLAPIENTRY *PFNGLGETMAPIVPROC)(GLenum target, GLenum query, GLint * v);
typedef void (GLAPIENTRY *PFNGLGETMATERIALFVPROC)(GLenum face, GLenum pname, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETMATERIALIVPROC)(GLenum face, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETMATERIALXVPROC)(GLenum face, GLenum pname, GLfixed * params);
typedef void (GLAPIENTRY *PFNGLGETMULTISAMPLEFVPROC)(GLenum pname, GLuint index, GLfloat * val);
typedef void (GLAPIENTRY *PFNGLGETNAMEDBUFFERPARAMETERI64VPROC)(GLuint buffer, GLenum pname, GLint64 * params);
typedef void (GLAPIENTRY *PFNGLGETNAMEDBUFFERPARAMETERIVPROC)(GLuint buffer, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETNAMEDBUFFERPOINTERVPROC)(GLuint buffer, GLenum pname, void ** params);
typedef void (GLAPIENTRY *PFNGLGETNAMEDBUFFERSUBDATAPROC)(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);
typedef void (GLAPIENTRY *PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC)(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC)(GLuint framebuffer, GLenum pname, GLint * param);
typedef void (GLAPIENTRY *PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC)(GLuint renderbuffer, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETOBJECTLABELPROC)(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label);
typedef void (GLAPIENTRY *PFNGLGETOBJECTLABELKHRPROC)(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label);
typedef void (GLAPIENTRY *PFNGLGETOBJECTPTRLABELPROC)(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label);
typedef void (GLAPIENTRY *PFNGLGETOBJECTPTRLABELKHRPROC)(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label);
typedef void (GLAPIENTRY *PFNGLGETPIXELMAPFVPROC)(GLenum map, GLfloat * values);
typedef void (GLAPIENTRY *PFNGLGETPIXELMAPUIVPROC)(GLenum map, GLuint * values);
typedef void (GLAPIENTRY *PFNGLGETPIXELMAPUSVPROC)(GLenum map, GLushort * values);
typedef void (GLAPIENTRY *PFNGLGETPOINTERVPROC)(GLenum pname, void ** params);
typedef void (GLAPIENTRY *PFNGLGETPOINTERVKHRPROC)(GLenum pname, void ** params);
typedef void (GLAPIENTRY *PFNGLGETPOLYGONSTIPPLEPROC)(GLubyte * mask);
typedef void (GLAPIENTRY *PFNGLGETPROGRAMBINARYPROC)(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary);
typedef void (GLAPIENTRY *PFNGLGETPROGRAMINFOLOGPROC)(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
typedef void (GLAPIENTRY *PFNGLGETPROGRAMINTERFACEIVPROC)(GLuint program, GLenum programInterface, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETPROGRAMPIPELINEINFOLOGPROC)(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
typedef void (GLAPIENTRY *PFNGLGETPROGRAMPIPELINEIVPROC)(GLuint pipeline, GLenum pname, GLint * params);
typedef GLuint (GLAPIENTRY *PFNGLGETPROGRAMRESOURCEINDEXPROC)(GLuint program, GLenum programInterface, const GLchar * name);
typedef GLint (GLAPIENTRY *PFNGLGETPROGRAMRESOURCELOCATIONPROC)(GLuint program, GLenum programInterface, const GLchar * name);
typedef GLint (GLAPIENTRY *PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC)(GLuint program, GLenum programInterface, const GLchar * name);
typedef void (GLAPIENTRY *PFNGLGETPROGRAMRESOURCENAMEPROC)(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);
typedef void (GLAPIENTRY *PFNGLGETPROGRAMRESOURCEIVPROC)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETPROGRAMSTAGEIVPROC)(GLuint program, GLenum shadertype, GLenum pname, GLint * values);
typedef void (GLAPIENTRY *PFNGLGETPROGRAMIVPROC)(GLuint program, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETQUERYBUFFEROBJECTI64VPROC)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (GLAPIENTRY *PFNGLGETQUERYBUFFEROBJECTIVPROC)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (GLAPIENTRY *PFNGLGETQUERYBUFFEROBJECTUI64VPROC)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (GLAPIENTRY *PFNGLGETQUERYBUFFEROBJECTUIVPROC)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (GLAPIENTRY *PFNGLGETQUERYINDEXEDIVPROC)(GLenum target, GLuint index, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETQUERYOBJECTI64VPROC)(GLuint id, GLenum pname, GLint64 * params);
typedef void (GLAPIENTRY *PFNGLGETQUERYOBJECTIVPROC)(GLuint id, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETQUERYOBJECTUI64VPROC)(GLuint id, GLenum pname, GLuint64 * params);
typedef void (GLAPIENTRY *PFNGLGETQUERYOBJECTUIVPROC)(GLuint id, GLenum pname, GLuint * params);
typedef void (GLAPIENTRY *PFNGLGETQUERYIVPROC)(GLenum target, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETRENDERBUFFERPARAMETERIVPROC)(GLenum target, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETSAMPLERPARAMETERIIVPROC)(GLuint sampler, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETSAMPLERPARAMETERIUIVPROC)(GLuint sampler, GLenum pname, GLuint * params);
typedef void (GLAPIENTRY *PFNGLGETSAMPLERPARAMETERFVPROC)(GLuint sampler, GLenum pname, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETSAMPLERPARAMETERIVPROC)(GLuint sampler, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETSHADERINFOLOGPROC)(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
typedef void (GLAPIENTRY *PFNGLGETSHADERPRECISIONFORMATPROC)(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision);
typedef void (GLAPIENTRY *PFNGLGETSHADERSOURCEPROC)(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source);
typedef void (GLAPIENTRY *PFNGLGETSHADERIVPROC)(GLuint shader, GLenum pname, GLint * params);
typedef const GLubyte * (GLAPIENTRY *PFNGLGETSTRINGPROC)(GLenum name);
typedef const GLubyte * (GLAPIENTRY *PFNGLGETSTRINGIPROC)(GLenum name, GLuint index);
typedef GLuint (GLAPIENTRY *PFNGLGETSUBROUTINEINDEXPROC)(GLuint program, GLenum shadertype, const GLchar * name);
typedef GLint (GLAPIENTRY *PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC)(GLuint program, GLenum shadertype, const GLchar * name);
typedef void (GLAPIENTRY *PFNGLGETSYNCIVPROC)(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values);
typedef void (GLAPIENTRY *PFNGLGETTEXENVFVPROC)(GLenum target, GLenum pname, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETTEXENVIVPROC)(GLenum target, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETTEXENVXVPROC)(GLenum target, GLenum pname, GLfixed * params);
typedef void (GLAPIENTRY *PFNGLGETTEXGENDVPROC)(GLenum coord, GLenum pname, GLdouble * params);
typedef void (GLAPIENTRY *PFNGLGETTEXGENFVPROC)(GLenum coord, GLenum pname, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETTEXGENIVPROC)(GLenum coord, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETTEXIMAGEPROC)(GLenum target, GLint level, GLenum format, GLenum type, void * pixels);
typedef void (GLAPIENTRY *PFNGLGETTEXLEVELPARAMETERFVPROC)(GLenum target, GLint level, GLenum pname, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETTEXLEVELPARAMETERIVPROC)(GLenum target, GLint level, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETTEXPARAMETERIIVPROC)(GLenum target, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETTEXPARAMETERIUIVPROC)(GLenum target, GLenum pname, GLuint * params);
typedef void (GLAPIENTRY *PFNGLGETTEXPARAMETERFVPROC)(GLenum target, GLenum pname, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETTEXPARAMETERIVPROC)(GLenum target, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETTEXPARAMETERXVPROC)(GLenum target, GLenum pname, GLfixed * params);
typedef void (GLAPIENTRY *PFNGLGETTEXTUREIMAGEPROC)(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
typedef void (GLAPIENTRY *PFNGLGETTEXTURELEVELPARAMETERFVPROC)(GLuint texture, GLint level, GLenum pname, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETTEXTURELEVELPARAMETERIVPROC)(GLuint texture, GLint level, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETTEXTUREPARAMETERIIVPROC)(GLuint texture, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETTEXTUREPARAMETERIUIVPROC)(GLuint texture, GLenum pname, GLuint * params);
typedef void (GLAPIENTRY *PFNGLGETTEXTUREPARAMETERFVPROC)(GLuint texture, GLenum pname, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETTEXTUREPARAMETERIVPROC)(GLuint texture, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETTEXTURESUBIMAGEPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
typedef void (GLAPIENTRY *PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name);
typedef void (GLAPIENTRY *PFNGLGETTRANSFORMFEEDBACKI64_VPROC)(GLuint xfb, GLenum pname, GLuint index, GLint64 * param);
typedef void (GLAPIENTRY *PFNGLGETTRANSFORMFEEDBACKI_VPROC)(GLuint xfb, GLenum pname, GLuint index, GLint * param);
typedef void (GLAPIENTRY *PFNGLGETTRANSFORMFEEDBACKIVPROC)(GLuint xfb, GLenum pname, GLint * param);
typedef GLuint (GLAPIENTRY *PFNGLGETUNIFORMBLOCKINDEXPROC)(GLuint program, const GLchar * uniformBlockName);
typedef void (GLAPIENTRY *PFNGLGETUNIFORMINDICESPROC)(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices);
typedef GLint (GLAPIENTRY *PFNGLGETUNIFORMLOCATIONPROC)(GLuint program, const GLchar * name);
typedef void (GLAPIENTRY *PFNGLGETUNIFORMSUBROUTINEUIVPROC)(GLenum shadertype, GLint location, GLuint * params);
typedef void (GLAPIENTRY *PFNGLGETUNIFORMDVPROC)(GLuint program, GLint location, GLdouble * params);
typedef void (GLAPIENTRY *PFNGLGETUNIFORMFVPROC)(GLuint program, GLint location, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETUNIFORMIVPROC)(GLuint program, GLint location, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETUNIFORMUIVPROC)(GLuint program, GLint location, GLuint * params);
typedef void (GLAPIENTRY *PFNGLGETVERTEXARRAYINDEXED64IVPROC)(GLuint vaobj, GLuint index, GLenum pname, GLint64 * param);
typedef void (GLAPIENTRY *PFNGLGETVERTEXARRAYINDEXEDIVPROC)(GLuint vaobj, GLuint index, GLenum pname, GLint * param);
typedef void (GLAPIENTRY *PFNGLGETVERTEXARRAYIVPROC)(GLuint vaobj, GLenum pname, GLint * param);
typedef void (GLAPIENTRY *PFNGLGETVERTEXATTRIBIIVPROC)(GLuint index, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETVERTEXATTRIBIUIVPROC)(GLuint index, GLenum pname, GLuint * params);
typedef void (GLAPIENTRY *PFNGLGETVERTEXATTRIBLDVPROC)(GLuint index, GLenum pname, GLdouble * params);
typedef void (GLAPIENTRY *PFNGLGETVERTEXATTRIBPOINTERVPROC)(GLuint index, GLenum pname, void ** pointer);
typedef void (GLAPIENTRY *PFNGLGETVERTEXATTRIBDVPROC)(GLuint index, GLenum pname, GLdouble * params);
typedef void (GLAPIENTRY *PFNGLGETVERTEXATTRIBFVPROC)(GLuint index, GLenum pname, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETVERTEXATTRIBIVPROC)(GLuint index, GLenum pname, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETNCOLORTABLEPROC)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table);
typedef void (GLAPIENTRY *PFNGLGETNCOMPRESSEDTEXIMAGEPROC)(GLenum target, GLint lod, GLsizei bufSize, void * pixels);
typedef void (GLAPIENTRY *PFNGLGETNCONVOLUTIONFILTERPROC)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image);
typedef void (GLAPIENTRY *PFNGLGETNHISTOGRAMPROC)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values);
typedef void (GLAPIENTRY *PFNGLGETNMAPDVPROC)(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v);
typedef void (GLAPIENTRY *PFNGLGETNMAPFVPROC)(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v);
typedef void (GLAPIENTRY *PFNGLGETNMAPIVPROC)(GLenum target, GLenum query, GLsizei bufSize, GLint * v);
typedef void (GLAPIENTRY *PFNGLGETNMINMAXPROC)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values);
typedef void (GLAPIENTRY *PFNGLGETNPIXELMAPFVPROC)(GLenum map, GLsizei bufSize, GLfloat * values);
typedef void (GLAPIENTRY *PFNGLGETNPIXELMAPUIVPROC)(GLenum map, GLsizei bufSize, GLuint * values);
typedef void (GLAPIENTRY *PFNGLGETNPIXELMAPUSVPROC)(GLenum map, GLsizei bufSize, GLushort * values);
typedef void (GLAPIENTRY *PFNGLGETNPOLYGONSTIPPLEPROC)(GLsizei bufSize, GLubyte * pattern);
typedef void (GLAPIENTRY *PFNGLGETNSEPARABLEFILTERPROC)(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span);
typedef void (GLAPIENTRY *PFNGLGETNTEXIMAGEPROC)(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
typedef void (GLAPIENTRY *PFNGLGETNUNIFORMDVPROC)(GLuint program, GLint location, GLsizei bufSize, GLdouble * params);
typedef void (GLAPIENTRY *PFNGLGETNUNIFORMFVPROC)(GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
typedef void (GLAPIENTRY *PFNGLGETNUNIFORMIVPROC)(GLuint program, GLint location, GLsizei bufSize, GLint * params);
typedef void (GLAPIENTRY *PFNGLGETNUNIFORMUIVPROC)(GLuint program, GLint location, GLsizei bufSize, GLuint * params);
typedef void (GLAPIENTRY *PFNGLHINTPROC)(GLenum target, GLenum mode);
typedef void (GLAPIENTRY *PFNGLINDEXMASKPROC)(GLuint mask);
typedef void (GLAPIENTRY *PFNGLINDEXPOINTERPROC)(GLenum type, GLsizei stride, const void * pointer);
typedef void (GLAPIENTRY *PFNGLINDEXDPROC)(GLdouble c);
typedef void (GLAPIENTRY *PFNGLINDEXDVPROC)(const GLdouble * c);
typedef void (GLAPIENTRY *PFNGLINDEXFPROC)(GLfloat c);
typedef void (GLAPIENTRY *PFNGLINDEXFVPROC)(const GLfloat * c);
typedef void (GLAPIENTRY *PFNGLINDEXIPROC)(GLint c);
typedef void (GLAPIENTRY *PFNGLINDEXIVPROC)(const GLint * c);
typedef void (GLAPIENTRY *PFNGLINDEXSPROC)(GLshort c);
typedef void (GLAPIENTRY *PFNGLINDEXSVPROC)(const GLshort * c);
typedef void (GLAPIENTRY *PFNGLINDEXUBPROC)(GLubyte c);
typedef void (GLAPIENTRY *PFNGLINDEXUBVPROC)(const GLubyte * c);
typedef void (GLAPIENTRY *PFNGLINITNAMESPROC)(void);
typedef void (GLAPIENTRY *PFNGLINTERLEAVEDARRAYSPROC)(GLenum format, GLsizei stride, const void * pointer);
typedef void (GLAPIENTRY *PFNGLINVALIDATEBUFFERDATAPROC)(GLuint buffer);
typedef void (GLAPIENTRY *PFNGLINVALIDATEBUFFERSUBDATAPROC)(GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef void (GLAPIENTRY *PFNGLINVALIDATEFRAMEBUFFERPROC)(GLenum target, GLsizei numAttachments, const GLenum * attachments);
typedef void (GLAPIENTRY *PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC)(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments);
typedef void (GLAPIENTRY *PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC)(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *PFNGLINVALIDATESUBFRAMEBUFFERPROC)(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *PFNGLINVALIDATETEXIMAGEPROC)(GLuint texture, GLint level);
typedef void (GLAPIENTRY *PFNGLINVALIDATETEXSUBIMAGEPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
typedef GLboolean (GLAPIENTRY *PFNGLISBUFFERPROC)(GLuint buffer);
typedef GLboolean (GLAPIENTRY *PFNGLISBUFFERARBPROC)(GLuint buffer);
typedef GLboolean (GLAPIENTRY *PFNGLISENABLEDPROC)(GLenum cap);
typedef GLboolean (GLAPIENTRY *PFNGLISENABLEDIPROC)(GLenum target, GLuint index);
typedef GLboolean (GLAPIENTRY *PFNGLISFRAMEBUFFERPROC)(GLuint framebuffer);
typedef GLboolean (GLAPIENTRY *PFNGLISLISTPROC)(GLuint list);
typedef GLboolean (GLAPIENTRY *PFNGLISPROGRAMPROC)(GLuint program);
typedef GLboolean (GLAPIENTRY *PFNGLISPROGRAMPIPELINEPROC)(GLuint pipeline);
typedef GLboolean (GLAPIENTRY *PFNGLISQUERYPROC)(GLuint id);
typedef GLboolean (GLAPIENTRY *PFNGLISRENDERBUFFERPROC)(GLuint renderbuffer);
typedef GLboolean (GLAPIENTRY *PFNGLISSAMPLERPROC)(GLuint sampler);
typedef GLboolean (GLAPIENTRY *PFNGLISSHADERPROC)(GLuint shader);
typedef GLboolean (GLAPIENTRY *PFNGLISSYNCPROC)(GLsync sync);
typedef GLboolean (GLAPIENTRY *PFNGLISTEXTUREPROC)(GLuint texture);
typedef GLboolean (GLAPIENTRY *PFNGLISTRANSFORMFEEDBACKPROC)(GLuint id);
typedef GLboolean (GLAPIENTRY *PFNGLISVERTEXARRAYPROC)(GLuint array);
typedef void (GLAPIENTRY *PFNGLLIGHTMODELFPROC)(GLenum pname, GLfloat param);
typedef void (GLAPIENTRY *PFNGLLIGHTMODELFVPROC)(GLenum pname, const GLfloat * params);
typedef void (GLAPIENTRY *PFNGLLIGHTMODELIPROC)(GLenum pname, GLint param);
typedef void (GLAPIENTRY *PFNGLLIGHTMODELIVPROC)(GLenum pname, const GLint * params);
typedef void (GLAPIENTRY *PFNGLLIGHTMODELXPROC)(GLenum pname, GLfixed param);
typedef void (GLAPIENTRY *PFNGLLIGHTMODELXVPROC)(GLenum pname, const GLfixed * param);
typedef void (GLAPIENTRY *PFNGLLIGHTFPROC)(GLenum light, GLenum pname, GLfloat param);
typedef void (GLAPIENTRY *PFNGLLIGHTFVPROC)(GLenum light, GLenum pname, const GLfloat * params);
typedef void (GLAPIENTRY *PFNGLLIGHTIPROC)(GLenum light, GLenum pname, GLint param);
typedef void (GLAPIENTRY *PFNGLLIGHTIVPROC)(GLenum light, GLenum pname, const GLint * params);
typedef void (GLAPIENTRY *PFNGLLIGHTXPROC)(GLenum light, GLenum pname, GLfixed param);
typedef void (GLAPIENTRY *PFNGLLIGHTXVPROC)(GLenum light, GLenum pname, const GLfixed * params);
typedef void (GLAPIENTRY *PFNGLLINESTIPPLEPROC)(GLint factor, GLushort pattern);
typedef void (GLAPIENTRY *PFNGLLINEWIDTHPROC)(GLfloat width);
typedef void (GLAPIENTRY *PFNGLLINEWIDTHXPROC)(GLfixed width);
typedef void (GLAPIENTRY *PFNGLLINKPROGRAMPROC)(GLuint program);
typedef void (GLAPIENTRY *PFNGLLISTBASEPROC)(GLuint base);
typedef void (GLAPIENTRY *PFNGLLOADIDENTITYPROC)(void);
typedef void (GLAPIENTRY *PFNGLLOADMATRIXDPROC)(const GLdouble * m);
typedef void (GLAPIENTRY *PFNGLLOADMATRIXFPROC)(const GLfloat * m);
typedef void (GLAPIENTRY *PFNGLLOADMATRIXXPROC)(const GLfixed * m);
typedef void (GLAPIENTRY *PFNGLLOADNAMEPROC)(GLuint name);
typedef void (GLAPIENTRY *PFNGLLOADTRANSPOSEMATRIXDPROC)(const GLdouble * m);
typedef void (GLAPIENTRY *PFNGLLOADTRANSPOSEMATRIXFPROC)(const GLfloat * m);
typedef void (GLAPIENTRY *PFNGLLOGICOPPROC)(GLenum opcode);
typedef void (GLAPIENTRY *PFNGLMAP1DPROC)(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points);
typedef void (GLAPIENTRY *PFNGLMAP1FPROC)(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points);
typedef void (GLAPIENTRY *PFNGLMAP2DPROC)(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points);
typedef void (GLAPIENTRY *PFNGLMAP2FPROC)(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points);
typedef void * (GLAPIENTRY *PFNGLMAPBUFFERPROC)(GLenum target, GLenum access);
typedef void * (GLAPIENTRY *PFNGLMAPBUFFERARBPROC)(GLenum target, GLenum access);
typedef void * (GLAPIENTRY *PFNGLMAPBUFFEROESPROC)(GLenum target, GLenum access);
typedef void * (GLAPIENTRY *PFNGLMAPBUFFERRANGEPROC)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void * (GLAPIENTRY *PFNGLMAPBUFFERRANGEEXTPROC)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (GLAPIENTRY *PFNGLMAPGRID1DPROC)(GLint un, GLdouble u1, GLdouble u2);
typedef void (GLAPIENTRY *PFNGLMAPGRID1FPROC)(GLint un, GLfloat u1, GLfloat u2);
typedef void (GLAPIENTRY *PFNGLMAPGRID2DPROC)(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
typedef void (GLAPIENTRY *PFNGLMAPGRID2FPROC)(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
typedef void * (GLAPIENTRY *PFNGLMAPNAMEDBUFFERPROC)(GLuint buffer, GLenum access);
typedef void * (GLAPIENTRY *PFNGLMAPNAMEDBUFFERRANGEPROC)(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (GLAPIENTRY *PFNGLMATERIALFPROC)(GLenum face, GLenum pname, GLfloat param);
typedef void (GLAPIENTRY *PFNGLMATERIALFVPROC)(GLenum face, GLenum pname, const GLfloat * params);
typedef void (GLAPIENTRY *PFNGLMATERIALIPROC)(GLenum face, GLenum pname, GLint param);
typedef void (GLAPIENTRY *PFNGLMATERIALIVPROC)(GLenum face, GLenum pname, const GLint * params);
typedef void (GLAPIENTRY *PFNGLMATERIALXPROC)(GLenum face, GLenum pname, GLfixed param);
typedef void (GLAPIENTRY *PFNGLMATERIALXVPROC)(GLenum face, GLenum pname, const GLfixed * param);
typedef void (GLAPIENTRY *PFNGLMATRIXMODEPROC)(GLenum mode);
typedef void (GLAPIENTRY *PFNGLMEMORYBARRIERPROC)(GLbitfield barriers);
typedef void (GLAPIENTRY *PFNGLMEMORYBARRIERBYREGIONPROC)(GLbitfield barriers);
typedef void (GLAPIENTRY *PFNGLMINSAMPLESHADINGPROC)(GLfloat value);
typedef void (GLAPIENTRY *PFNGLMINSAMPLESHADINGARBPROC)(GLfloat value);
typedef void (GLAPIENTRY *PFNGLMINSAMPLESHADINGOESPROC)(GLfloat value);
typedef void (GLAPIENTRY *PFNGLMULTMATRIXDPROC)(const GLdouble * m);
typedef void (GLAPIENTRY *PFNGLMULTMATRIXFPROC)(const GLfloat * m);
typedef void (GLAPIENTRY *PFNGLMULTMATRIXXPROC)(const GLfixed * m);
typedef void (GLAPIENTRY *PFNGLMULTTRANSPOSEMATRIXDPROC)(const GLdouble * m);
typedef void (GLAPIENTRY *PFNGLMULTTRANSPOSEMATRIXFPROC)(const GLfloat * m);
typedef void (GLAPIENTRY *PFNGLMULTIDRAWARRAYSPROC)(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount);
typedef void (GLAPIENTRY *PFNGLMULTIDRAWARRAYSINDIRECTPROC)(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride);
typedef void (GLAPIENTRY *PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC)(GLenum mode, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
typedef void (GLAPIENTRY *PFNGLMULTIDRAWELEMENTSPROC)(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount);
typedef void (GLAPIENTRY *PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex);
typedef void (GLAPIENTRY *PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC)(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, const GLint * basevertex);
typedef void (GLAPIENTRY *PFNGLMULTIDRAWELEMENTSINDIRECTPROC)(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride);
typedef void (GLAPIENTRY *PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC)(GLenum mode, GLenum type, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD1DPROC)(GLenum target, GLdouble s);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD1DVPROC)(GLenum target, const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD1FPROC)(GLenum target, GLfloat s);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD1FVPROC)(GLenum target, const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD1IPROC)(GLenum target, GLint s);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD1IVPROC)(GLenum target, const GLint * v);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD1SPROC)(GLenum target, GLshort s);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD1SVPROC)(GLenum target, const GLshort * v);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD2DPROC)(GLenum target, GLdouble s, GLdouble t);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD2DVPROC)(GLenum target, const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD2FPROC)(GLenum target, GLfloat s, GLfloat t);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD2FVPROC)(GLenum target, const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD2IPROC)(GLenum target, GLint s, GLint t);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD2IVPROC)(GLenum target, const GLint * v);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD2SPROC)(GLenum target, GLshort s, GLshort t);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD2SVPROC)(GLenum target, const GLshort * v);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD3DPROC)(GLenum target, GLdouble s, GLdouble t, GLdouble r);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD3DVPROC)(GLenum target, const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD3FPROC)(GLenum target, GLfloat s, GLfloat t, GLfloat r);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD3FVPROC)(GLenum target, const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD3IPROC)(GLenum target, GLint s, GLint t, GLint r);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD3IVPROC)(GLenum target, const GLint * v);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD3SPROC)(GLenum target, GLshort s, GLshort t, GLshort r);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD3SVPROC)(GLenum target, const GLshort * v);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD4DPROC)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD4DVPROC)(GLenum target, const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD4FPROC)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD4FVPROC)(GLenum target, const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD4IPROC)(GLenum target, GLint s, GLint t, GLint r, GLint q);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD4IVPROC)(GLenum target, const GLint * v);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD4SPROC)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD4SVPROC)(GLenum target, const GLshort * v);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORD4XPROC)(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORDP1UIPROC)(GLenum texture, GLenum type, GLuint coords);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORDP1UIVPROC)(GLenum texture, GLenum type, const GLuint * coords);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORDP2UIPROC)(GLenum texture, GLenum type, GLuint coords);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORDP2UIVPROC)(GLenum texture, GLenum type, const GLuint * coords);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORDP3UIPROC)(GLenum texture, GLenum type, GLuint coords);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORDP3UIVPROC)(GLenum texture, GLenum type, const GLuint * coords);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORDP4UIPROC)(GLenum texture, GLenum type, GLuint coords);
typedef void (GLAPIENTRY *PFNGLMULTITEXCOORDP4UIVPROC)(GLenum texture, GLenum type, const GLuint * coords);
typedef void (GLAPIENTRY *PFNGLNAMEDBUFFERDATAPROC)(GLuint buffer, GLsizeiptr size, const void * data, GLenum usage);
typedef void (GLAPIENTRY *PFNGLNAMEDBUFFERSTORAGEPROC)(GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags);
typedef void (GLAPIENTRY *PFNGLNAMEDBUFFERSUBDATAPROC)(GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data);
typedef void (GLAPIENTRY *PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC)(GLuint framebuffer, GLenum buf);
typedef void (GLAPIENTRY *PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC)(GLuint framebuffer, GLsizei n, const GLenum * bufs);
typedef void (GLAPIENTRY *PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC)(GLuint framebuffer, GLenum pname, GLint param);
typedef void (GLAPIENTRY *PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC)(GLuint framebuffer, GLenum src);
typedef void (GLAPIENTRY *PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC)(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (GLAPIENTRY *PFNGLNAMEDFRAMEBUFFERTEXTUREPROC)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
typedef void (GLAPIENTRY *PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void (GLAPIENTRY *PFNGLNAMEDRENDERBUFFERSTORAGEPROC)(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC)(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *PFNGLNEWLISTPROC)(GLuint list, GLenum mode);
typedef void (GLAPIENTRY *PFNGLNORMAL3BPROC)(GLbyte nx, GLbyte ny, GLbyte nz);
typedef void (GLAPIENTRY *PFNGLNORMAL3BVPROC)(const GLbyte * v);
typedef void (GLAPIENTRY *PFNGLNORMAL3DPROC)(GLdouble nx, GLdouble ny, GLdouble nz);
typedef void (GLAPIENTRY *PFNGLNORMAL3DVPROC)(const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLNORMAL3FPROC)(GLfloat nx, GLfloat ny, GLfloat nz);
typedef void (GLAPIENTRY *PFNGLNORMAL3FVPROC)(const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLNORMAL3IPROC)(GLint nx, GLint ny, GLint nz);
typedef void (GLAPIENTRY *PFNGLNORMAL3IVPROC)(const GLint * v);
typedef void (GLAPIENTRY *PFNGLNORMAL3SPROC)(GLshort nx, GLshort ny, GLshort nz);
typedef void (GLAPIENTRY *PFNGLNORMAL3SVPROC)(const GLshort * v);
typedef void (GLAPIENTRY *PFNGLNORMAL3XPROC)(GLfixed nx, GLfixed ny, GLfixed nz);
typedef void (GLAPIENTRY *PFNGLNORMALP3UIPROC)(GLenum type, GLuint coords);
typedef void (GLAPIENTRY *PFNGLNORMALP3UIVPROC)(GLenum type, const GLuint * coords);
typedef void (GLAPIENTRY *PFNGLNORMALPOINTERPROC)(GLenum type, GLsizei stride, const void * pointer);
typedef void (GLAPIENTRY *PFNGLOBJECTLABELPROC)(GLenum identifier, GLuint name, GLsizei length, const GLchar * label);
typedef void (GLAPIENTRY *PFNGLOBJECTLABELKHRPROC)(GLenum identifier, GLuint name, GLsizei length, const GLchar * label);
typedef void (GLAPIENTRY *PFNGLOBJECTPTRLABELPROC)(const void * ptr, GLsizei length, const GLchar * label);
typedef void (GLAPIENTRY *PFNGLOBJECTPTRLABELKHRPROC)(const void * ptr, GLsizei length, const GLchar * label);
typedef void (GLAPIENTRY *PFNGLORTHOPROC)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
typedef void (GLAPIENTRY *PFNGLORTHOFPROC)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
typedef void (GLAPIENTRY *PFNGLORTHOFOESPROC)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
typedef void (GLAPIENTRY *PFNGLORTHOXPROC)(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
typedef void (GLAPIENTRY *PFNGLPASSTHROUGHPROC)(GLfloat token);
typedef void (GLAPIENTRY *PFNGLPATCHPARAMETERFVPROC)(GLenum pname, const GLfloat * values);
typedef void (GLAPIENTRY *PFNGLPATCHPARAMETERIPROC)(GLenum pname, GLint value);
typedef void (GLAPIENTRY *PFNGLPAUSETRANSFORMFEEDBACKPROC)(void);
typedef void (GLAPIENTRY *PFNGLPIXELMAPFVPROC)(GLenum map, GLsizei mapsize, const GLfloat * values);
typedef void (GLAPIENTRY *PFNGLPIXELMAPUIVPROC)(GLenum map, GLsizei mapsize, const GLuint * values);
typedef void (GLAPIENTRY *PFNGLPIXELMAPUSVPROC)(GLenum map, GLsizei mapsize, const GLushort * values);
typedef void (GLAPIENTRY *PFNGLPIXELSTOREFPROC)(GLenum pname, GLfloat param);
typedef void (GLAPIENTRY *PFNGLPIXELSTOREIPROC)(GLenum pname, GLint param);
typedef void (GLAPIENTRY *PFNGLPIXELTRANSFERFPROC)(GLenum pname, GLfloat param);
typedef void (GLAPIENTRY *PFNGLPIXELTRANSFERIPROC)(GLenum pname, GLint param);
typedef void (GLAPIENTRY *PFNGLPIXELZOOMPROC)(GLfloat xfactor, GLfloat yfactor);
typedef void (GLAPIENTRY *PFNGLPOINTPARAMETERFPROC)(GLenum pname, GLfloat param);
typedef void (GLAPIENTRY *PFNGLPOINTPARAMETERFVPROC)(GLenum pname, const GLfloat * params);
typedef void (GLAPIENTRY *PFNGLPOINTPARAMETERIPROC)(GLenum pname, GLint param);
typedef void (GLAPIENTRY *PFNGLPOINTPARAMETERIVPROC)(GLenum pname, const GLint * params);
typedef void (GLAPIENTRY *PFNGLPOINTPARAMETERXPROC)(GLenum pname, GLfixed param);
typedef void (GLAPIENTRY *PFNGLPOINTPARAMETERXVPROC)(GLenum pname, const GLfixed * params);
typedef void (GLAPIENTRY *PFNGLPOINTSIZEPROC)(GLfloat size);
typedef void (GLAPIENTRY *PFNGLPOINTSIZEXPROC)(GLfixed size);
typedef void (GLAPIENTRY *PFNGLPOLYGONMODEPROC)(GLenum face, GLenum mode);
typedef void (GLAPIENTRY *PFNGLPOLYGONOFFSETPROC)(GLfloat factor, GLfloat units);
typedef void (GLAPIENTRY *PFNGLPOLYGONOFFSETCLAMPPROC)(GLfloat factor, GLfloat units, GLfloat clamp);
typedef void (GLAPIENTRY *PFNGLPOLYGONOFFSETXPROC)(GLfixed factor, GLfixed units);
typedef void (GLAPIENTRY *PFNGLPOLYGONSTIPPLEPROC)(const GLubyte * mask);
typedef void (GLAPIENTRY *PFNGLPOPATTRIBPROC)(void);
typedef void (GLAPIENTRY *PFNGLPOPCLIENTATTRIBPROC)(void);
typedef void (GLAPIENTRY *PFNGLPOPDEBUGGROUPPROC)(void);
typedef void (GLAPIENTRY *PFNGLPOPDEBUGGROUPKHRPROC)(void);
typedef void (GLAPIENTRY *PFNGLPOPMATRIXPROC)(void);
typedef void (GLAPIENTRY *PFNGLPOPNAMEPROC)(void);
typedef void (GLAPIENTRY *PFNGLPRIMITIVEBOUNDINGBOXPROC)(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
typedef void (GLAPIENTRY *PFNGLPRIMITIVERESTARTINDEXPROC)(GLuint index);
typedef void (GLAPIENTRY *PFNGLPRIORITIZETEXTURESPROC)(GLsizei n, const GLuint * textures, const GLfloat * priorities);
typedef void (GLAPIENTRY *PFNGLPROGRAMBINARYPROC)(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length);
typedef void (GLAPIENTRY *PFNGLPROGRAMPARAMETERIPROC)(GLuint program, GLenum pname, GLint value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM1DPROC)(GLuint program, GLint location, GLdouble v0);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM1DVPROC)(GLuint program, GLint location, GLsizei count, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM1FPROC)(GLuint program, GLint location, GLfloat v0);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM1FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM1IPROC)(GLuint program, GLint location, GLint v0);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM1IVPROC)(GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM1UIPROC)(GLuint program, GLint location, GLuint v0);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM1UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM2DPROC)(GLuint program, GLint location, GLdouble v0, GLdouble v1);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM2DVPROC)(GLuint program, GLint location, GLsizei count, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM2FPROC)(GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM2FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM2IPROC)(GLuint program, GLint location, GLint v0, GLint v1);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM2IVPROC)(GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM2UIPROC)(GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM2UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM3DPROC)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM3DVPROC)(GLuint program, GLint location, GLsizei count, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM3FPROC)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM3FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM3IPROC)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM3IVPROC)(GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM3UIPROC)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM3UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM4DPROC)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM4DVPROC)(GLuint program, GLint location, GLsizei count, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM4FPROC)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM4FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM4IPROC)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM4IVPROC)(GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM4UIPROC)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORM4UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORMMATRIX2DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORMMATRIX2FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORMMATRIX3DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORMMATRIX3FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORMMATRIX4DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORMMATRIX4FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLPROVOKINGVERTEXPROC)(GLenum mode);
typedef void (GLAPIENTRY *PFNGLPUSHATTRIBPROC)(GLbitfield mask);
typedef void (GLAPIENTRY *PFNGLPUSHCLIENTATTRIBPROC)(GLbitfield mask);
typedef void (GLAPIENTRY *PFNGLPUSHDEBUGGROUPPROC)(GLenum source, GLuint id, GLsizei length, const GLchar * message);
typedef void (GLAPIENTRY *PFNGLPUSHDEBUGGROUPKHRPROC)(GLenum source, GLuint id, GLsizei length, const GLchar * message);
typedef void (GLAPIENTRY *PFNGLPUSHMATRIXPROC)(void);
typedef void (GLAPIENTRY *PFNGLPUSHNAMEPROC)(GLuint name);
typedef void (GLAPIENTRY *PFNGLQUERYCOUNTERPROC)(GLuint id, GLenum target);
typedef void (GLAPIENTRY *PFNGLRASTERPOS2DPROC)(GLdouble x, GLdouble y);
typedef void (GLAPIENTRY *PFNGLRASTERPOS2DVPROC)(const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLRASTERPOS2FPROC)(GLfloat x, GLfloat y);
typedef void (GLAPIENTRY *PFNGLRASTERPOS2FVPROC)(const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLRASTERPOS2IPROC)(GLint x, GLint y);
typedef void (GLAPIENTRY *PFNGLRASTERPOS2IVPROC)(const GLint * v);
typedef void (GLAPIENTRY *PFNGLRASTERPOS2SPROC)(GLshort x, GLshort y);
typedef void (GLAPIENTRY *PFNGLRASTERPOS2SVPROC)(const GLshort * v);
typedef void (GLAPIENTRY *PFNGLRASTERPOS3DPROC)(GLdouble x, GLdouble y, GLdouble z);
typedef void (GLAPIENTRY *PFNGLRASTERPOS3DVPROC)(const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLRASTERPOS3FPROC)(GLfloat x, GLfloat y, GLfloat z);
typedef void (GLAPIENTRY *PFNGLRASTERPOS3FVPROC)(const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLRASTERPOS3IPROC)(GLint x, GLint y, GLint z);
typedef void (GLAPIENTRY *PFNGLRASTERPOS3IVPROC)(const GLint * v);
typedef void (GLAPIENTRY *PFNGLRASTERPOS3SPROC)(GLshort x, GLshort y, GLshort z);
typedef void (GLAPIENTRY *PFNGLRASTERPOS3SVPROC)(const GLshort * v);
typedef void (GLAPIENTRY *PFNGLRASTERPOS4DPROC)(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLAPIENTRY *PFNGLRASTERPOS4DVPROC)(const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLRASTERPOS4FPROC)(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (GLAPIENTRY *PFNGLRASTERPOS4FVPROC)(const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLRASTERPOS4IPROC)(GLint x, GLint y, GLint z, GLint w);
typedef void (GLAPIENTRY *PFNGLRASTERPOS4IVPROC)(const GLint * v);
typedef void (GLAPIENTRY *PFNGLRASTERPOS4SPROC)(GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (GLAPIENTRY *PFNGLRASTERPOS4SVPROC)(const GLshort * v);
typedef void (GLAPIENTRY *PFNGLREADBUFFERPROC)(GLenum src);
typedef void (GLAPIENTRY *PFNGLREADPIXELSPROC)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);
typedef void (GLAPIENTRY *PFNGLREADNPIXELSPROC)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
typedef void (GLAPIENTRY *PFNGLRECTDPROC)(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
typedef void (GLAPIENTRY *PFNGLRECTDVPROC)(const GLdouble * v1, const GLdouble * v2);
typedef void (GLAPIENTRY *PFNGLRECTFPROC)(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
typedef void (GLAPIENTRY *PFNGLRECTFVPROC)(const GLfloat * v1, const GLfloat * v2);
typedef void (GLAPIENTRY *PFNGLRECTIPROC)(GLint x1, GLint y1, GLint x2, GLint y2);
typedef void (GLAPIENTRY *PFNGLRECTIVPROC)(const GLint * v1, const GLint * v2);
typedef void (GLAPIENTRY *PFNGLRECTSPROC)(GLshort x1, GLshort y1, GLshort x2, GLshort y2);
typedef void (GLAPIENTRY *PFNGLRECTSVPROC)(const GLshort * v1, const GLshort * v2);
typedef void (GLAPIENTRY *PFNGLRELEASESHADERCOMPILERPROC)(void);
typedef GLint (GLAPIENTRY *PFNGLRENDERMODEPROC)(GLenum mode);
typedef void (GLAPIENTRY *PFNGLRENDERBUFFERSTORAGEPROC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *PFNGLRESUMETRANSFORMFEEDBACKPROC)(void);
typedef void (GLAPIENTRY *PFNGLROTATEDPROC)(GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
typedef void (GLAPIENTRY *PFNGLROTATEFPROC)(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLAPIENTRY *PFNGLROTATEXPROC)(GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
typedef void (GLAPIENTRY *PFNGLSAMPLECOVERAGEPROC)(GLfloat value, GLboolean invert);
typedef void (GLAPIENTRY *PFNGLSAMPLECOVERAGEXPROC)(GLclampx value, GLboolean invert);
typedef void (GLAPIENTRY *PFNGLSAMPLEMASKIPROC)(GLuint maskNumber, GLbitfield mask);
typedef void (GLAPIENTRY *PFNGLSAMPLERPARAMETERIIVPROC)(GLuint sampler, GLenum pname, const GLint * param);
typedef void (GLAPIENTRY *PFNGLSAMPLERPARAMETERIUIVPROC)(GLuint sampler, GLenum pname, const GLuint * param);
typedef void (GLAPIENTRY *PFNGLSAMPLERPARAMETERFPROC)(GLuint sampler, GLenum pname, GLfloat param);
typedef void (GLAPIENTRY *PFNGLSAMPLERPARAMETERFVPROC)(GLuint sampler, GLenum pname, const GLfloat * param);
typedef void (GLAPIENTRY *PFNGLSAMPLERPARAMETERIPROC)(GLuint sampler, GLenum pname, GLint param);
typedef void (GLAPIENTRY *PFNGLSAMPLERPARAMETERIVPROC)(GLuint sampler, GLenum pname, const GLint * param);
typedef void (GLAPIENTRY *PFNGLSCALEDPROC)(GLdouble x, GLdouble y, GLdouble z);
typedef void (GLAPIENTRY *PFNGLSCALEFPROC)(GLfloat x, GLfloat y, GLfloat z);
typedef void (GLAPIENTRY *PFNGLSCALEXPROC)(GLfixed x, GLfixed y, GLfixed z);
typedef void (GLAPIENTRY *PFNGLSCISSORPROC)(GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *PFNGLSCISSORARRAYVPROC)(GLuint first, GLsizei count, const GLint * v);
typedef void (GLAPIENTRY *PFNGLSCISSORINDEXEDPROC)(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *PFNGLSCISSORINDEXEDVPROC)(GLuint index, const GLint * v);
typedef void (GLAPIENTRY *PFNGLSECONDARYCOLOR3BPROC)(GLbyte red, GLbyte green, GLbyte blue);
typedef void (GLAPIENTRY *PFNGLSECONDARYCOLOR3BVPROC)(const GLbyte * v);
typedef void (GLAPIENTRY *PFNGLSECONDARYCOLOR3DPROC)(GLdouble red, GLdouble green, GLdouble blue);
typedef void (GLAPIENTRY *PFNGLSECONDARYCOLOR3DVPROC)(const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLSECONDARYCOLOR3FPROC)(GLfloat red, GLfloat green, GLfloat blue);
typedef void (GLAPIENTRY *PFNGLSECONDARYCOLOR3FVPROC)(const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLSECONDARYCOLOR3IPROC)(GLint red, GLint green, GLint blue);
typedef void (GLAPIENTRY *PFNGLSECONDARYCOLOR3IVPROC)(const GLint * v);
typedef void (GLAPIENTRY *PFNGLSECONDARYCOLOR3SPROC)(GLshort red, GLshort green, GLshort blue);
typedef void (GLAPIENTRY *PFNGLSECONDARYCOLOR3SVPROC)(const GLshort * v);
typedef void (GLAPIENTRY *PFNGLSECONDARYCOLOR3UBPROC)(GLubyte red, GLubyte green, GLubyte blue);
typedef void (GLAPIENTRY *PFNGLSECONDARYCOLOR3UBVPROC)(const GLubyte * v);
typedef void (GLAPIENTRY *PFNGLSECONDARYCOLOR3UIPROC)(GLuint red, GLuint green, GLuint blue);
typedef void (GLAPIENTRY *PFNGLSECONDARYCOLOR3UIVPROC)(const GLuint * v);
typedef void (GLAPIENTRY *PFNGLSECONDARYCOLOR3USPROC)(GLushort red, GLushort green, GLushort blue);
typedef void (GLAPIENTRY *PFNGLSECONDARYCOLOR3USVPROC)(const GLushort * v);
typedef void (GLAPIENTRY *PFNGLSECONDARYCOLORP3UIPROC)(GLenum type, GLuint color);
typedef void (GLAPIENTRY *PFNGLSECONDARYCOLORP3UIVPROC)(GLenum type, const GLuint * color);
typedef void (GLAPIENTRY *PFNGLSECONDARYCOLORPOINTERPROC)(GLint size, GLenum type, GLsizei stride, const void * pointer);
typedef void (GLAPIENTRY *PFNGLSELECTBUFFERPROC)(GLsizei size, GLuint * buffer);
typedef void (GLAPIENTRY *PFNGLSHADEMODELPROC)(GLenum mode);
typedef void (GLAPIENTRY *PFNGLSHADERBINARYPROC)(GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length);
typedef void (GLAPIENTRY *PFNGLSHADERSOURCEPROC)(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length);
typedef void (GLAPIENTRY *PFNGLSHADERSTORAGEBLOCKBINDINGPROC)(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
typedef void (GLAPIENTRY *PFNGLSPECIALIZESHADERPROC)(GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue);
typedef void (GLAPIENTRY *PFNGLSTENCILFUNCPROC)(GLenum func, GLint ref, GLuint mask);
typedef void (GLAPIENTRY *PFNGLSTENCILFUNCSEPARATEPROC)(GLenum face, GLenum func, GLint ref, GLuint mask);
typedef void (GLAPIENTRY *PFNGLSTENCILMASKPROC)(GLuint mask);
typedef void (GLAPIENTRY *PFNGLSTENCILMASKSEPARATEPROC)(GLenum face, GLuint mask);
typedef void (GLAPIENTRY *PFNGLSTENCILOPPROC)(GLenum fail, GLenum zfail, GLenum zpass);
typedef void (GLAPIENTRY *PFNGLSTENCILOPSEPARATEPROC)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
typedef void (GLAPIENTRY *PFNGLTEXBUFFERPROC)(GLenum target, GLenum internalformat, GLuint buffer);
typedef void (GLAPIENTRY *PFNGLTEXBUFFERRANGEPROC)(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GLAPIENTRY *PFNGLTEXCOORD1DPROC)(GLdouble s);
typedef void (GLAPIENTRY *PFNGLTEXCOORD1DVPROC)(const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLTEXCOORD1FPROC)(GLfloat s);
typedef void (GLAPIENTRY *PFNGLTEXCOORD1FVPROC)(const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLTEXCOORD1IPROC)(GLint s);
typedef void (GLAPIENTRY *PFNGLTEXCOORD1IVPROC)(const GLint * v);
typedef void (GLAPIENTRY *PFNGLTEXCOORD1SPROC)(GLshort s);
typedef void (GLAPIENTRY *PFNGLTEXCOORD1SVPROC)(const GLshort * v);
typedef void (GLAPIENTRY *PFNGLTEXCOORD2DPROC)(GLdouble s, GLdouble t);
typedef void (GLAPIENTRY *PFNGLTEXCOORD2DVPROC)(const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLTEXCOORD2FPROC)(GLfloat s, GLfloat t);
typedef void (GLAPIENTRY *PFNGLTEXCOORD2FVPROC)(const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLTEXCOORD2IPROC)(GLint s, GLint t);
typedef void (GLAPIENTRY *PFNGLTEXCOORD2IVPROC)(const GLint * v);
typedef void (GLAPIENTRY *PFNGLTEXCOORD2SPROC)(GLshort s, GLshort t);
typedef void (GLAPIENTRY *PFNGLTEXCOORD2SVPROC)(const GLshort * v);
typedef void (GLAPIENTRY *PFNGLTEXCOORD3DPROC)(GLdouble s, GLdouble t, GLdouble r);
typedef void (GLAPIENTRY *PFNGLTEXCOORD3DVPROC)(const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLTEXCOORD3FPROC)(GLfloat s, GLfloat t, GLfloat r);
typedef void (GLAPIENTRY *PFNGLTEXCOORD3FVPROC)(const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLTEXCOORD3IPROC)(GLint s, GLint t, GLint r);
typedef void (GLAPIENTRY *PFNGLTEXCOORD3IVPROC)(const GLint * v);
typedef void (GLAPIENTRY *PFNGLTEXCOORD3SPROC)(GLshort s, GLshort t, GLshort r);
typedef void (GLAPIENTRY *PFNGLTEXCOORD3SVPROC)(const GLshort * v);
typedef void (GLAPIENTRY *PFNGLTEXCOORD4DPROC)(GLdouble s, GLdouble t, GLdouble r, GLdouble q);
typedef void (GLAPIENTRY *PFNGLTEXCOORD4DVPROC)(const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLTEXCOORD4FPROC)(GLfloat s, GLfloat t, GLfloat r, GLfloat q);
typedef void (GLAPIENTRY *PFNGLTEXCOORD4FVPROC)(const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLTEXCOORD4IPROC)(GLint s, GLint t, GLint r, GLint q);
typedef void (GLAPIENTRY *PFNGLTEXCOORD4IVPROC)(const GLint * v);
typedef void (GLAPIENTRY *PFNGLTEXCOORD4SPROC)(GLshort s, GLshort t, GLshort r, GLshort q);
typedef void (GLAPIENTRY *PFNGLTEXCOORD4SVPROC)(const GLshort * v);
typedef void (GLAPIENTRY *PFNGLTEXCOORDP1UIPROC)(GLenum type, GLuint coords);
typedef void (GLAPIENTRY *PFNGLTEXCOORDP1UIVPROC)(GLenum type, const GLuint * coords);
typedef void (GLAPIENTRY *PFNGLTEXCOORDP2UIPROC)(GLenum type, GLuint coords);
typedef void (GLAPIENTRY *PFNGLTEXCOORDP2UIVPROC)(GLenum type, const GLuint * coords);
typedef void (GLAPIENTRY *PFNGLTEXCOORDP3UIPROC)(GLenum type, GLuint coords);
typedef void (GLAPIENTRY *PFNGLTEXCOORDP3UIVPROC)(GLenum type, const GLuint * coords);
typedef void (GLAPIENTRY *PFNGLTEXCOORDP4UIPROC)(GLenum type, GLuint coords);
typedef void (GLAPIENTRY *PFNGLTEXCOORDP4UIVPROC)(GLenum type, const GLuint * coords);
typedef void (GLAPIENTRY *PFNGLTEXCOORDPOINTERPROC)(GLint size, GLenum type, GLsizei stride, const void * pointer);
typedef void (GLAPIENTRY *PFNGLTEXENVFPROC)(GLenum target, GLenum pname, GLfloat param);
typedef void (GLAPIENTRY *PFNGLTEXENVFVPROC)(GLenum target, GLenum pname, const GLfloat * params);
typedef void (GLAPIENTRY *PFNGLTEXENVIPROC)(GLenum target, GLenum pname, GLint param);
typedef void (GLAPIENTRY *PFNGLTEXENVIVPROC)(GLenum target, GLenum pname, const GLint * params);
typedef void (GLAPIENTRY *PFNGLTEXENVXPROC)(GLenum target, GLenum pname, GLfixed param);
typedef void (GLAPIENTRY *PFNGLTEXENVXVPROC)(GLenum target, GLenum pname, const GLfixed * params);
typedef void (GLAPIENTRY *PFNGLTEXGENDPROC)(GLenum coord, GLenum pname, GLdouble param);
typedef void (GLAPIENTRY *PFNGLTEXGENDVPROC)(GLenum coord, GLenum pname, const GLdouble * params);
typedef void (GLAPIENTRY *PFNGLTEXGENFPROC)(GLenum coord, GLenum pname, GLfloat param);
typedef void (GLAPIENTRY *PFNGLTEXGENFVPROC)(GLenum coord, GLenum pname, const GLfloat * params);
typedef void (GLAPIENTRY *PFNGLTEXGENIPROC)(GLenum coord, GLenum pname, GLint param);
typedef void (GLAPIENTRY *PFNGLTEXGENIVPROC)(GLenum coord, GLenum pname, const GLint * params);
typedef void (GLAPIENTRY *PFNGLTEXIMAGE1DPROC)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels);
typedef void (GLAPIENTRY *PFNGLTEXIMAGE2DPROC)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels);
typedef void (GLAPIENTRY *PFNGLTEXIMAGE2DMULTISAMPLEPROC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (GLAPIENTRY *PFNGLTEXIMAGE3DPROC)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);
typedef void (GLAPIENTRY *PFNGLTEXIMAGE3DMULTISAMPLEPROC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (GLAPIENTRY *PFNGLTEXPARAMETERIIVPROC)(GLenum target, GLenum pname, const GLint * params);
typedef void (GLAPIENTRY *PFNGLTEXPARAMETERIUIVPROC)(GLenum target, GLenum pname, const GLuint * params);
typedef void (GLAPIENTRY *PFNGLTEXPARAMETERFPROC)(GLenum target, GLenum pname, GLfloat param);
typedef void (GLAPIENTRY *PFNGLTEXPARAMETERFVPROC)(GLenum target, GLenum pname, const GLfloat * params);
typedef void (GLAPIENTRY *PFNGLTEXPARAMETERIPROC)(GLenum target, GLenum pname, GLint param);
typedef void (GLAPIENTRY *PFNGLTEXPARAMETERIVPROC)(GLenum target, GLenum pname, const GLint * params);
typedef void (GLAPIENTRY *PFNGLTEXPARAMETERXPROC)(GLenum target, GLenum pname, GLfixed param);
typedef void (GLAPIENTRY *PFNGLTEXPARAMETERXVPROC)(GLenum target, GLenum pname, const GLfixed * params);
typedef void (GLAPIENTRY *PFNGLTEXSTORAGE1DPROC)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (GLAPIENTRY *PFNGLTEXSTORAGE2DPROC)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *PFNGLTEXSTORAGE2DMULTISAMPLEPROC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (GLAPIENTRY *PFNGLTEXSTORAGE3DPROC)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GLAPIENTRY *PFNGLTEXSTORAGE3DMULTISAMPLEPROC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (GLAPIENTRY *PFNGLTEXSUBIMAGE1DPROC)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels);
typedef void (GLAPIENTRY *PFNGLTEXSUBIMAGE2DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
typedef void (GLAPIENTRY *PFNGLTEXSUBIMAGE3DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
typedef void (GLAPIENTRY *PFNGLTEXTUREBARRIERPROC)(void);
typedef void (GLAPIENTRY *PFNGLTEXTUREBUFFERPROC)(GLuint texture, GLenum internalformat, GLuint buffer);
typedef void (GLAPIENTRY *PFNGLTEXTUREBUFFERRANGEPROC)(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GLAPIENTRY *PFNGLTEXTUREPARAMETERIIVPROC)(GLuint texture, GLenum pname, const GLint * params);
typedef void (GLAPIENTRY *PFNGLTEXTUREPARAMETERIUIVPROC)(GLuint texture, GLenum pname, const GLuint * params);
typedef void (GLAPIENTRY *PFNGLTEXTUREPARAMETERFPROC)(GLuint texture, GLenum pname, GLfloat param);
typedef void (GLAPIENTRY *PFNGLTEXTUREPARAMETERFVPROC)(GLuint texture, GLenum pname, const GLfloat * param);
typedef void (GLAPIENTRY *PFNGLTEXTUREPARAMETERIPROC)(GLuint texture, GLenum pname, GLint param);
typedef void (GLAPIENTRY *PFNGLTEXTUREPARAMETERIVPROC)(GLuint texture, GLenum pname, const GLint * param);
typedef void (GLAPIENTRY *PFNGLTEXTURESTORAGE1DPROC)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (GLAPIENTRY *PFNGLTEXTURESTORAGE2DPROC)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (GLAPIENTRY *PFNGLTEXTURESTORAGE3DPROC)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GLAPIENTRY *PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (GLAPIENTRY *PFNGLTEXTURESUBIMAGE1DPROC)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels);
typedef void (GLAPIENTRY *PFNGLTEXTURESUBIMAGE2DPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
typedef void (GLAPIENTRY *PFNGLTEXTURESUBIMAGE3DPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
typedef void (GLAPIENTRY *PFNGLTEXTUREVIEWPROC)(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
typedef void (GLAPIENTRY *PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC)(GLuint xfb, GLuint index, GLuint buffer);
typedef void (GLAPIENTRY *PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC)(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GLAPIENTRY *PFNGLTRANSFORMFEEDBACKVARYINGSPROC)(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode);
typedef void (GLAPIENTRY *PFNGLTRANSLATEDPROC)(GLdouble x, GLdouble y, GLdouble z);
typedef void (GLAPIENTRY *PFNGLTRANSLATEFPROC)(GLfloat x, GLfloat y, GLfloat z);
typedef void (GLAPIENTRY *PFNGLTRANSLATEXPROC)(GLfixed x, GLfixed y, GLfixed z);
typedef void (GLAPIENTRY *PFNGLUNIFORM1DPROC)(GLint location, GLdouble x);
typedef void (GLAPIENTRY *PFNGLUNIFORM1DVPROC)(GLint location, GLsizei count, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLUNIFORM1FPROC)(GLint location, GLfloat v0);
typedef void (GLAPIENTRY *PFNGLUNIFORM1FVPROC)(GLint location, GLsizei count, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLUNIFORM1IPROC)(GLint location, GLint v0);
typedef void (GLAPIENTRY *PFNGLUNIFORM1IVPROC)(GLint location, GLsizei count, const GLint * value);
typedef void (GLAPIENTRY *PFNGLUNIFORM1UIPROC)(GLint location, GLuint v0);
typedef void (GLAPIENTRY *PFNGLUNIFORM1UIVPROC)(GLint location, GLsizei count, const GLuint * value);
typedef void (GLAPIENTRY *PFNGLUNIFORM2DPROC)(GLint location, GLdouble x, GLdouble y);
typedef void (GLAPIENTRY *PFNGLUNIFORM2DVPROC)(GLint location, GLsizei count, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLUNIFORM2FPROC)(GLint location, GLfloat v0, GLfloat v1);
typedef void (GLAPIENTRY *PFNGLUNIFORM2FVPROC)(GLint location, GLsizei count, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLUNIFORM2IPROC)(GLint location, GLint v0, GLint v1);
typedef void (GLAPIENTRY *PFNGLUNIFORM2IVPROC)(GLint location, GLsizei count, const GLint * value);
typedef void (GLAPIENTRY *PFNGLUNIFORM2UIPROC)(GLint location, GLuint v0, GLuint v1);
typedef void (GLAPIENTRY *PFNGLUNIFORM2UIVPROC)(GLint location, GLsizei count, const GLuint * value);
typedef void (GLAPIENTRY *PFNGLUNIFORM3DPROC)(GLint location, GLdouble x, GLdouble y, GLdouble z);
typedef void (GLAPIENTRY *PFNGLUNIFORM3DVPROC)(GLint location, GLsizei count, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLUNIFORM3FPROC)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (GLAPIENTRY *PFNGLUNIFORM3FVPROC)(GLint location, GLsizei count, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLUNIFORM3IPROC)(GLint location, GLint v0, GLint v1, GLint v2);
typedef void (GLAPIENTRY *PFNGLUNIFORM3IVPROC)(GLint location, GLsizei count, const GLint * value);
typedef void (GLAPIENTRY *PFNGLUNIFORM3UIPROC)(GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (GLAPIENTRY *PFNGLUNIFORM3UIVPROC)(GLint location, GLsizei count, const GLuint * value);
typedef void (GLAPIENTRY *PFNGLUNIFORM4DPROC)(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLAPIENTRY *PFNGLUNIFORM4DVPROC)(GLint location, GLsizei count, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLUNIFORM4FPROC)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (GLAPIENTRY *PFNGLUNIFORM4FVPROC)(GLint location, GLsizei count, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLUNIFORM4IPROC)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (GLAPIENTRY *PFNGLUNIFORM4IVPROC)(GLint location, GLsizei count, const GLint * value);
typedef void (GLAPIENTRY *PFNGLUNIFORM4UIPROC)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (GLAPIENTRY *PFNGLUNIFORM4UIVPROC)(GLint location, GLsizei count, const GLuint * value);
typedef void (GLAPIENTRY *PFNGLUNIFORMBLOCKBINDINGPROC)(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
typedef void (GLAPIENTRY *PFNGLUNIFORMMATRIX2DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLUNIFORMMATRIX2FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLUNIFORMMATRIX2X3DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLUNIFORMMATRIX2X3FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLUNIFORMMATRIX2X4DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLUNIFORMMATRIX2X4FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLUNIFORMMATRIX3DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLUNIFORMMATRIX3FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLUNIFORMMATRIX3X2DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLUNIFORMMATRIX3X2FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLUNIFORMMATRIX3X4DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLUNIFORMMATRIX3X4FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLUNIFORMMATRIX4DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLUNIFORMMATRIX4FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLUNIFORMMATRIX4X2DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLUNIFORMMATRIX4X2FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLUNIFORMMATRIX4X3DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (GLAPIENTRY *PFNGLUNIFORMMATRIX4X3FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GLAPIENTRY *PFNGLUNIFORMSUBROUTINESUIVPROC)(GLenum shadertype, GLsizei count, const GLuint * indices);
typedef GLboolean (GLAPIENTRY *PFNGLUNMAPBUFFERPROC)(GLenum target);
typedef GLboolean (GLAPIENTRY *PFNGLUNMAPBUFFERARBPROC)(GLenum target);
typedef GLboolean (GLAPIENTRY *PFNGLUNMAPBUFFEROESPROC)(GLenum target);
typedef GLboolean (GLAPIENTRY *PFNGLUNMAPNAMEDBUFFERPROC)(GLuint buffer);
typedef void (GLAPIENTRY *PFNGLUSEPROGRAMPROC)(GLuint program);
typedef void (GLAPIENTRY *PFNGLUSEPROGRAMSTAGESPROC)(GLuint pipeline, GLbitfield stages, GLuint program);
typedef void (GLAPIENTRY *PFNGLVALIDATEPROGRAMPROC)(GLuint program);
typedef void (GLAPIENTRY *PFNGLVALIDATEPROGRAMPIPELINEPROC)(GLuint pipeline);
typedef void (GLAPIENTRY *PFNGLVERTEX2DPROC)(GLdouble x, GLdouble y);
typedef void (GLAPIENTRY *PFNGLVERTEX2DVPROC)(const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLVERTEX2FPROC)(GLfloat x, GLfloat y);
typedef void (GLAPIENTRY *PFNGLVERTEX2FVPROC)(const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLVERTEX2IPROC)(GLint x, GLint y);
typedef void (GLAPIENTRY *PFNGLVERTEX2IVPROC)(const GLint * v);
typedef void (GLAPIENTRY *PFNGLVERTEX2SPROC)(GLshort x, GLshort y);
typedef void (GLAPIENTRY *PFNGLVERTEX2SVPROC)(const GLshort * v);
typedef void (GLAPIENTRY *PFNGLVERTEX3DPROC)(GLdouble x, GLdouble y, GLdouble z);
typedef void (GLAPIENTRY *PFNGLVERTEX3DVPROC)(const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLVERTEX3FPROC)(GLfloat x, GLfloat y, GLfloat z);
typedef void (GLAPIENTRY *PFNGLVERTEX3FVPROC)(const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLVERTEX3IPROC)(GLint x, GLint y, GLint z);
typedef void (GLAPIENTRY *PFNGLVERTEX3IVPROC)(const GLint * v);
typedef void (GLAPIENTRY *PFNGLVERTEX3SPROC)(GLshort x, GLshort y, GLshort z);
typedef void (GLAPIENTRY *PFNGLVERTEX3SVPROC)(const GLshort * v);
typedef void (GLAPIENTRY *PFNGLVERTEX4DPROC)(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLAPIENTRY *PFNGLVERTEX4DVPROC)(const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLVERTEX4FPROC)(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (GLAPIENTRY *PFNGLVERTEX4FVPROC)(const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLVERTEX4IPROC)(GLint x, GLint y, GLint z, GLint w);
typedef void (GLAPIENTRY *PFNGLVERTEX4IVPROC)(const GLint * v);
typedef void (GLAPIENTRY *PFNGLVERTEX4SPROC)(GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (GLAPIENTRY *PFNGLVERTEX4SVPROC)(const GLshort * v);
typedef void (GLAPIENTRY *PFNGLVERTEXARRAYATTRIBBINDINGPROC)(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
typedef void (GLAPIENTRY *PFNGLVERTEXARRAYATTRIBFORMATPROC)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (GLAPIENTRY *PFNGLVERTEXARRAYATTRIBIFORMATPROC)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (GLAPIENTRY *PFNGLVERTEXARRAYATTRIBLFORMATPROC)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (GLAPIENTRY *PFNGLVERTEXARRAYBINDINGDIVISORPROC)(GLuint vaobj, GLuint bindingindex, GLuint divisor);
typedef void (GLAPIENTRY *PFNGLVERTEXARRAYELEMENTBUFFERPROC)(GLuint vaobj, GLuint buffer);
typedef void (GLAPIENTRY *PFNGLVERTEXARRAYVERTEXBUFFERPROC)(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (GLAPIENTRY *PFNGLVERTEXARRAYVERTEXBUFFERSPROC)(GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB1DPROC)(GLuint index, GLdouble x);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB1DVPROC)(GLuint index, const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB1FPROC)(GLuint index, GLfloat x);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB1FVPROC)(GLuint index, const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB1SPROC)(GLuint index, GLshort x);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB1SVPROC)(GLuint index, const GLshort * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB2DPROC)(GLuint index, GLdouble x, GLdouble y);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB2DVPROC)(GLuint index, const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB2FPROC)(GLuint index, GLfloat x, GLfloat y);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB2FVPROC)(GLuint index, const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB2SPROC)(GLuint index, GLshort x, GLshort y);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB2SVPROC)(GLuint index, const GLshort * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB3DPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB3DVPROC)(GLuint index, const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB3FPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB3FVPROC)(GLuint index, const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB3SPROC)(GLuint index, GLshort x, GLshort y, GLshort z);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB3SVPROC)(GLuint index, const GLshort * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB4NBVPROC)(GLuint index, const GLbyte * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB4NIVPROC)(GLuint index, const GLint * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB4NSVPROC)(GLuint index, const GLshort * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB4NUBPROC)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB4NUBVPROC)(GLuint index, const GLubyte * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB4NUIVPROC)(GLuint index, const GLuint * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB4NUSVPROC)(GLuint index, const GLushort * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB4BVPROC)(GLuint index, const GLbyte * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB4DPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB4DVPROC)(GLuint index, const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB4FPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB4FVPROC)(GLuint index, const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB4IVPROC)(GLuint index, const GLint * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB4SPROC)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB4SVPROC)(GLuint index, const GLshort * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB4UBVPROC)(GLuint index, const GLubyte * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB4UIVPROC)(GLuint index, const GLuint * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIB4USVPROC)(GLuint index, const GLushort * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBBINDINGPROC)(GLuint attribindex, GLuint bindingindex);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBDIVISORPROC)(GLuint index, GLuint divisor);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBFORMATPROC)(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI1IPROC)(GLuint index, GLint x);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI1IVPROC)(GLuint index, const GLint * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI1UIPROC)(GLuint index, GLuint x);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI1UIVPROC)(GLuint index, const GLuint * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI2IPROC)(GLuint index, GLint x, GLint y);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI2IVPROC)(GLuint index, const GLint * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI2UIPROC)(GLuint index, GLuint x, GLuint y);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI2UIVPROC)(GLuint index, const GLuint * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI3IPROC)(GLuint index, GLint x, GLint y, GLint z);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI3IVPROC)(GLuint index, const GLint * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI3UIPROC)(GLuint index, GLuint x, GLuint y, GLuint z);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI3UIVPROC)(GLuint index, const GLuint * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI4BVPROC)(GLuint index, const GLbyte * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI4IPROC)(GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI4IVPROC)(GLuint index, const GLint * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI4SVPROC)(GLuint index, const GLshort * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI4UBVPROC)(GLuint index, const GLubyte * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI4UIPROC)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI4UIVPROC)(GLuint index, const GLuint * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBI4USVPROC)(GLuint index, const GLushort * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBIFORMATPROC)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBIPOINTERPROC)(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBL1DPROC)(GLuint index, GLdouble x);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBL1DVPROC)(GLuint index, const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBL2DPROC)(GLuint index, GLdouble x, GLdouble y);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBL2DVPROC)(GLuint index, const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBL3DPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBL3DVPROC)(GLuint index, const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBL4DPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBL4DVPROC)(GLuint index, const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBLFORMATPROC)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBLPOINTERPROC)(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBP1UIPROC)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBP1UIVPROC)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBP2UIPROC)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBP2UIVPROC)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBP3UIPROC)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBP3UIVPROC)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBP4UIPROC)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBP4UIVPROC)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
typedef void (GLAPIENTRY *PFNGLVERTEXATTRIBPOINTERPROC)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer);
typedef void (GLAPIENTRY *PFNGLVERTEXBINDINGDIVISORPROC)(GLuint bindingindex, GLuint divisor);
typedef void (GLAPIENTRY *PFNGLVERTEXP2UIPROC)(GLenum type, GLuint value);
typedef void (GLAPIENTRY *PFNGLVERTEXP2UIVPROC)(GLenum type, const GLuint * value);
typedef void (GLAPIENTRY *PFNGLVERTEXP3UIPROC)(GLenum type, GLuint value);
typedef void (GLAPIENTRY *PFNGLVERTEXP3UIVPROC)(GLenum type, const GLuint * value);
typedef void (GLAPIENTRY *PFNGLVERTEXP4UIPROC)(GLenum type, GLuint value);
typedef void (GLAPIENTRY *PFNGLVERTEXP4UIVPROC)(GLenum type, const GLuint * value);
typedef void (GLAPIENTRY *PFNGLVERTEXPOINTERPROC)(GLint size, GLenum type, GLsizei stride, const void * pointer);
typedef void (GLAPIENTRY *PFNGLVIEWPORTPROC)(GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLAPIENTRY *PFNGLVIEWPORTARRAYVPROC)(GLuint first, GLsizei count, const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLVIEWPORTINDEXEDFPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
typedef void (GLAPIENTRY *PFNGLVIEWPORTINDEXEDFVPROC)(GLuint index, const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLWAITSYNCPROC)(GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GLAPIENTRY *PFNGLWINDOWPOS2DPROC)(GLdouble x, GLdouble y);
typedef void (GLAPIENTRY *PFNGLWINDOWPOS2DVPROC)(const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLWINDOWPOS2FPROC)(GLfloat x, GLfloat y);
typedef void (GLAPIENTRY *PFNGLWINDOWPOS2FVPROC)(const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLWINDOWPOS2IPROC)(GLint x, GLint y);
typedef void (GLAPIENTRY *PFNGLWINDOWPOS2IVPROC)(const GLint * v);
typedef void (GLAPIENTRY *PFNGLWINDOWPOS2SPROC)(GLshort x, GLshort y);
typedef void (GLAPIENTRY *PFNGLWINDOWPOS2SVPROC)(const GLshort * v);
typedef void (GLAPIENTRY *PFNGLWINDOWPOS3DPROC)(GLdouble x, GLdouble y, GLdouble z);
typedef void (GLAPIENTRY *PFNGLWINDOWPOS3DVPROC)(const GLdouble * v);
typedef void (GLAPIENTRY *PFNGLWINDOWPOS3FPROC)(GLfloat x, GLfloat y, GLfloat z);
typedef void (GLAPIENTRY *PFNGLWINDOWPOS3FVPROC)(const GLfloat * v);
typedef void (GLAPIENTRY *PFNGLWINDOWPOS3IPROC)(GLint x, GLint y, GLint z);
typedef void (GLAPIENTRY *PFNGLWINDOWPOS3IVPROC)(const GLint * v);
typedef void (GLAPIENTRY *PFNGLWINDOWPOS3SPROC)(GLshort x, GLshort y, GLshort z);
typedef void (GLAPIENTRY *PFNGLWINDOWPOS3SVPROC)(const GLshort * v);
EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glAccum)(GLenum op, GLfloat value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glActiveShaderProgram)(GLuint pipeline, GLuint program);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glActiveTexture)(GLenum texture);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glAlphaFunc)(GLenum func, GLfloat ref);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glAlphaFuncx)(GLenum func, GLfixed ref);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glAreTexturesResident)(GLsizei n, const GLuint * textures, GLboolean * residences);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glArrayElement)(GLint i);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glAttachShader)(GLuint program, GLuint shader);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBegin)(GLenum mode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBeginConditionalRender)(GLuint id, GLenum mode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBeginQuery)(GLenum target, GLuint id);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBeginQueryIndexed)(GLenum target, GLuint index, GLuint id);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBeginTransformFeedback)(GLenum primitiveMode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindAttribLocation)(GLuint program, GLuint index, const GLchar * name);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindBuffer)(GLenum target, GLuint buffer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindBufferARB)(GLenum target, GLuint buffer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindBufferBase)(GLenum target, GLuint index, GLuint buffer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindBufferRange)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindBuffersBase)(GLenum target, GLuint first, GLsizei count, const GLuint * buffers);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindBuffersRange)(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindFragDataLocation)(GLuint program, GLuint color, const GLchar * name);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindFragDataLocationIndexed)(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindFramebuffer)(GLenum target, GLuint framebuffer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindImageTexture)(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindImageTextures)(GLuint first, GLsizei count, const GLuint * textures);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindProgramPipeline)(GLuint pipeline);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindRenderbuffer)(GLenum target, GLuint renderbuffer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindSampler)(GLuint unit, GLuint sampler);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindSamplers)(GLuint first, GLsizei count, const GLuint * samplers);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindTexture)(GLenum target, GLuint texture);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindTextureUnit)(GLuint unit, GLuint texture);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindTextures)(GLuint first, GLsizei count, const GLuint * textures);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindTransformFeedback)(GLenum target, GLuint id);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindVertexArray)(GLuint array);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindVertexBuffer)(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBindVertexBuffers)(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBitmap)(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBlendBarrier)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBlendColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBlendEquation)(GLenum mode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBlendEquationSeparate)(GLenum modeRGB, GLenum modeAlpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBlendEquationSeparatei)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBlendEquationi)(GLuint buf, GLenum mode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBlendFunc)(GLenum sfactor, GLenum dfactor);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBlendFuncSeparate)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBlendFuncSeparatei)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBlendFunci)(GLuint buf, GLenum src, GLenum dst);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBlitFramebuffer)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBlitNamedFramebuffer)(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBufferData)(GLenum target, GLsizeiptr size, const void * data, GLenum usage);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBufferDataARB)(GLenum target, GLsizeiptrARB size, const void * data, GLenum usage);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBufferStorage)(GLenum target, GLsizeiptr size, const void * data, GLbitfield flags);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBufferStorageEXT)(GLenum target, GLsizeiptr size, const void * data, GLbitfield flags);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glBufferSubDataARB)(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCallList)(GLuint list);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCallLists)(GLsizei n, GLenum type, const void * lists);

EPOXY_PUBLIC GLenum (EPOXY_CALLSPEC *epoxy_glCheckFramebufferStatus)(GLenum target);

EPOXY_PUBLIC GLenum (EPOXY_CALLSPEC *epoxy_glCheckNamedFramebufferStatus)(GLuint framebuffer, GLenum target);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClampColor)(GLenum target, GLenum clamp);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClear)(GLbitfield mask);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearAccum)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearBufferData)(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearBufferSubData)(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearBufferfi)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearBufferfv)(GLenum buffer, GLint drawbuffer, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearBufferiv)(GLenum buffer, GLint drawbuffer, const GLint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearBufferuiv)(GLenum buffer, GLint drawbuffer, const GLuint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearColorx)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearDepth)(GLdouble depth);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearDepthf)(GLfloat d);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearDepthfOES)(GLclampf depth);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearDepthx)(GLfixed depth);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearIndex)(GLfloat c);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearNamedBufferData)(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearNamedBufferSubData)(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearNamedFramebufferfi)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearNamedFramebufferfv)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearNamedFramebufferiv)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearNamedFramebufferuiv)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearStencil)(GLint s);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearTexImage)(GLuint texture, GLint level, GLenum format, GLenum type, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClearTexSubImage)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClientActiveTexture)(GLenum texture);

EPOXY_PUBLIC GLenum (EPOXY_CALLSPEC *epoxy_glClientWaitSync)(GLsync sync, GLbitfield flags, GLuint64 timeout);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClipControl)(GLenum origin, GLenum depth);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClipPlane)(GLenum plane, const GLdouble * equation);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClipPlanef)(GLenum p, const GLfloat * eqn);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClipPlanefOES)(GLenum plane, const GLfloat * equation);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glClipPlanex)(GLenum plane, const GLfixed * equation);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor3b)(GLbyte red, GLbyte green, GLbyte blue);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor3bv)(const GLbyte * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor3d)(GLdouble red, GLdouble green, GLdouble blue);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor3dv)(const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor3f)(GLfloat red, GLfloat green, GLfloat blue);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor3fv)(const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor3i)(GLint red, GLint green, GLint blue);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor3iv)(const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor3s)(GLshort red, GLshort green, GLshort blue);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor3sv)(const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor3ub)(GLubyte red, GLubyte green, GLubyte blue);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor3ubv)(const GLubyte * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor3ui)(GLuint red, GLuint green, GLuint blue);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor3uiv)(const GLuint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor3us)(GLushort red, GLushort green, GLushort blue);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor3usv)(const GLushort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor4b)(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor4bv)(const GLbyte * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor4d)(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor4dv)(const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor4f)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor4fv)(const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor4i)(GLint red, GLint green, GLint blue, GLint alpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor4iv)(const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor4s)(GLshort red, GLshort green, GLshort blue, GLshort alpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor4sv)(const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor4ub)(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor4ubv)(const GLubyte * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor4ui)(GLuint red, GLuint green, GLuint blue, GLuint alpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor4uiv)(const GLuint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor4us)(GLushort red, GLushort green, GLushort blue, GLushort alpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor4usv)(const GLushort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColor4x)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColorMask)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColorMaski)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColorMaterial)(GLenum face, GLenum mode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColorP3ui)(GLenum type, GLuint color);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColorP3uiv)(GLenum type, const GLuint * color);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColorP4ui)(GLenum type, GLuint color);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColorP4uiv)(GLenum type, const GLuint * color);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glColorPointer)(GLint size, GLenum type, GLsizei stride, const void * pointer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCompileShader)(GLuint shader);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCompressedTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCompressedTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCompressedTexImage3D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCompressedTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCompressedTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCompressedTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCompressedTextureSubImage1D)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCompressedTextureSubImage2D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCompressedTextureSubImage3D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCopyBufferSubData)(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCopyImageSubData)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCopyNamedBufferSubData)(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCopyPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCopyTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCopyTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCopyTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCopyTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCopyTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCopyTextureSubImage1D)(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCopyTextureSubImage2D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCopyTextureSubImage3D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCreateBuffers)(GLsizei n, GLuint * buffers);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCreateFramebuffers)(GLsizei n, GLuint * framebuffers);

EPOXY_PUBLIC GLuint (EPOXY_CALLSPEC *epoxy_glCreateProgram)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCreateProgramPipelines)(GLsizei n, GLuint * pipelines);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCreateQueries)(GLenum target, GLsizei n, GLuint * ids);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCreateRenderbuffers)(GLsizei n, GLuint * renderbuffers);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCreateSamplers)(GLsizei n, GLuint * samplers);

EPOXY_PUBLIC GLuint (EPOXY_CALLSPEC *epoxy_glCreateShader)(GLenum type);

EPOXY_PUBLIC GLuint (EPOXY_CALLSPEC *epoxy_glCreateShaderProgramv)(GLenum type, GLsizei count, const GLchar *const* strings);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCreateTextures)(GLenum target, GLsizei n, GLuint * textures);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCreateTransformFeedbacks)(GLsizei n, GLuint * ids);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCreateVertexArrays)(GLsizei n, GLuint * arrays);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glCullFace)(GLenum mode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDebugMessageCallback)(GLDEBUGPROC callback, const void * userParam);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDebugMessageCallbackARB)(GLDEBUGPROCARB callback, const void * userParam);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDebugMessageCallbackKHR)(GLDEBUGPROCKHR callback, const void * userParam);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDebugMessageControl)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDebugMessageControlARB)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDebugMessageControlKHR)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDebugMessageInsert)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDebugMessageInsertARB)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDebugMessageInsertKHR)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDeleteBuffers)(GLsizei n, const GLuint * buffers);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDeleteBuffersARB)(GLsizei n, const GLuint * buffers);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDeleteFramebuffers)(GLsizei n, const GLuint * framebuffers);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDeleteLists)(GLuint list, GLsizei range);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDeleteProgram)(GLuint program);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDeleteProgramPipelines)(GLsizei n, const GLuint * pipelines);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDeleteQueries)(GLsizei n, const GLuint * ids);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDeleteRenderbuffers)(GLsizei n, const GLuint * renderbuffers);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDeleteSamplers)(GLsizei count, const GLuint * samplers);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDeleteShader)(GLuint shader);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDeleteSync)(GLsync sync);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDeleteTextures)(GLsizei n, const GLuint * textures);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDeleteTransformFeedbacks)(GLsizei n, const GLuint * ids);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDeleteVertexArrays)(GLsizei n, const GLuint * arrays);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDepthFunc)(GLenum func);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDepthMask)(GLboolean flag);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDepthRange)(GLdouble hither, GLdouble yon);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDepthRangeArrayv)(GLuint first, GLsizei count, const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDepthRangeIndexed)(GLuint index, GLdouble n, GLdouble f);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDepthRangef)(GLfloat n, GLfloat f);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDepthRangefOES)(GLclampf n, GLclampf f);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDepthRangex)(GLfixed n, GLfixed f);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDetachShader)(GLuint program, GLuint shader);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDisable)(GLenum cap);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDisableClientState)(GLenum array);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDisableVertexArrayAttrib)(GLuint vaobj, GLuint index);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDisableVertexAttribArray)(GLuint index);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDisablei)(GLenum target, GLuint index);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDispatchCompute)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDispatchComputeIndirect)(GLintptr indirect);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawArrays)(GLenum mode, GLint first, GLsizei count);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawArraysIndirect)(GLenum mode, const void * indirect);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawArraysInstanced)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawArraysInstancedBaseInstance)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawBuffer)(GLenum buf);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawBuffers)(GLsizei n, const GLenum * bufs);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawElements)(GLenum mode, GLsizei count, GLenum type, const void * indices);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawElementsBaseVertex)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawElementsBaseVertexEXT)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawElementsBaseVertexOES)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawElementsIndirect)(GLenum mode, GLenum type, const void * indirect);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawElementsInstanced)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawElementsInstancedBaseInstance)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawElementsInstancedBaseVertex)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawElementsInstancedBaseVertexBaseInstance)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawElementsInstancedBaseVertexEXT)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawElementsInstancedBaseVertexOES)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawPixels)(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawRangeElements)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawRangeElementsBaseVertex)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawRangeElementsBaseVertexEXT)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawRangeElementsBaseVertexOES)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawTransformFeedback)(GLenum mode, GLuint id);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawTransformFeedbackInstanced)(GLenum mode, GLuint id, GLsizei instancecount);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawTransformFeedbackStream)(GLenum mode, GLuint id, GLuint stream);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glDrawTransformFeedbackStreamInstanced)(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEdgeFlag)(GLboolean flag);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEdgeFlagPointer)(GLsizei stride, const void * pointer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEdgeFlagv)(const GLboolean * flag);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEnable)(GLenum cap);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEnableClientState)(GLenum array);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEnableVertexArrayAttrib)(GLuint vaobj, GLuint index);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEnableVertexAttribArray)(GLuint index);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEnablei)(GLenum target, GLuint index);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEnd)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEndConditionalRender)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEndList)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEndQuery)(GLenum target);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEndQueryIndexed)(GLenum target, GLuint index);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEndTransformFeedback)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEvalCoord1d)(GLdouble u);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEvalCoord1dv)(const GLdouble * u);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEvalCoord1f)(GLfloat u);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEvalCoord1fv)(const GLfloat * u);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEvalCoord2d)(GLdouble u, GLdouble v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEvalCoord2dv)(const GLdouble * u);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEvalCoord2f)(GLfloat u, GLfloat v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEvalCoord2fv)(const GLfloat * u);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEvalMesh1)(GLenum mode, GLint i1, GLint i2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEvalMesh2)(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEvalPoint1)(GLint i);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glEvalPoint2)(GLint i, GLint j);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFeedbackBuffer)(GLsizei size, GLenum type, GLfloat * buffer);

EPOXY_PUBLIC GLsync (EPOXY_CALLSPEC *epoxy_glFenceSync)(GLenum condition, GLbitfield flags);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFinish)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFlush)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFlushMappedBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFlushMappedBufferRangeEXT)(GLenum target, GLintptr offset, GLsizeiptr length);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFlushMappedNamedBufferRange)(GLuint buffer, GLintptr offset, GLsizeiptr length);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFogCoordPointer)(GLenum type, GLsizei stride, const void * pointer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFogCoordd)(GLdouble coord);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFogCoorddv)(const GLdouble * coord);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFogCoordf)(GLfloat coord);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFogCoordfv)(const GLfloat * coord);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFogf)(GLenum pname, GLfloat param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFogfv)(GLenum pname, const GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFogi)(GLenum pname, GLint param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFogiv)(GLenum pname, const GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFogx)(GLenum pname, GLfixed param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFogxv)(GLenum pname, const GLfixed * param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFramebufferParameteri)(GLenum target, GLenum pname, GLint param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFramebufferRenderbuffer)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFramebufferTexture)(GLenum target, GLenum attachment, GLuint texture, GLint level);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFramebufferTexture1D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFramebufferTexture2D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFramebufferTexture3D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFramebufferTextureLayer)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFrontFace)(GLenum mode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFrustum)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFrustumf)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFrustumfOES)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glFrustumx)(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGenBuffers)(GLsizei n, GLuint * buffers);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGenBuffersARB)(GLsizei n, GLuint * buffers);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGenFramebuffers)(GLsizei n, GLuint * framebuffers);

EPOXY_PUBLIC GLuint (EPOXY_CALLSPEC *epoxy_glGenLists)(GLsizei range);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGenProgramPipelines)(GLsizei n, GLuint * pipelines);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGenQueries)(GLsizei n, GLuint * ids);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGenRenderbuffers)(GLsizei n, GLuint * renderbuffers);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGenSamplers)(GLsizei count, GLuint * samplers);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGenTextures)(GLsizei n, GLuint * textures);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGenTransformFeedbacks)(GLsizei n, GLuint * ids);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGenVertexArrays)(GLsizei n, GLuint * arrays);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGenerateMipmap)(GLenum target);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGenerateTextureMipmap)(GLuint texture);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetActiveAtomicCounterBufferiv)(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetActiveAttrib)(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetActiveSubroutineName)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetActiveSubroutineUniformName)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetActiveSubroutineUniformiv)(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetActiveUniform)(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetActiveUniformBlockName)(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetActiveUniformBlockiv)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetActiveUniformName)(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetActiveUniformsiv)(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetAttachedShaders)(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders);

EPOXY_PUBLIC GLint (EPOXY_CALLSPEC *epoxy_glGetAttribLocation)(GLuint program, const GLchar * name);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetBooleani_v)(GLenum target, GLuint index, GLboolean * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetBooleanv)(GLenum pname, GLboolean * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetBufferParameteri64v)(GLenum target, GLenum pname, GLint64 * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetBufferParameteriv)(GLenum target, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetBufferParameterivARB)(GLenum target, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetBufferPointerv)(GLenum target, GLenum pname, void ** params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetBufferPointervARB)(GLenum target, GLenum pname, void ** params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetBufferPointervOES)(GLenum target, GLenum pname, void ** params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetBufferSubDataARB)(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetClipPlane)(GLenum plane, GLdouble * equation);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetClipPlanef)(GLenum plane, GLfloat * equation);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetClipPlanefOES)(GLenum plane, GLfloat * equation);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetClipPlanex)(GLenum plane, GLfixed * equation);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetCompressedTexImage)(GLenum target, GLint level, void * img);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetCompressedTextureImage)(GLuint texture, GLint level, GLsizei bufSize, void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetCompressedTextureSubImage)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels);

EPOXY_PUBLIC GLuint (EPOXY_CALLSPEC *epoxy_glGetDebugMessageLog)(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);

EPOXY_PUBLIC GLuint (EPOXY_CALLSPEC *epoxy_glGetDebugMessageLogARB)(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);

EPOXY_PUBLIC GLuint (EPOXY_CALLSPEC *epoxy_glGetDebugMessageLogKHR)(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetDoublei_v)(GLenum target, GLuint index, GLdouble * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetDoublev)(GLenum pname, GLdouble * data);

EPOXY_PUBLIC GLenum (EPOXY_CALLSPEC *epoxy_glGetError)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetFixedv)(GLenum pname, GLfixed * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetFloati_v)(GLenum target, GLuint index, GLfloat * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetFloatv)(GLenum pname, GLfloat * data);

EPOXY_PUBLIC GLint (EPOXY_CALLSPEC *epoxy_glGetFragDataIndex)(GLuint program, const GLchar * name);

EPOXY_PUBLIC GLint (EPOXY_CALLSPEC *epoxy_glGetFragDataLocation)(GLuint program, const GLchar * name);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetFramebufferAttachmentParameteriv)(GLenum target, GLenum attachment, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetFramebufferParameteriv)(GLenum target, GLenum pname, GLint * params);

EPOXY_PUBLIC GLenum (EPOXY_CALLSPEC *epoxy_glGetGraphicsResetStatus)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetInteger64i_v)(GLenum target, GLuint index, GLint64 * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetInteger64v)(GLenum pname, GLint64 * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetIntegeri_v)(GLenum target, GLuint index, GLint * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetIntegerv)(GLenum pname, GLint * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetInternalformati64v)(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetInternalformativ)(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetLightfv)(GLenum light, GLenum pname, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetLightiv)(GLenum light, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetLightxv)(GLenum light, GLenum pname, GLfixed * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetMapdv)(GLenum target, GLenum query, GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetMapfv)(GLenum target, GLenum query, GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetMapiv)(GLenum target, GLenum query, GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetMaterialfv)(GLenum face, GLenum pname, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetMaterialiv)(GLenum face, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetMaterialxv)(GLenum face, GLenum pname, GLfixed * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetMultisamplefv)(GLenum pname, GLuint index, GLfloat * val);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetNamedBufferParameteri64v)(GLuint buffer, GLenum pname, GLint64 * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetNamedBufferParameteriv)(GLuint buffer, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetNamedBufferPointerv)(GLuint buffer, GLenum pname, void ** params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetNamedBufferSubData)(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetNamedFramebufferAttachmentParameteriv)(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetNamedFramebufferParameteriv)(GLuint framebuffer, GLenum pname, GLint * param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetNamedRenderbufferParameteriv)(GLuint renderbuffer, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetObjectLabel)(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetObjectLabelKHR)(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetObjectPtrLabel)(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetObjectPtrLabelKHR)(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetPixelMapfv)(GLenum map, GLfloat * values);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetPixelMapuiv)(GLenum map, GLuint * values);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetPixelMapusv)(GLenum map, GLushort * values);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetPointerv)(GLenum pname, void ** params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetPointervKHR)(GLenum pname, void ** params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetPolygonStipple)(GLubyte * mask);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetProgramBinary)(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetProgramInfoLog)(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetProgramInterfaceiv)(GLuint program, GLenum programInterface, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetProgramPipelineInfoLog)(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetProgramPipelineiv)(GLuint pipeline, GLenum pname, GLint * params);

EPOXY_PUBLIC GLuint (EPOXY_CALLSPEC *epoxy_glGetProgramResourceIndex)(GLuint program, GLenum programInterface, const GLchar * name);

EPOXY_PUBLIC GLint (EPOXY_CALLSPEC *epoxy_glGetProgramResourceLocation)(GLuint program, GLenum programInterface, const GLchar * name);

EPOXY_PUBLIC GLint (EPOXY_CALLSPEC *epoxy_glGetProgramResourceLocationIndex)(GLuint program, GLenum programInterface, const GLchar * name);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetProgramResourceName)(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetProgramResourceiv)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetProgramStageiv)(GLuint program, GLenum shadertype, GLenum pname, GLint * values);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetProgramiv)(GLuint program, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetQueryBufferObjecti64v)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetQueryBufferObjectiv)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetQueryBufferObjectui64v)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetQueryBufferObjectuiv)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetQueryIndexediv)(GLenum target, GLuint index, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetQueryObjecti64v)(GLuint id, GLenum pname, GLint64 * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetQueryObjectiv)(GLuint id, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetQueryObjectui64v)(GLuint id, GLenum pname, GLuint64 * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetQueryObjectuiv)(GLuint id, GLenum pname, GLuint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetQueryiv)(GLenum target, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetRenderbufferParameteriv)(GLenum target, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetSamplerParameterIiv)(GLuint sampler, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetSamplerParameterIuiv)(GLuint sampler, GLenum pname, GLuint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetSamplerParameterfv)(GLuint sampler, GLenum pname, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetSamplerParameteriv)(GLuint sampler, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetShaderInfoLog)(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetShaderPrecisionFormat)(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetShaderSource)(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetShaderiv)(GLuint shader, GLenum pname, GLint * params);

EPOXY_PUBLIC const GLubyte * (EPOXY_CALLSPEC *epoxy_glGetString)(GLenum name);

EPOXY_PUBLIC const GLubyte * (EPOXY_CALLSPEC *epoxy_glGetStringi)(GLenum name, GLuint index);

EPOXY_PUBLIC GLuint (EPOXY_CALLSPEC *epoxy_glGetSubroutineIndex)(GLuint program, GLenum shadertype, const GLchar * name);

EPOXY_PUBLIC GLint (EPOXY_CALLSPEC *epoxy_glGetSubroutineUniformLocation)(GLuint program, GLenum shadertype, const GLchar * name);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetSynciv)(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexEnvfv)(GLenum target, GLenum pname, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexEnviv)(GLenum target, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexEnvxv)(GLenum target, GLenum pname, GLfixed * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexGendv)(GLenum coord, GLenum pname, GLdouble * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexGenfv)(GLenum coord, GLenum pname, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexGeniv)(GLenum coord, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexImage)(GLenum target, GLint level, GLenum format, GLenum type, void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexLevelParameterfv)(GLenum target, GLint level, GLenum pname, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexLevelParameteriv)(GLenum target, GLint level, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexParameterIiv)(GLenum target, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexParameterIuiv)(GLenum target, GLenum pname, GLuint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexParameterfv)(GLenum target, GLenum pname, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexParameteriv)(GLenum target, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTexParameterxv)(GLenum target, GLenum pname, GLfixed * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTextureImage)(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTextureLevelParameterfv)(GLuint texture, GLint level, GLenum pname, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTextureLevelParameteriv)(GLuint texture, GLint level, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTextureParameterIiv)(GLuint texture, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTextureParameterIuiv)(GLuint texture, GLenum pname, GLuint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTextureParameterfv)(GLuint texture, GLenum pname, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTextureParameteriv)(GLuint texture, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTextureSubImage)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTransformFeedbackVarying)(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTransformFeedbacki64_v)(GLuint xfb, GLenum pname, GLuint index, GLint64 * param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTransformFeedbacki_v)(GLuint xfb, GLenum pname, GLuint index, GLint * param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetTransformFeedbackiv)(GLuint xfb, GLenum pname, GLint * param);

EPOXY_PUBLIC GLuint (EPOXY_CALLSPEC *epoxy_glGetUniformBlockIndex)(GLuint program, const GLchar * uniformBlockName);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetUniformIndices)(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices);

EPOXY_PUBLIC GLint (EPOXY_CALLSPEC *epoxy_glGetUniformLocation)(GLuint program, const GLchar * name);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetUniformSubroutineuiv)(GLenum shadertype, GLint location, GLuint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetUniformdv)(GLuint program, GLint location, GLdouble * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetUniformfv)(GLuint program, GLint location, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetUniformiv)(GLuint program, GLint location, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetUniformuiv)(GLuint program, GLint location, GLuint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetVertexArrayIndexed64iv)(GLuint vaobj, GLuint index, GLenum pname, GLint64 * param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetVertexArrayIndexediv)(GLuint vaobj, GLuint index, GLenum pname, GLint * param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetVertexArrayiv)(GLuint vaobj, GLenum pname, GLint * param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetVertexAttribIiv)(GLuint index, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetVertexAttribIuiv)(GLuint index, GLenum pname, GLuint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetVertexAttribLdv)(GLuint index, GLenum pname, GLdouble * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetVertexAttribPointerv)(GLuint index, GLenum pname, void ** pointer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetVertexAttribdv)(GLuint index, GLenum pname, GLdouble * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetVertexAttribfv)(GLuint index, GLenum pname, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetVertexAttribiv)(GLuint index, GLenum pname, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnColorTable)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnCompressedTexImage)(GLenum target, GLint lod, GLsizei bufSize, void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnConvolutionFilter)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnHistogram)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnMapdv)(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnMapfv)(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnMapiv)(GLenum target, GLenum query, GLsizei bufSize, GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnMinmax)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnPixelMapfv)(GLenum map, GLsizei bufSize, GLfloat * values);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnPixelMapuiv)(GLenum map, GLsizei bufSize, GLuint * values);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnPixelMapusv)(GLenum map, GLsizei bufSize, GLushort * values);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnPolygonStipple)(GLsizei bufSize, GLubyte * pattern);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnSeparableFilter)(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnTexImage)(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnUniformdv)(GLuint program, GLint location, GLsizei bufSize, GLdouble * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnUniformfv)(GLuint program, GLint location, GLsizei bufSize, GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnUniformiv)(GLuint program, GLint location, GLsizei bufSize, GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glGetnUniformuiv)(GLuint program, GLint location, GLsizei bufSize, GLuint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glHint)(GLenum target, GLenum mode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glIndexMask)(GLuint mask);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glIndexPointer)(GLenum type, GLsizei stride, const void * pointer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glIndexd)(GLdouble c);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glIndexdv)(const GLdouble * c);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glIndexf)(GLfloat c);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glIndexfv)(const GLfloat * c);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glIndexi)(GLint c);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glIndexiv)(const GLint * c);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glIndexs)(GLshort c);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glIndexsv)(const GLshort * c);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glIndexub)(GLubyte c);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glIndexubv)(const GLubyte * c);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glInitNames)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glInterleavedArrays)(GLenum format, GLsizei stride, const void * pointer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glInvalidateBufferData)(GLuint buffer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glInvalidateBufferSubData)(GLuint buffer, GLintptr offset, GLsizeiptr length);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glInvalidateFramebuffer)(GLenum target, GLsizei numAttachments, const GLenum * attachments);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glInvalidateNamedFramebufferData)(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glInvalidateNamedFramebufferSubData)(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glInvalidateSubFramebuffer)(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glInvalidateTexImage)(GLuint texture, GLint level);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glInvalidateTexSubImage)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glIsBuffer)(GLuint buffer);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glIsBufferARB)(GLuint buffer);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glIsEnabled)(GLenum cap);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glIsEnabledi)(GLenum target, GLuint index);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glIsFramebuffer)(GLuint framebuffer);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glIsList)(GLuint list);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glIsProgram)(GLuint program);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glIsProgramPipeline)(GLuint pipeline);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glIsQuery)(GLuint id);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glIsRenderbuffer)(GLuint renderbuffer);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glIsSampler)(GLuint sampler);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glIsShader)(GLuint shader);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glIsSync)(GLsync sync);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glIsTexture)(GLuint texture);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glIsTransformFeedback)(GLuint id);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glIsVertexArray)(GLuint array);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLightModelf)(GLenum pname, GLfloat param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLightModelfv)(GLenum pname, const GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLightModeli)(GLenum pname, GLint param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLightModeliv)(GLenum pname, const GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLightModelx)(GLenum pname, GLfixed param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLightModelxv)(GLenum pname, const GLfixed * param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLightf)(GLenum light, GLenum pname, GLfloat param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLightfv)(GLenum light, GLenum pname, const GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLighti)(GLenum light, GLenum pname, GLint param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLightiv)(GLenum light, GLenum pname, const GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLightx)(GLenum light, GLenum pname, GLfixed param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLightxv)(GLenum light, GLenum pname, const GLfixed * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLineStipple)(GLint factor, GLushort pattern);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLineWidth)(GLfloat width);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLineWidthx)(GLfixed width);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLinkProgram)(GLuint program);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glListBase)(GLuint base);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLoadIdentity)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLoadMatrixd)(const GLdouble * m);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLoadMatrixf)(const GLfloat * m);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLoadMatrixx)(const GLfixed * m);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLoadName)(GLuint name);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLoadTransposeMatrixd)(const GLdouble * m);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLoadTransposeMatrixf)(const GLfloat * m);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glLogicOp)(GLenum opcode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMap1d)(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMap1f)(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMap2d)(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMap2f)(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points);

EPOXY_PUBLIC void * (EPOXY_CALLSPEC *epoxy_glMapBuffer)(GLenum target, GLenum access);

EPOXY_PUBLIC void * (EPOXY_CALLSPEC *epoxy_glMapBufferARB)(GLenum target, GLenum access);

EPOXY_PUBLIC void * (EPOXY_CALLSPEC *epoxy_glMapBufferOES)(GLenum target, GLenum access);

EPOXY_PUBLIC void * (EPOXY_CALLSPEC *epoxy_glMapBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);

EPOXY_PUBLIC void * (EPOXY_CALLSPEC *epoxy_glMapBufferRangeEXT)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMapGrid1d)(GLint un, GLdouble u1, GLdouble u2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMapGrid1f)(GLint un, GLfloat u1, GLfloat u2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMapGrid2d)(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMapGrid2f)(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);

EPOXY_PUBLIC void * (EPOXY_CALLSPEC *epoxy_glMapNamedBuffer)(GLuint buffer, GLenum access);

EPOXY_PUBLIC void * (EPOXY_CALLSPEC *epoxy_glMapNamedBufferRange)(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMaterialf)(GLenum face, GLenum pname, GLfloat param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMaterialfv)(GLenum face, GLenum pname, const GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMateriali)(GLenum face, GLenum pname, GLint param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMaterialiv)(GLenum face, GLenum pname, const GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMaterialx)(GLenum face, GLenum pname, GLfixed param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMaterialxv)(GLenum face, GLenum pname, const GLfixed * param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMatrixMode)(GLenum mode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMemoryBarrier)(GLbitfield barriers);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMemoryBarrierByRegion)(GLbitfield barriers);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMinSampleShading)(GLfloat value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMinSampleShadingARB)(GLfloat value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMinSampleShadingOES)(GLfloat value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultMatrixd)(const GLdouble * m);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultMatrixf)(const GLfloat * m);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultMatrixx)(const GLfixed * m);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultTransposeMatrixd)(const GLdouble * m);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultTransposeMatrixf)(const GLfloat * m);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiDrawArrays)(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiDrawArraysIndirect)(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiDrawArraysIndirectCount)(GLenum mode, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiDrawElements)(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiDrawElementsBaseVertex)(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiDrawElementsBaseVertexEXT)(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, const GLint * basevertex);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiDrawElementsIndirect)(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiDrawElementsIndirectCount)(GLenum mode, GLenum type, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord1d)(GLenum target, GLdouble s);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord1dv)(GLenum target, const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord1f)(GLenum target, GLfloat s);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord1fv)(GLenum target, const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord1i)(GLenum target, GLint s);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord1iv)(GLenum target, const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord1s)(GLenum target, GLshort s);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord1sv)(GLenum target, const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord2d)(GLenum target, GLdouble s, GLdouble t);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord2dv)(GLenum target, const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord2f)(GLenum target, GLfloat s, GLfloat t);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord2fv)(GLenum target, const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord2i)(GLenum target, GLint s, GLint t);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord2iv)(GLenum target, const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord2s)(GLenum target, GLshort s, GLshort t);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord2sv)(GLenum target, const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord3d)(GLenum target, GLdouble s, GLdouble t, GLdouble r);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord3dv)(GLenum target, const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord3f)(GLenum target, GLfloat s, GLfloat t, GLfloat r);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord3fv)(GLenum target, const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord3i)(GLenum target, GLint s, GLint t, GLint r);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord3iv)(GLenum target, const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord3s)(GLenum target, GLshort s, GLshort t, GLshort r);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord3sv)(GLenum target, const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord4d)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord4dv)(GLenum target, const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord4f)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord4fv)(GLenum target, const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord4i)(GLenum target, GLint s, GLint t, GLint r, GLint q);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord4iv)(GLenum target, const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord4s)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord4sv)(GLenum target, const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoord4x)(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoordP1ui)(GLenum texture, GLenum type, GLuint coords);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoordP1uiv)(GLenum texture, GLenum type, const GLuint * coords);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoordP2ui)(GLenum texture, GLenum type, GLuint coords);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoordP2uiv)(GLenum texture, GLenum type, const GLuint * coords);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoordP3ui)(GLenum texture, GLenum type, GLuint coords);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoordP3uiv)(GLenum texture, GLenum type, const GLuint * coords);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoordP4ui)(GLenum texture, GLenum type, GLuint coords);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glMultiTexCoordP4uiv)(GLenum texture, GLenum type, const GLuint * coords);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNamedBufferData)(GLuint buffer, GLsizeiptr size, const void * data, GLenum usage);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNamedBufferStorage)(GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNamedBufferSubData)(GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNamedFramebufferDrawBuffer)(GLuint framebuffer, GLenum buf);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNamedFramebufferDrawBuffers)(GLuint framebuffer, GLsizei n, const GLenum * bufs);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNamedFramebufferParameteri)(GLuint framebuffer, GLenum pname, GLint param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNamedFramebufferReadBuffer)(GLuint framebuffer, GLenum src);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNamedFramebufferRenderbuffer)(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNamedFramebufferTexture)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNamedFramebufferTextureLayer)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNamedRenderbufferStorage)(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNamedRenderbufferStorageMultisample)(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNewList)(GLuint list, GLenum mode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNormal3b)(GLbyte nx, GLbyte ny, GLbyte nz);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNormal3bv)(const GLbyte * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNormal3d)(GLdouble nx, GLdouble ny, GLdouble nz);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNormal3dv)(const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNormal3f)(GLfloat nx, GLfloat ny, GLfloat nz);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNormal3fv)(const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNormal3i)(GLint nx, GLint ny, GLint nz);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNormal3iv)(const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNormal3s)(GLshort nx, GLshort ny, GLshort nz);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNormal3sv)(const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNormal3x)(GLfixed nx, GLfixed ny, GLfixed nz);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNormalP3ui)(GLenum type, GLuint coords);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNormalP3uiv)(GLenum type, const GLuint * coords);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glNormalPointer)(GLenum type, GLsizei stride, const void * pointer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glObjectLabel)(GLenum identifier, GLuint name, GLsizei length, const GLchar * label);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glObjectLabelKHR)(GLenum identifier, GLuint name, GLsizei length, const GLchar * label);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glObjectPtrLabel)(const void * ptr, GLsizei length, const GLchar * label);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glObjectPtrLabelKHR)(const void * ptr, GLsizei length, const GLchar * label);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glOrtho)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glOrthof)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glOrthofOES)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glOrthox)(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPassThrough)(GLfloat token);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPatchParameterfv)(GLenum pname, const GLfloat * values);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPatchParameteri)(GLenum pname, GLint value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPauseTransformFeedback)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPixelMapfv)(GLenum map, GLsizei mapsize, const GLfloat * values);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPixelMapuiv)(GLenum map, GLsizei mapsize, const GLuint * values);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPixelMapusv)(GLenum map, GLsizei mapsize, const GLushort * values);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPixelStoref)(GLenum pname, GLfloat param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPixelStorei)(GLenum pname, GLint param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPixelTransferf)(GLenum pname, GLfloat param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPixelTransferi)(GLenum pname, GLint param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPixelZoom)(GLfloat xfactor, GLfloat yfactor);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPointParameterf)(GLenum pname, GLfloat param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPointParameterfv)(GLenum pname, const GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPointParameteri)(GLenum pname, GLint param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPointParameteriv)(GLenum pname, const GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPointParameterx)(GLenum pname, GLfixed param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPointParameterxv)(GLenum pname, const GLfixed * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPointSize)(GLfloat size);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPointSizex)(GLfixed size);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPolygonMode)(GLenum face, GLenum mode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPolygonOffset)(GLfloat factor, GLfloat units);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPolygonOffsetClamp)(GLfloat factor, GLfloat units, GLfloat clamp);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPolygonOffsetx)(GLfixed factor, GLfixed units);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPolygonStipple)(const GLubyte * mask);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPopAttrib)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPopClientAttrib)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPopDebugGroup)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPopDebugGroupKHR)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPopMatrix)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPopName)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPrimitiveBoundingBox)(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPrimitiveRestartIndex)(GLuint index);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPrioritizeTextures)(GLsizei n, const GLuint * textures, const GLfloat * priorities);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramBinary)(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramParameteri)(GLuint program, GLenum pname, GLint value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform1d)(GLuint program, GLint location, GLdouble v0);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform1dv)(GLuint program, GLint location, GLsizei count, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform1f)(GLuint program, GLint location, GLfloat v0);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform1fv)(GLuint program, GLint location, GLsizei count, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform1i)(GLuint program, GLint location, GLint v0);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform1iv)(GLuint program, GLint location, GLsizei count, const GLint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform1ui)(GLuint program, GLint location, GLuint v0);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform1uiv)(GLuint program, GLint location, GLsizei count, const GLuint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform2d)(GLuint program, GLint location, GLdouble v0, GLdouble v1);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform2dv)(GLuint program, GLint location, GLsizei count, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform2f)(GLuint program, GLint location, GLfloat v0, GLfloat v1);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform2fv)(GLuint program, GLint location, GLsizei count, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform2i)(GLuint program, GLint location, GLint v0, GLint v1);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform2iv)(GLuint program, GLint location, GLsizei count, const GLint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform2ui)(GLuint program, GLint location, GLuint v0, GLuint v1);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform2uiv)(GLuint program, GLint location, GLsizei count, const GLuint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform3d)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform3dv)(GLuint program, GLint location, GLsizei count, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform3f)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform3fv)(GLuint program, GLint location, GLsizei count, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform3i)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform3iv)(GLuint program, GLint location, GLsizei count, const GLint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform3ui)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform3uiv)(GLuint program, GLint location, GLsizei count, const GLuint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform4d)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform4dv)(GLuint program, GLint location, GLsizei count, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform4f)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform4fv)(GLuint program, GLint location, GLsizei count, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform4i)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform4iv)(GLuint program, GLint location, GLsizei count, const GLint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform4ui)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniform4uiv)(GLuint program, GLint location, GLsizei count, const GLuint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniformMatrix2dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniformMatrix2fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniformMatrix2x3dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniformMatrix2x3fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniformMatrix2x4dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniformMatrix2x4fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniformMatrix3dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniformMatrix3fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniformMatrix3x2dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniformMatrix3x2fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniformMatrix3x4dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniformMatrix3x4fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniformMatrix4dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniformMatrix4fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniformMatrix4x2dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniformMatrix4x2fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniformMatrix4x3dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProgramUniformMatrix4x3fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glProvokingVertex)(GLenum mode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPushAttrib)(GLbitfield mask);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPushClientAttrib)(GLbitfield mask);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPushDebugGroup)(GLenum source, GLuint id, GLsizei length, const GLchar * message);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPushDebugGroupKHR)(GLenum source, GLuint id, GLsizei length, const GLchar * message);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPushMatrix)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glPushName)(GLuint name);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glQueryCounter)(GLuint id, GLenum target);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos2d)(GLdouble x, GLdouble y);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos2dv)(const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos2f)(GLfloat x, GLfloat y);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos2fv)(const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos2i)(GLint x, GLint y);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos2iv)(const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos2s)(GLshort x, GLshort y);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos2sv)(const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos3d)(GLdouble x, GLdouble y, GLdouble z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos3dv)(const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos3f)(GLfloat x, GLfloat y, GLfloat z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos3fv)(const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos3i)(GLint x, GLint y, GLint z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos3iv)(const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos3s)(GLshort x, GLshort y, GLshort z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos3sv)(const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos4d)(GLdouble x, GLdouble y, GLdouble z, GLdouble w);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos4dv)(const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos4f)(GLfloat x, GLfloat y, GLfloat z, GLfloat w);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos4fv)(const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos4i)(GLint x, GLint y, GLint z, GLint w);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos4iv)(const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos4s)(GLshort x, GLshort y, GLshort z, GLshort w);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRasterPos4sv)(const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glReadBuffer)(GLenum src);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glReadPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glReadnPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRectd)(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRectdv)(const GLdouble * v1, const GLdouble * v2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRectf)(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRectfv)(const GLfloat * v1, const GLfloat * v2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRecti)(GLint x1, GLint y1, GLint x2, GLint y2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRectiv)(const GLint * v1, const GLint * v2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRects)(GLshort x1, GLshort y1, GLshort x2, GLshort y2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRectsv)(const GLshort * v1, const GLshort * v2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glReleaseShaderCompiler)(void);

EPOXY_PUBLIC GLint (EPOXY_CALLSPEC *epoxy_glRenderMode)(GLenum mode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRenderbufferStorage)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRenderbufferStorageMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glResumeTransformFeedback)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRotated)(GLdouble angle, GLdouble x, GLdouble y, GLdouble z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRotatef)(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glRotatex)(GLfixed angle, GLfixed x, GLfixed y, GLfixed z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSampleCoverage)(GLfloat value, GLboolean invert);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSampleCoveragex)(GLclampx value, GLboolean invert);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSampleMaski)(GLuint maskNumber, GLbitfield mask);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSamplerParameterIiv)(GLuint sampler, GLenum pname, const GLint * param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSamplerParameterIuiv)(GLuint sampler, GLenum pname, const GLuint * param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSamplerParameterf)(GLuint sampler, GLenum pname, GLfloat param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSamplerParameterfv)(GLuint sampler, GLenum pname, const GLfloat * param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSamplerParameteri)(GLuint sampler, GLenum pname, GLint param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSamplerParameteriv)(GLuint sampler, GLenum pname, const GLint * param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glScaled)(GLdouble x, GLdouble y, GLdouble z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glScalef)(GLfloat x, GLfloat y, GLfloat z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glScalex)(GLfixed x, GLfixed y, GLfixed z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glScissor)(GLint x, GLint y, GLsizei width, GLsizei height);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glScissorArrayv)(GLuint first, GLsizei count, const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glScissorIndexed)(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glScissorIndexedv)(GLuint index, const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSecondaryColor3b)(GLbyte red, GLbyte green, GLbyte blue);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSecondaryColor3bv)(const GLbyte * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSecondaryColor3d)(GLdouble red, GLdouble green, GLdouble blue);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSecondaryColor3dv)(const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSecondaryColor3f)(GLfloat red, GLfloat green, GLfloat blue);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSecondaryColor3fv)(const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSecondaryColor3i)(GLint red, GLint green, GLint blue);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSecondaryColor3iv)(const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSecondaryColor3s)(GLshort red, GLshort green, GLshort blue);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSecondaryColor3sv)(const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSecondaryColor3ub)(GLubyte red, GLubyte green, GLubyte blue);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSecondaryColor3ubv)(const GLubyte * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSecondaryColor3ui)(GLuint red, GLuint green, GLuint blue);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSecondaryColor3uiv)(const GLuint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSecondaryColor3us)(GLushort red, GLushort green, GLushort blue);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSecondaryColor3usv)(const GLushort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSecondaryColorP3ui)(GLenum type, GLuint color);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSecondaryColorP3uiv)(GLenum type, const GLuint * color);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSecondaryColorPointer)(GLint size, GLenum type, GLsizei stride, const void * pointer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSelectBuffer)(GLsizei size, GLuint * buffer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glShadeModel)(GLenum mode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glShaderBinary)(GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glShaderSource)(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glShaderStorageBlockBinding)(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glSpecializeShader)(GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glStencilFunc)(GLenum func, GLint ref, GLuint mask);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glStencilFuncSeparate)(GLenum face, GLenum func, GLint ref, GLuint mask);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glStencilMask)(GLuint mask);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glStencilMaskSeparate)(GLenum face, GLuint mask);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glStencilOp)(GLenum fail, GLenum zfail, GLenum zpass);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glStencilOpSeparate)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexBuffer)(GLenum target, GLenum internalformat, GLuint buffer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexBufferRange)(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord1d)(GLdouble s);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord1dv)(const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord1f)(GLfloat s);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord1fv)(const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord1i)(GLint s);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord1iv)(const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord1s)(GLshort s);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord1sv)(const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord2d)(GLdouble s, GLdouble t);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord2dv)(const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord2f)(GLfloat s, GLfloat t);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord2fv)(const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord2i)(GLint s, GLint t);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord2iv)(const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord2s)(GLshort s, GLshort t);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord2sv)(const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord3d)(GLdouble s, GLdouble t, GLdouble r);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord3dv)(const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord3f)(GLfloat s, GLfloat t, GLfloat r);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord3fv)(const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord3i)(GLint s, GLint t, GLint r);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord3iv)(const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord3s)(GLshort s, GLshort t, GLshort r);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord3sv)(const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord4d)(GLdouble s, GLdouble t, GLdouble r, GLdouble q);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord4dv)(const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord4f)(GLfloat s, GLfloat t, GLfloat r, GLfloat q);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord4fv)(const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord4i)(GLint s, GLint t, GLint r, GLint q);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord4iv)(const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord4s)(GLshort s, GLshort t, GLshort r, GLshort q);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoord4sv)(const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoordP1ui)(GLenum type, GLuint coords);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoordP1uiv)(GLenum type, const GLuint * coords);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoordP2ui)(GLenum type, GLuint coords);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoordP2uiv)(GLenum type, const GLuint * coords);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoordP3ui)(GLenum type, GLuint coords);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoordP3uiv)(GLenum type, const GLuint * coords);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoordP4ui)(GLenum type, GLuint coords);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoordP4uiv)(GLenum type, const GLuint * coords);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexCoordPointer)(GLint size, GLenum type, GLsizei stride, const void * pointer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexEnvf)(GLenum target, GLenum pname, GLfloat param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexEnvfv)(GLenum target, GLenum pname, const GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexEnvi)(GLenum target, GLenum pname, GLint param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexEnviv)(GLenum target, GLenum pname, const GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexEnvx)(GLenum target, GLenum pname, GLfixed param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexEnvxv)(GLenum target, GLenum pname, const GLfixed * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexGend)(GLenum coord, GLenum pname, GLdouble param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexGendv)(GLenum coord, GLenum pname, const GLdouble * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexGenf)(GLenum coord, GLenum pname, GLfloat param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexGenfv)(GLenum coord, GLenum pname, const GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexGeni)(GLenum coord, GLenum pname, GLint param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexGeniv)(GLenum coord, GLenum pname, const GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexImage1D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexImage2D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexImage2DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexImage3D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexImage3DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexParameterIiv)(GLenum target, GLenum pname, const GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexParameterIuiv)(GLenum target, GLenum pname, const GLuint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexParameterf)(GLenum target, GLenum pname, GLfloat param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexParameterfv)(GLenum target, GLenum pname, const GLfloat * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexParameteri)(GLenum target, GLenum pname, GLint param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexParameteriv)(GLenum target, GLenum pname, const GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexParameterx)(GLenum target, GLenum pname, GLfixed param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexParameterxv)(GLenum target, GLenum pname, const GLfixed * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexStorage1D)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexStorage2D)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexStorage2DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexStorage3D)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexStorage3DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTextureBarrier)(void);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTextureBuffer)(GLuint texture, GLenum internalformat, GLuint buffer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTextureBufferRange)(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTextureParameterIiv)(GLuint texture, GLenum pname, const GLint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTextureParameterIuiv)(GLuint texture, GLenum pname, const GLuint * params);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTextureParameterf)(GLuint texture, GLenum pname, GLfloat param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTextureParameterfv)(GLuint texture, GLenum pname, const GLfloat * param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTextureParameteri)(GLuint texture, GLenum pname, GLint param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTextureParameteriv)(GLuint texture, GLenum pname, const GLint * param);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTextureStorage1D)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTextureStorage2D)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTextureStorage2DMultisample)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTextureStorage3D)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTextureStorage3DMultisample)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTextureSubImage1D)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTextureSubImage2D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTextureSubImage3D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTextureView)(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTransformFeedbackBufferBase)(GLuint xfb, GLuint index, GLuint buffer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTransformFeedbackBufferRange)(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTransformFeedbackVaryings)(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTranslated)(GLdouble x, GLdouble y, GLdouble z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTranslatef)(GLfloat x, GLfloat y, GLfloat z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glTranslatex)(GLfixed x, GLfixed y, GLfixed z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform1d)(GLint location, GLdouble x);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform1dv)(GLint location, GLsizei count, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform1f)(GLint location, GLfloat v0);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform1fv)(GLint location, GLsizei count, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform1i)(GLint location, GLint v0);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform1iv)(GLint location, GLsizei count, const GLint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform1ui)(GLint location, GLuint v0);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform1uiv)(GLint location, GLsizei count, const GLuint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform2d)(GLint location, GLdouble x, GLdouble y);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform2dv)(GLint location, GLsizei count, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform2f)(GLint location, GLfloat v0, GLfloat v1);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform2fv)(GLint location, GLsizei count, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform2i)(GLint location, GLint v0, GLint v1);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform2iv)(GLint location, GLsizei count, const GLint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform2ui)(GLint location, GLuint v0, GLuint v1);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform2uiv)(GLint location, GLsizei count, const GLuint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform3d)(GLint location, GLdouble x, GLdouble y, GLdouble z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform3dv)(GLint location, GLsizei count, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform3f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform3fv)(GLint location, GLsizei count, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform3i)(GLint location, GLint v0, GLint v1, GLint v2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform3iv)(GLint location, GLsizei count, const GLint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform3ui)(GLint location, GLuint v0, GLuint v1, GLuint v2);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform3uiv)(GLint location, GLsizei count, const GLuint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform4d)(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform4dv)(GLint location, GLsizei count, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform4f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform4fv)(GLint location, GLsizei count, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform4i)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform4iv)(GLint location, GLsizei count, const GLint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform4ui)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniform4uiv)(GLint location, GLsizei count, const GLuint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformBlockBinding)(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformMatrix2dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformMatrix2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformMatrix2x3dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformMatrix2x3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformMatrix2x4dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformMatrix2x4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformMatrix3dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformMatrix3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformMatrix3x2dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformMatrix3x2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformMatrix3x4dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformMatrix3x4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformMatrix4dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformMatrix4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformMatrix4x2dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformMatrix4x2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformMatrix4x3dv)(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformMatrix4x3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUniformSubroutinesuiv)(GLenum shadertype, GLsizei count, const GLuint * indices);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glUnmapBuffer)(GLenum target);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glUnmapBufferARB)(GLenum target);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glUnmapBufferOES)(GLenum target);

EPOXY_PUBLIC GLboolean (EPOXY_CALLSPEC *epoxy_glUnmapNamedBuffer)(GLuint buffer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUseProgram)(GLuint program);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glUseProgramStages)(GLuint pipeline, GLbitfield stages, GLuint program);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glValidateProgram)(GLuint program);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glValidateProgramPipeline)(GLuint pipeline);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex2d)(GLdouble x, GLdouble y);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex2dv)(const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex2f)(GLfloat x, GLfloat y);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex2fv)(const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex2i)(GLint x, GLint y);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex2iv)(const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex2s)(GLshort x, GLshort y);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex2sv)(const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex3d)(GLdouble x, GLdouble y, GLdouble z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex3dv)(const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex3f)(GLfloat x, GLfloat y, GLfloat z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex3fv)(const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex3i)(GLint x, GLint y, GLint z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex3iv)(const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex3s)(GLshort x, GLshort y, GLshort z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex3sv)(const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex4d)(GLdouble x, GLdouble y, GLdouble z, GLdouble w);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex4dv)(const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex4f)(GLfloat x, GLfloat y, GLfloat z, GLfloat w);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex4fv)(const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex4i)(GLint x, GLint y, GLint z, GLint w);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex4iv)(const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex4s)(GLshort x, GLshort y, GLshort z, GLshort w);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertex4sv)(const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexArrayAttribBinding)(GLuint vaobj, GLuint attribindex, GLuint bindingindex);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexArrayAttribFormat)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexArrayAttribIFormat)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexArrayAttribLFormat)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexArrayBindingDivisor)(GLuint vaobj, GLuint bindingindex, GLuint divisor);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexArrayElementBuffer)(GLuint vaobj, GLuint buffer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexArrayVertexBuffer)(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexArrayVertexBuffers)(GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib1d)(GLuint index, GLdouble x);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib1dv)(GLuint index, const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib1f)(GLuint index, GLfloat x);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib1fv)(GLuint index, const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib1s)(GLuint index, GLshort x);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib1sv)(GLuint index, const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib2d)(GLuint index, GLdouble x, GLdouble y);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib2dv)(GLuint index, const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib2f)(GLuint index, GLfloat x, GLfloat y);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib2fv)(GLuint index, const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib2s)(GLuint index, GLshort x, GLshort y);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib2sv)(GLuint index, const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib3d)(GLuint index, GLdouble x, GLdouble y, GLdouble z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib3dv)(GLuint index, const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib3f)(GLuint index, GLfloat x, GLfloat y, GLfloat z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib3fv)(GLuint index, const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib3s)(GLuint index, GLshort x, GLshort y, GLshort z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib3sv)(GLuint index, const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib4Nbv)(GLuint index, const GLbyte * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib4Niv)(GLuint index, const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib4Nsv)(GLuint index, const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib4Nub)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib4Nubv)(GLuint index, const GLubyte * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib4Nuiv)(GLuint index, const GLuint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib4Nusv)(GLuint index, const GLushort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib4bv)(GLuint index, const GLbyte * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib4d)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib4dv)(GLuint index, const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib4f)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib4fv)(GLuint index, const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib4iv)(GLuint index, const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib4s)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib4sv)(GLuint index, const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib4ubv)(GLuint index, const GLubyte * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib4uiv)(GLuint index, const GLuint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttrib4usv)(GLuint index, const GLushort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribBinding)(GLuint attribindex, GLuint bindingindex);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribDivisor)(GLuint index, GLuint divisor);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribFormat)(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI1i)(GLuint index, GLint x);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI1iv)(GLuint index, const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI1ui)(GLuint index, GLuint x);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI1uiv)(GLuint index, const GLuint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI2i)(GLuint index, GLint x, GLint y);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI2iv)(GLuint index, const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI2ui)(GLuint index, GLuint x, GLuint y);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI2uiv)(GLuint index, const GLuint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI3i)(GLuint index, GLint x, GLint y, GLint z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI3iv)(GLuint index, const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI3ui)(GLuint index, GLuint x, GLuint y, GLuint z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI3uiv)(GLuint index, const GLuint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI4bv)(GLuint index, const GLbyte * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI4i)(GLuint index, GLint x, GLint y, GLint z, GLint w);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI4iv)(GLuint index, const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI4sv)(GLuint index, const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI4ubv)(GLuint index, const GLubyte * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI4ui)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI4uiv)(GLuint index, const GLuint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribI4usv)(GLuint index, const GLushort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribIFormat)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribIPointer)(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribL1d)(GLuint index, GLdouble x);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribL1dv)(GLuint index, const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribL2d)(GLuint index, GLdouble x, GLdouble y);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribL2dv)(GLuint index, const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribL3d)(GLuint index, GLdouble x, GLdouble y, GLdouble z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribL3dv)(GLuint index, const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribL4d)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribL4dv)(GLuint index, const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribLFormat)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribLPointer)(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribP1ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribP1uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribP2ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribP2uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribP3ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribP3uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribP4ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribP4uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexAttribPointer)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexBindingDivisor)(GLuint bindingindex, GLuint divisor);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexP2ui)(GLenum type, GLuint value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexP2uiv)(GLenum type, const GLuint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexP3ui)(GLenum type, GLuint value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexP3uiv)(GLenum type, const GLuint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexP4ui)(GLenum type, GLuint value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexP4uiv)(GLenum type, const GLuint * value);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glVertexPointer)(GLint size, GLenum type, GLsizei stride, const void * pointer);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glViewport)(GLint x, GLint y, GLsizei width, GLsizei height);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glViewportArrayv)(GLuint first, GLsizei count, const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glViewportIndexedf)(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glViewportIndexedfv)(GLuint index, const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glWaitSync)(GLsync sync, GLbitfield flags, GLuint64 timeout);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glWindowPos2d)(GLdouble x, GLdouble y);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glWindowPos2dv)(const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glWindowPos2f)(GLfloat x, GLfloat y);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glWindowPos2fv)(const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glWindowPos2i)(GLint x, GLint y);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glWindowPos2iv)(const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glWindowPos2s)(GLshort x, GLshort y);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glWindowPos2sv)(const GLshort * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glWindowPos3d)(GLdouble x, GLdouble y, GLdouble z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glWindowPos3dv)(const GLdouble * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glWindowPos3f)(GLfloat x, GLfloat y, GLfloat z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glWindowPos3fv)(const GLfloat * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glWindowPos3i)(GLint x, GLint y, GLint z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glWindowPos3iv)(const GLint * v);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glWindowPos3s)(GLshort x, GLshort y, GLshort z);

EPOXY_PUBLIC void (EPOXY_CALLSPEC *epoxy_glWindowPos3sv)(const GLshort * v);

#define glAccum epoxy_glAccum
#define glActiveShaderProgram epoxy_glActiveShaderProgram
#define glActiveTexture epoxy_glActiveTexture
#define glAlphaFunc epoxy_glAlphaFunc
#define glAlphaFuncx epoxy_glAlphaFuncx
#define glAreTexturesResident epoxy_glAreTexturesResident
#define glArrayElement epoxy_glArrayElement
#define glAttachShader epoxy_glAttachShader
#define glBegin epoxy_glBegin
#define glBeginConditionalRender epoxy_glBeginConditionalRender
#define glBeginQuery epoxy_glBeginQuery
#define glBeginQueryIndexed epoxy_glBeginQueryIndexed
#define glBeginTransformFeedback epoxy_glBeginTransformFeedback
#define glBindAttribLocation epoxy_glBindAttribLocation
#define glBindBuffer epoxy_glBindBuffer
#define glBindBufferARB epoxy_glBindBufferARB
#define glBindBufferBase epoxy_glBindBufferBase
#define glBindBufferRange epoxy_glBindBufferRange
#define glBindBuffersBase epoxy_glBindBuffersBase
#define glBindBuffersRange epoxy_glBindBuffersRange
#define glBindFragDataLocation epoxy_glBindFragDataLocation
#define glBindFragDataLocationIndexed epoxy_glBindFragDataLocationIndexed
#define glBindFramebuffer epoxy_glBindFramebuffer
#define glBindImageTexture epoxy_glBindImageTexture
#define glBindImageTextures epoxy_glBindImageTextures
#define glBindProgramPipeline epoxy_glBindProgramPipeline
#define glBindRenderbuffer epoxy_glBindRenderbuffer
#define glBindSampler epoxy_glBindSampler
#define glBindSamplers epoxy_glBindSamplers
#define glBindTexture epoxy_glBindTexture
#define glBindTextureUnit epoxy_glBindTextureUnit
#define glBindTextures epoxy_glBindTextures
#define glBindTransformFeedback epoxy_glBindTransformFeedback
#define glBindVertexArray epoxy_glBindVertexArray
#define glBindVertexBuffer epoxy_glBindVertexBuffer
#define glBindVertexBuffers epoxy_glBindVertexBuffers
#define glBitmap epoxy_glBitmap
#define glBlendBarrier epoxy_glBlendBarrier
#define glBlendColor epoxy_glBlendColor
#define glBlendEquation epoxy_glBlendEquation
#define glBlendEquationSeparate epoxy_glBlendEquationSeparate
#define glBlendEquationSeparatei epoxy_glBlendEquationSeparatei
#define glBlendEquationi epoxy_glBlendEquationi
#define glBlendFunc epoxy_glBlendFunc
#define glBlendFuncSeparate epoxy_glBlendFuncSeparate
#define glBlendFuncSeparatei epoxy_glBlendFuncSeparatei
#define glBlendFunci epoxy_glBlendFunci
#define glBlitFramebuffer epoxy_glBlitFramebuffer
#define glBlitNamedFramebuffer epoxy_glBlitNamedFramebuffer
#define glBufferData epoxy_glBufferData
#define glBufferDataARB epoxy_glBufferDataARB
#define glBufferStorage epoxy_glBufferStorage
#define glBufferStorageEXT epoxy_glBufferStorageEXT
#define glBufferSubData epoxy_glBufferSubData
#define glBufferSubDataARB epoxy_glBufferSubDataARB
#define glCallList epoxy_glCallList
#define glCallLists epoxy_glCallLists
#define glCheckFramebufferStatus epoxy_glCheckFramebufferStatus
#define glCheckNamedFramebufferStatus epoxy_glCheckNamedFramebufferStatus
#define glClampColor epoxy_glClampColor
#define glClear epoxy_glClear
#define glClearAccum epoxy_glClearAccum
#define glClearBufferData epoxy_glClearBufferData
#define glClearBufferSubData epoxy_glClearBufferSubData
#define glClearBufferfi epoxy_glClearBufferfi
#define glClearBufferfv epoxy_glClearBufferfv
#define glClearBufferiv epoxy_glClearBufferiv
#define glClearBufferuiv epoxy_glClearBufferuiv
#define glClearColor epoxy_glClearColor
#define glClearColorx epoxy_glClearColorx
#define glClearDepth epoxy_glClearDepth
#define glClearDepthf epoxy_glClearDepthf
#define glClearDepthfOES epoxy_glClearDepthfOES
#define glClearDepthx epoxy_glClearDepthx
#define glClearIndex epoxy_glClearIndex
#define glClearNamedBufferData epoxy_glClearNamedBufferData
#define glClearNamedBufferSubData epoxy_glClearNamedBufferSubData
#define glClearNamedFramebufferfi epoxy_glClearNamedFramebufferfi
#define glClearNamedFramebufferfv epoxy_glClearNamedFramebufferfv
#define glClearNamedFramebufferiv epoxy_glClearNamedFramebufferiv
#define glClearNamedFramebufferuiv epoxy_glClearNamedFramebufferuiv
#define glClearStencil epoxy_glClearStencil
#define glClearTexImage epoxy_glClearTexImage
#define glClearTexSubImage epoxy_glClearTexSubImage
#define glClientActiveTexture epoxy_glClientActiveTexture
#define glClientWaitSync epoxy_glClientWaitSync
#define glClipControl epoxy_glClipControl
#define glClipPlane epoxy_glClipPlane
#define glClipPlanef epoxy_glClipPlanef
#define glClipPlanefOES epoxy_glClipPlanefOES
#define glClipPlanex epoxy_glClipPlanex
#define glColor3b epoxy_glColor3b
#define glColor3bv epoxy_glColor3bv
#define glColor3d epoxy_glColor3d
#define glColor3dv epoxy_glColor3dv
#define glColor3f epoxy_glColor3f
#define glColor3fv epoxy_glColor3fv
#define glColor3i epoxy_glColor3i
#define glColor3iv epoxy_glColor3iv
#define glColor3s epoxy_glColor3s
#define glColor3sv epoxy_glColor3sv
#define glColor3ub epoxy_glColor3ub
#define glColor3ubv epoxy_glColor3ubv
#define glColor3ui epoxy_glColor3ui
#define glColor3uiv epoxy_glColor3uiv
#define glColor3us epoxy_glColor3us
#define glColor3usv epoxy_glColor3usv
#define glColor4b epoxy_glColor4b
#define glColor4bv epoxy_glColor4bv
#define glColor4d epoxy_glColor4d
#define glColor4dv epoxy_glColor4dv
#define glColor4f epoxy_glColor4f
#define glColor4fv epoxy_glColor4fv
#define glColor4i epoxy_glColor4i
#define glColor4iv epoxy_glColor4iv
#define glColor4s epoxy_glColor4s
#define glColor4sv epoxy_glColor4sv
#define glColor4ub epoxy_glColor4ub
#define glColor4ubv epoxy_glColor4ubv
#define glColor4ui epoxy_glColor4ui
#define glColor4uiv epoxy_glColor4uiv
#define glColor4us epoxy_glColor4us
#define glColor4usv epoxy_glColor4usv
#define glColor4x epoxy_glColor4x
#define glColorMask epoxy_glColorMask
#define glColorMaski epoxy_glColorMaski
#define glColorMaterial epoxy_glColorMaterial
#define glColorP3ui epoxy_glColorP3ui
#define glColorP3uiv epoxy_glColorP3uiv
#define glColorP4ui epoxy_glColorP4ui
#define glColorP4uiv epoxy_glColorP4uiv
#define glColorPointer epoxy_glColorPointer
#define glCompileShader epoxy_glCompileShader
#define glCompressedTexImage1D epoxy_glCompressedTexImage1D
#define glCompressedTexImage2D epoxy_glCompressedTexImage2D
#define glCompressedTexImage3D epoxy_glCompressedTexImage3D
#define glCompressedTexSubImage1D epoxy_glCompressedTexSubImage1D
#define glCompressedTexSubImage2D epoxy_glCompressedTexSubImage2D
#define glCompressedTexSubImage3D epoxy_glCompressedTexSubImage3D
#define glCompressedTextureSubImage1D epoxy_glCompressedTextureSubImage1D
#define glCompressedTextureSubImage2D epoxy_glCompressedTextureSubImage2D
#define glCompressedTextureSubImage3D epoxy_glCompressedTextureSubImage3D
#define glCopyBufferSubData epoxy_glCopyBufferSubData
#define glCopyImageSubData epoxy_glCopyImageSubData
#define glCopyNamedBufferSubData epoxy_glCopyNamedBufferSubData
#define glCopyPixels epoxy_glCopyPixels
#define glCopyTexImage1D epoxy_glCopyTexImage1D
#define glCopyTexImage2D epoxy_glCopyTexImage2D
#define glCopyTexSubImage1D epoxy_glCopyTexSubImage1D
#define glCopyTexSubImage2D epoxy_glCopyTexSubImage2D
#define glCopyTexSubImage3D epoxy_glCopyTexSubImage3D
#define glCopyTextureSubImage1D epoxy_glCopyTextureSubImage1D
#define glCopyTextureSubImage2D epoxy_glCopyTextureSubImage2D
#define glCopyTextureSubImage3D epoxy_glCopyTextureSubImage3D
#define glCreateBuffers epoxy_glCreateBuffers
#define glCreateFramebuffers epoxy_glCreateFramebuffers
#define glCreateProgram epoxy_glCreateProgram
#define glCreateProgramPipelines epoxy_glCreateProgramPipelines
#define glCreateQueries epoxy_glCreateQueries
#define glCreateRenderbuffers epoxy_glCreateRenderbuffers
#define glCreateSamplers epoxy_glCreateSamplers
#define glCreateShader epoxy_glCreateShader
#define glCreateShaderProgramv epoxy_glCreateShaderProgramv
#define glCreateTextures epoxy_glCreateTextures
#define glCreateTransformFeedbacks epoxy_glCreateTransformFeedbacks
#define glCreateVertexArrays epoxy_glCreateVertexArrays
#define glCullFace epoxy_glCullFace
#define glDebugMessageCallback epoxy_glDebugMessageCallback
#define glDebugMessageCallbackARB epoxy_glDebugMessageCallbackARB
#define glDebugMessageCallbackKHR epoxy_glDebugMessageCallbackKHR
#define glDebugMessageControl epoxy_glDebugMessageControl
#define glDebugMessageControlARB epoxy_glDebugMessageControlARB
#define glDebugMessageControlKHR epoxy_glDebugMessageControlKHR
#define glDebugMessageInsert epoxy_glDebugMessageInsert
#define glDebugMessageInsertARB epoxy_glDebugMessageInsertARB
#define glDebugMessageInsertKHR epoxy_glDebugMessageInsertKHR
#define glDeleteBuffers epoxy_glDeleteBuffers
#define glDeleteBuffersARB epoxy_glDeleteBuffersARB
#define glDeleteFramebuffers epoxy_glDeleteFramebuffers
#define glDeleteLists epoxy_glDeleteLists
#define glDeleteProgram epoxy_glDeleteProgram
#define glDeleteProgramPipelines epoxy_glDeleteProgramPipelines
#define glDeleteQueries epoxy_glDeleteQueries
#define glDeleteRenderbuffers epoxy_glDeleteRenderbuffers
#define glDeleteSamplers epoxy_glDeleteSamplers
#define glDeleteShader epoxy_glDeleteShader
#define glDeleteSync epoxy_glDeleteSync
#define glDeleteTextures epoxy_glDeleteTextures
#define glDeleteTransformFeedbacks epoxy_glDeleteTransformFeedbacks
#define glDeleteVertexArrays epoxy_glDeleteVertexArrays
#define glDepthFunc epoxy_glDepthFunc
#define glDepthMask epoxy_glDepthMask
#define glDepthRange epoxy_glDepthRange
#define glDepthRangeArrayv epoxy_glDepthRangeArrayv
#define glDepthRangeIndexed epoxy_glDepthRangeIndexed
#define glDepthRangef epoxy_glDepthRangef
#define glDepthRangefOES epoxy_glDepthRangefOES
#define glDepthRangex epoxy_glDepthRangex
#define glDetachShader epoxy_glDetachShader
#define glDisable epoxy_glDisable
#define glDisableClientState epoxy_glDisableClientState
#define glDisableVertexArrayAttrib epoxy_glDisableVertexArrayAttrib
#define glDisableVertexAttribArray epoxy_glDisableVertexAttribArray
#define glDisablei epoxy_glDisablei
#define glDispatchCompute epoxy_glDispatchCompute
#define glDispatchComputeIndirect epoxy_glDispatchComputeIndirect
#define glDrawArrays epoxy_glDrawArrays
#define glDrawArraysIndirect epoxy_glDrawArraysIndirect
#define glDrawArraysInstanced epoxy_glDrawArraysInstanced
#define glDrawArraysInstancedBaseInstance epoxy_glDrawArraysInstancedBaseInstance
#define glDrawBuffer epoxy_glDrawBuffer
#define glDrawBuffers epoxy_glDrawBuffers
#define glDrawElements epoxy_glDrawElements
#define glDrawElementsBaseVertex epoxy_glDrawElementsBaseVertex
#define glDrawElementsBaseVertexEXT epoxy_glDrawElementsBaseVertexEXT
#define glDrawElementsBaseVertexOES epoxy_glDrawElementsBaseVertexOES
#define glDrawElementsIndirect epoxy_glDrawElementsIndirect
#define glDrawElementsInstanced epoxy_glDrawElementsInstanced
#define glDrawElementsInstancedBaseInstance epoxy_glDrawElementsInstancedBaseInstance
#define glDrawElementsInstancedBaseVertex epoxy_glDrawElementsInstancedBaseVertex
#define glDrawElementsInstancedBaseVertexBaseInstance epoxy_glDrawElementsInstancedBaseVertexBaseInstance
#define glDrawElementsInstancedBaseVertexEXT epoxy_glDrawElementsInstancedBaseVertexEXT
#define glDrawElementsInstancedBaseVertexOES epoxy_glDrawElementsInstancedBaseVertexOES
#define glDrawPixels epoxy_glDrawPixels
#define glDrawRangeElements epoxy_glDrawRangeElements
#define glDrawRangeElementsBaseVertex epoxy_glDrawRangeElementsBaseVertex
#define glDrawRangeElementsBaseVertexEXT epoxy_glDrawRangeElementsBaseVertexEXT
#define glDrawRangeElementsBaseVertexOES epoxy_glDrawRangeElementsBaseVertexOES
#define glDrawTransformFeedback epoxy_glDrawTransformFeedback
#define glDrawTransformFeedbackInstanced epoxy_glDrawTransformFeedbackInstanced
#define glDrawTransformFeedbackStream epoxy_glDrawTransformFeedbackStream
#define glDrawTransformFeedbackStreamInstanced epoxy_glDrawTransformFeedbackStreamInstanced
#define glEdgeFlag epoxy_glEdgeFlag
#define glEdgeFlagPointer epoxy_glEdgeFlagPointer
#define glEdgeFlagv epoxy_glEdgeFlagv
#define glEnable epoxy_glEnable
#define glEnableClientState epoxy_glEnableClientState
#define glEnableVertexArrayAttrib epoxy_glEnableVertexArrayAttrib
#define glEnableVertexAttribArray epoxy_glEnableVertexAttribArray
#define glEnablei epoxy_glEnablei
#define glEnd epoxy_glEnd
#define glEndConditionalRender epoxy_glEndConditionalRender
#define glEndList epoxy_glEndList
#define glEndQuery epoxy_glEndQuery
#define glEndQueryIndexed epoxy_glEndQueryIndexed
#define glEndTransformFeedback epoxy_glEndTransformFeedback
#define glEvalCoord1d epoxy_glEvalCoord1d
#define glEvalCoord1dv epoxy_glEvalCoord1dv
#define glEvalCoord1f epoxy_glEvalCoord1f
#define glEvalCoord1fv epoxy_glEvalCoord1fv
#define glEvalCoord2d epoxy_glEvalCoord2d
#define glEvalCoord2dv epoxy_glEvalCoord2dv
#define glEvalCoord2f epoxy_glEvalCoord2f
#define glEvalCoord2fv epoxy_glEvalCoord2fv
#define glEvalMesh1 epoxy_glEvalMesh1
#define glEvalMesh2 epoxy_glEvalMesh2
#define glEvalPoint1 epoxy_glEvalPoint1
#define glEvalPoint2 epoxy_glEvalPoint2
#define glFeedbackBuffer epoxy_glFeedbackBuffer
#define glFenceSync epoxy_glFenceSync
#define glFinish epoxy_glFinish
#define glFlush epoxy_glFlush
#define glFlushMappedBufferRange epoxy_glFlushMappedBufferRange
#define glFlushMappedBufferRangeEXT epoxy_glFlushMappedBufferRangeEXT
#define glFlushMappedNamedBufferRange epoxy_glFlushMappedNamedBufferRange
#define glFogCoordPointer epoxy_glFogCoordPointer
#define glFogCoordd epoxy_glFogCoordd
#define glFogCoorddv epoxy_glFogCoorddv
#define glFogCoordf epoxy_glFogCoordf
#define glFogCoordfv epoxy_glFogCoordfv
#define glFogf epoxy_glFogf
#define glFogfv epoxy_glFogfv
#define glFogi epoxy_glFogi
#define glFogiv epoxy_glFogiv
#define glFogx epoxy_glFogx
#define glFogxv epoxy_glFogxv
#define glFramebufferParameteri epoxy_glFramebufferParameteri
#define glFramebufferRenderbuffer epoxy_glFramebufferRenderbuffer
#define glFramebufferTexture epoxy_glFramebufferTexture
#define glFramebufferTexture1D epoxy_glFramebufferTexture1D
#define glFramebufferTexture2D epoxy_glFramebufferTexture2D
#define glFramebufferTexture3D epoxy_glFramebufferTexture3D
#define glFramebufferTextureLayer epoxy_glFramebufferTextureLayer
#define glFrontFace epoxy_glFrontFace
#define glFrustum epoxy_glFrustum
#define glFrustumf epoxy_glFrustumf
#define glFrustumfOES epoxy_glFrustumfOES
#define glFrustumx epoxy_glFrustumx
#define glGenBuffers epoxy_glGenBuffers
#define glGenBuffersARB epoxy_glGenBuffersARB
#define glGenFramebuffers epoxy_glGenFramebuffers
#define glGenLists epoxy_glGenLists
#define glGenProgramPipelines epoxy_glGenProgramPipelines
#define glGenQueries epoxy_glGenQueries
#define glGenRenderbuffers epoxy_glGenRenderbuffers
#define glGenSamplers epoxy_glGenSamplers
#define glGenTextures epoxy_glGenTextures
#define glGenTransformFeedbacks epoxy_glGenTransformFeedbacks
#define glGenVertexArrays epoxy_glGenVertexArrays
#define glGenerateMipmap epoxy_glGenerateMipmap
#define glGenerateTextureMipmap epoxy_glGenerateTextureMipmap
#define glGetActiveAtomicCounterBufferiv epoxy_glGetActiveAtomicCounterBufferiv
#define glGetActiveAttrib epoxy_glGetActiveAttrib
#define glGetActiveSubroutineName epoxy_glGetActiveSubroutineName
#define glGetActiveSubroutineUniformName epoxy_glGetActiveSubroutineUniformName
#define glGetActiveSubroutineUniformiv epoxy_glGetActiveSubroutineUniformiv
#define glGetActiveUniform epoxy_glGetActiveUniform
#define glGetActiveUniformBlockName epoxy_glGetActiveUniformBlockName
#define glGetActiveUniformBlockiv epoxy_glGetActiveUniformBlockiv
#define glGetActiveUniformName epoxy_glGetActiveUniformName
#define glGetActiveUniformsiv epoxy_glGetActiveUniformsiv
#define glGetAttachedShaders epoxy_glGetAttachedShaders
#define glGetAttribLocation epoxy_glGetAttribLocation
#define glGetBooleani_v epoxy_glGetBooleani_v
#define glGetBooleanv epoxy_glGetBooleanv
#define glGetBufferParameteri64v epoxy_glGetBufferParameteri64v
#define glGetBufferParameteriv epoxy_glGetBufferParameteriv
#define glGetBufferParameterivARB epoxy_glGetBufferParameterivARB
#define glGetBufferPointerv epoxy_glGetBufferPointerv
#define glGetBufferPointervARB epoxy_glGetBufferPointervARB
#define glGetBufferPointervOES epoxy_glGetBufferPointervOES
#define glGetBufferSubData epoxy_glGetBufferSubData
#define glGetBufferSubDataARB epoxy_glGetBufferSubDataARB
#define glGetClipPlane epoxy_glGetClipPlane
#define glGetClipPlanef epoxy_glGetClipPlanef
#define glGetClipPlanefOES epoxy_glGetClipPlanefOES
#define glGetClipPlanex epoxy_glGetClipPlanex
#define glGetCompressedTexImage epoxy_glGetCompressedTexImage
#define glGetCompressedTextureImage epoxy_glGetCompressedTextureImage
#define glGetCompressedTextureSubImage epoxy_glGetCompressedTextureSubImage
#define glGetDebugMessageLog epoxy_glGetDebugMessageLog
#define glGetDebugMessageLogARB epoxy_glGetDebugMessageLogARB
#define glGetDebugMessageLogKHR epoxy_glGetDebugMessageLogKHR
#define glGetDoublei_v epoxy_glGetDoublei_v
#define glGetDoublev epoxy_glGetDoublev
#define glGetError epoxy_glGetError
#define glGetFixedv epoxy_glGetFixedv
#define glGetFloati_v epoxy_glGetFloati_v
#define glGetFloatv epoxy_glGetFloatv
#define glGetFragDataIndex epoxy_glGetFragDataIndex
#define glGetFragDataLocation epoxy_glGetFragDataLocation
#define glGetFramebufferAttachmentParameteriv epoxy_glGetFramebufferAttachmentParameteriv
#define glGetFramebufferParameteriv epoxy_glGetFramebufferParameteriv
#define glGetGraphicsResetStatus epoxy_glGetGraphicsResetStatus
#define glGetInteger64i_v epoxy_glGetInteger64i_v
#define glGetInteger64v epoxy_glGetInteger64v
#define glGetIntegeri_v epoxy_glGetIntegeri_v
#define glGetIntegerv epoxy_glGetIntegerv
#define glGetInternalformati64v epoxy_glGetInternalformati64v
#define glGetInternalformativ epoxy_glGetInternalformativ
#define glGetLightfv epoxy_glGetLightfv
#define glGetLightiv epoxy_glGetLightiv
#define glGetLightxv epoxy_glGetLightxv
#define glGetMapdv epoxy_glGetMapdv
#define glGetMapfv epoxy_glGetMapfv
#define glGetMapiv epoxy_glGetMapiv
#define glGetMaterialfv epoxy_glGetMaterialfv
#define glGetMaterialiv epoxy_glGetMaterialiv
#define glGetMaterialxv epoxy_glGetMaterialxv
#define glGetMultisamplefv epoxy_glGetMultisamplefv
#define glGetNamedBufferParameteri64v epoxy_glGetNamedBufferParameteri64v
#define glGetNamedBufferParameteriv epoxy_glGetNamedBufferParameteriv
#define glGetNamedBufferPointerv epoxy_glGetNamedBufferPointerv
#define glGetNamedBufferSubData epoxy_glGetNamedBufferSubData
#define glGetNamedFramebufferAttachmentParameteriv epoxy_glGetNamedFramebufferAttachmentParameteriv
#define glGetNamedFramebufferParameteriv epoxy_glGetNamedFramebufferParameteriv
#define glGetNamedRenderbufferParameteriv epoxy_glGetNamedRenderbufferParameteriv
#define glGetObjectLabel epoxy_glGetObjectLabel
#define glGetObjectLabelKHR epoxy_glGetObjectLabelKHR
#define glGetObjectPtrLabel epoxy_glGetObjectPtrLabel
#define glGetObjectPtrLabelKHR epoxy_glGetObjectPtrLabelKHR
#define glGetPixelMapfv epoxy_glGetPixelMapfv
#define glGetPixelMapuiv epoxy_glGetPixelMapuiv
#define glGetPixelMapusv epoxy_glGetPixelMapusv
#define glGetPointerv epoxy_glGetPointerv
#define glGetPointervKHR epoxy_glGetPointervKHR
#define glGetPolygonStipple epoxy_glGetPolygonStipple
#define glGetProgramBinary epoxy_glGetProgramBinary
#define glGetProgramInfoLog epoxy_glGetProgramInfoLog
#define glGetProgramInterfaceiv epoxy_glGetProgramInterfaceiv
#define glGetProgramPipelineInfoLog epoxy_glGetProgramPipelineInfoLog
#define glGetProgramPipelineiv epoxy_glGetProgramPipelineiv
#define glGetProgramResourceIndex epoxy_glGetProgramResourceIndex
#define glGetProgramResourceLocation epoxy_glGetProgramResourceLocation
#define glGetProgramResourceLocationIndex epoxy_glGetProgramResourceLocationIndex
#define glGetProgramResourceName epoxy_glGetProgramResourceName
#define glGetProgramResourceiv epoxy_glGetProgramResourceiv
#define glGetProgramStageiv epoxy_glGetProgramStageiv
#define glGetProgramiv epoxy_glGetProgramiv
#define glGetQueryBufferObjecti64v epoxy_glGetQueryBufferObjecti64v
#define glGetQueryBufferObjectiv epoxy_glGetQueryBufferObjectiv
#define glGetQueryBufferObjectui64v epoxy_glGetQueryBufferObjectui64v
#define glGetQueryBufferObjectuiv epoxy_glGetQueryBufferObjectuiv
#define glGetQueryIndexediv epoxy_glGetQueryIndexediv
#define glGetQueryObjecti64v epoxy_glGetQueryObjecti64v
#define glGetQueryObjectiv epoxy_glGetQueryObjectiv
#define glGetQueryObjectui64v epoxy_glGetQueryObjectui64v
#define glGetQueryObjectuiv epoxy_glGetQueryObjectuiv
#define glGetQueryiv epoxy_glGetQueryiv
#define glGetRenderbufferParameteriv epoxy_glGetRenderbufferParameteriv
#define glGetSamplerParameterIiv epoxy_glGetSamplerParameterIiv
#define glGetSamplerParameterIuiv epoxy_glGetSamplerParameterIuiv
#define glGetSamplerParameterfv epoxy_glGetSamplerParameterfv
#define glGetSamplerParameteriv epoxy_glGetSamplerParameteriv
#define glGetShaderInfoLog epoxy_glGetShaderInfoLog
#define glGetShaderPrecisionFormat epoxy_glGetShaderPrecisionFormat
#define glGetShaderSource epoxy_glGetShaderSource
#define glGetShaderiv epoxy_glGetShaderiv
#define glGetString epoxy_glGetString
#define glGetStringi epoxy_glGetStringi
#define glGetSubroutineIndex epoxy_glGetSubroutineIndex
#define glGetSubroutineUniformLocation epoxy_glGetSubroutineUniformLocation
#define glGetSynciv epoxy_glGetSynciv
#define glGetTexEnvfv epoxy_glGetTexEnvfv
#define glGetTexEnviv epoxy_glGetTexEnviv
#define glGetTexEnvxv epoxy_glGetTexEnvxv
#define glGetTexGendv epoxy_glGetTexGendv
#define glGetTexGenfv epoxy_glGetTexGenfv
#define glGetTexGeniv epoxy_glGetTexGeniv
#define glGetTexImage epoxy_glGetTexImage
#define glGetTexLevelParameterfv epoxy_glGetTexLevelParameterfv
#define glGetTexLevelParameteriv epoxy_glGetTexLevelParameteriv
#define glGetTexParameterIiv epoxy_glGetTexParameterIiv
#define glGetTexParameterIuiv epoxy_glGetTexParameterIuiv
#define glGetTexParameterfv epoxy_glGetTexParameterfv
#define glGetTexParameteriv epoxy_glGetTexParameteriv
#define glGetTexParameterxv epoxy_glGetTexParameterxv
#define glGetTextureImage epoxy_glGetTextureImage
#define glGetTextureLevelParameterfv epoxy_glGetTextureLevelParameterfv
#define glGetTextureLevelParameteriv epoxy_glGetTextureLevelParameteriv
#define glGetTextureParameterIiv epoxy_glGetTextureParameterIiv
#define glGetTextureParameterIuiv epoxy_glGetTextureParameterIuiv
#define glGetTextureParameterfv epoxy_glGetTextureParameterfv
#define glGetTextureParameteriv epoxy_glGetTextureParameteriv
#define glGetTextureSubImage epoxy_glGetTextureSubImage
#define glGetTransformFeedbackVarying epoxy_glGetTransformFeedbackVarying
#define glGetTransformFeedbacki64_v epoxy_glGetTransformFeedbacki64_v
#define glGetTransformFeedbacki_v epoxy_glGetTransformFeedbacki_v
#define glGetTransformFeedbackiv epoxy_glGetTransformFeedbackiv
#define glGetUniformBlockIndex epoxy_glGetUniformBlockIndex
#define glGetUniformIndices epoxy_glGetUniformIndices
#define glGetUniformLocation epoxy_glGetUniformLocation
#define glGetUniformSubroutineuiv epoxy_glGetUniformSubroutineuiv
#define glGetUniformdv epoxy_glGetUniformdv
#define glGetUniformfv epoxy_glGetUniformfv
#define glGetUniformiv epoxy_glGetUniformiv
#define glGetUniformuiv epoxy_glGetUniformuiv
#define glGetVertexArrayIndexed64iv epoxy_glGetVertexArrayIndexed64iv
#define glGetVertexArrayIndexediv epoxy_glGetVertexArrayIndexediv
#define glGetVertexArrayiv epoxy_glGetVertexArrayiv
#define glGetVertexAttribIiv epoxy_glGetVertexAttribIiv
#define glGetVertexAttribIuiv epoxy_glGetVertexAttribIuiv
#define glGetVertexAttribLdv epoxy_glGetVertexAttribLdv
#define glGetVertexAttribPointerv epoxy_glGetVertexAttribPointerv
#define glGetVertexAttribdv epoxy_glGetVertexAttribdv
#define glGetVertexAttribfv epoxy_glGetVertexAttribfv
#define glGetVertexAttribiv epoxy_glGetVertexAttribiv
#define glGetnColorTable epoxy_glGetnColorTable
#define glGetnCompressedTexImage epoxy_glGetnCompressedTexImage
#define glGetnConvolutionFilter epoxy_glGetnConvolutionFilter
#define glGetnHistogram epoxy_glGetnHistogram
#define glGetnMapdv epoxy_glGetnMapdv
#define glGetnMapfv epoxy_glGetnMapfv
#define glGetnMapiv epoxy_glGetnMapiv
#define glGetnMinmax epoxy_glGetnMinmax
#define glGetnPixelMapfv epoxy_glGetnPixelMapfv
#define glGetnPixelMapuiv epoxy_glGetnPixelMapuiv
#define glGetnPixelMapusv epoxy_glGetnPixelMapusv
#define glGetnPolygonStipple epoxy_glGetnPolygonStipple
#define glGetnSeparableFilter epoxy_glGetnSeparableFilter
#define glGetnTexImage epoxy_glGetnTexImage
#define glGetnUniformdv epoxy_glGetnUniformdv
#define glGetnUniformfv epoxy_glGetnUniformfv
#define glGetnUniformiv epoxy_glGetnUniformiv
#define glGetnUniformuiv epoxy_glGetnUniformuiv
#define glHint epoxy_glHint
#define glIndexMask epoxy_glIndexMask
#define glIndexPointer epoxy_glIndexPointer
#define glIndexd epoxy_glIndexd
#define glIndexdv epoxy_glIndexdv
#define glIndexf epoxy_glIndexf
#define glIndexfv epoxy_glIndexfv
#define glIndexi epoxy_glIndexi
#define glIndexiv epoxy_glIndexiv
#define glIndexs epoxy_glIndexs
#define glIndexsv epoxy_glIndexsv
#define glIndexub epoxy_glIndexub
#define glIndexubv epoxy_glIndexubv
#define glInitNames epoxy_glInitNames
#define glInterleavedArrays epoxy_glInterleavedArrays
#define glInvalidateBufferData epoxy_glInvalidateBufferData
#define glInvalidateBufferSubData epoxy_glInvalidateBufferSubData
#define glInvalidateFramebuffer epoxy_glInvalidateFramebuffer
#define glInvalidateNamedFramebufferData epoxy_glInvalidateNamedFramebufferData
#define glInvalidateNamedFramebufferSubData epoxy_glInvalidateNamedFramebufferSubData
#define glInvalidateSubFramebuffer epoxy_glInvalidateSubFramebuffer
#define glInvalidateTexImage epoxy_glInvalidateTexImage
#define glInvalidateTexSubImage epoxy_glInvalidateTexSubImage
#define glIsBuffer epoxy_glIsBuffer
#define glIsBufferARB epoxy_glIsBufferARB
#define glIsEnabled epoxy_glIsEnabled
#define glIsEnabledi epoxy_glIsEnabledi
#define glIsFramebuffer epoxy_glIsFramebuffer
#define glIsList epoxy_glIsList
#define glIsProgram epoxy_glIsProgram
#define glIsProgramPipeline epoxy_glIsProgramPipeline
#define glIsQuery epoxy_glIsQuery
#define glIsRenderbuffer epoxy_glIsRenderbuffer
#define glIsSampler epoxy_glIsSampler
#define glIsShader epoxy_glIsShader
#define glIsSync epoxy_glIsSync
#define glIsTexture epoxy_glIsTexture
#define glIsTransformFeedback epoxy_glIsTransformFeedback
#define glIsVertexArray epoxy_glIsVertexArray
#define glLightModelf epoxy_glLightModelf
#define glLightModelfv epoxy_glLightModelfv
#define glLightModeli epoxy_glLightModeli
#define glLightModeliv epoxy_glLightModeliv
#define glLightModelx epoxy_glLightModelx
#define glLightModelxv epoxy_glLightModelxv
#define glLightf epoxy_glLightf
#define glLightfv epoxy_glLightfv
#define glLighti epoxy_glLighti
#define glLightiv epoxy_glLightiv
#define glLightx epoxy_glLightx
#define glLightxv epoxy_glLightxv
#define glLineStipple epoxy_glLineStipple
#define glLineWidth epoxy_glLineWidth
#define glLineWidthx epoxy_glLineWidthx
#define glLinkProgram epoxy_glLinkProgram
#define glListBase epoxy_glListBase
#define glLoadIdentity epoxy_glLoadIdentity
#define glLoadMatrixd epoxy_glLoadMatrixd
#define glLoadMatrixf epoxy_glLoadMatrixf
#define glLoadMatrixx epoxy_glLoadMatrixx
#define glLoadName epoxy_glLoadName
#define glLoadTransposeMatrixd epoxy_glLoadTransposeMatrixd
#define glLoadTransposeMatrixf epoxy_glLoadTransposeMatrixf
#define glLogicOp epoxy_glLogicOp
#define glMap1d epoxy_glMap1d
#define glMap1f epoxy_glMap1f
#define glMap2d epoxy_glMap2d
#define glMap2f epoxy_glMap2f
#define glMapBuffer epoxy_glMapBuffer
#define glMapBufferARB epoxy_glMapBufferARB
#define glMapBufferOES epoxy_glMapBufferOES
#define glMapBufferRange epoxy_glMapBufferRange
#define glMapBufferRangeEXT epoxy_glMapBufferRangeEXT
#define glMapGrid1d epoxy_glMapGrid1d
#define glMapGrid1f epoxy_glMapGrid1f
#define glMapGrid2d epoxy_glMapGrid2d
#define glMapGrid2f epoxy_glMapGrid2f
#define glMapNamedBuffer epoxy_glMapNamedBuffer
#define glMapNamedBufferRange epoxy_glMapNamedBufferRange
#define glMaterialf epoxy_glMaterialf
#define glMaterialfv epoxy_glMaterialfv
#define glMateriali epoxy_glMateriali
#define glMaterialiv epoxy_glMaterialiv
#define glMaterialx epoxy_glMaterialx
#define glMaterialxv epoxy_glMaterialxv
#define glMatrixMode epoxy_glMatrixMode
#define glMemoryBarrier epoxy_glMemoryBarrier
#define glMemoryBarrierByRegion epoxy_glMemoryBarrierByRegion
#define glMinSampleShading epoxy_glMinSampleShading
#define glMinSampleShadingARB epoxy_glMinSampleShadingARB
#define glMinSampleShadingOES epoxy_glMinSampleShadingOES
#define glMultMatrixd epoxy_glMultMatrixd
#define glMultMatrixf epoxy_glMultMatrixf
#define glMultMatrixx epoxy_glMultMatrixx
#define glMultTransposeMatrixd epoxy_glMultTransposeMatrixd
#define glMultTransposeMatrixf epoxy_glMultTransposeMatrixf
#define glMultiDrawArrays epoxy_glMultiDrawArrays
#define glMultiDrawArraysIndirect epoxy_glMultiDrawArraysIndirect
#define glMultiDrawArraysIndirectCount epoxy_glMultiDrawArraysIndirectCount
#define glMultiDrawElements epoxy_glMultiDrawElements
#define glMultiDrawElementsBaseVertex epoxy_glMultiDrawElementsBaseVertex
#define glMultiDrawElementsBaseVertexEXT epoxy_glMultiDrawElementsBaseVertexEXT
#define glMultiDrawElementsIndirect epoxy_glMultiDrawElementsIndirect
#define glMultiDrawElementsIndirectCount epoxy_glMultiDrawElementsIndirectCount
#define glMultiTexCoord1d epoxy_glMultiTexCoord1d
#define glMultiTexCoord1dv epoxy_glMultiTexCoord1dv
#define glMultiTexCoord1f epoxy_glMultiTexCoord1f
#define glMultiTexCoord1fv epoxy_glMultiTexCoord1fv
#define glMultiTexCoord1i epoxy_glMultiTexCoord1i
#define glMultiTexCoord1iv epoxy_glMultiTexCoord1iv
#define glMultiTexCoord1s epoxy_glMultiTexCoord1s
#define glMultiTexCoord1sv epoxy_glMultiTexCoord1sv
#define glMultiTexCoord2d epoxy_glMultiTexCoord2d
#define glMultiTexCoord2dv epoxy_glMultiTexCoord2dv
#define glMultiTexCoord2f epoxy_glMultiTexCoord2f
#define glMultiTexCoord2fv epoxy_glMultiTexCoord2fv
#define glMultiTexCoord2i epoxy_glMultiTexCoord2i
#define glMultiTexCoord2iv epoxy_glMultiTexCoord2iv
#define glMultiTexCoord2s epoxy_glMultiTexCoord2s
#define glMultiTexCoord2sv epoxy_glMultiTexCoord2sv
#define glMultiTexCoord3d epoxy_glMultiTexCoord3d
#define glMultiTexCoord3dv epoxy_glMultiTexCoord3dv
#define glMultiTexCoord3f epoxy_glMultiTexCoord3f
#define glMultiTexCoord3fv epoxy_glMultiTexCoord3fv
#define glMultiTexCoord3i epoxy_glMultiTexCoord3i
#define glMultiTexCoord3iv epoxy_glMultiTexCoord3iv
#define glMultiTexCoord3s epoxy_glMultiTexCoord3s
#define glMultiTexCoord3sv epoxy_glMultiTexCoord3sv
#define glMultiTexCoord4d epoxy_glMultiTexCoord4d
#define glMultiTexCoord4dv epoxy_glMultiTexCoord4dv
#define glMultiTexCoord4f epoxy_glMultiTexCoord4f
#define glMultiTexCoord4fv epoxy_glMultiTexCoord4fv
#define glMultiTexCoord4i epoxy_glMultiTexCoord4i
#define glMultiTexCoord4iv epoxy_glMultiTexCoord4iv
#define glMultiTexCoord4s epoxy_glMultiTexCoord4s
#define glMultiTexCoord4sv epoxy_glMultiTexCoord4sv
#define glMultiTexCoord4x epoxy_glMultiTexCoord4x
#define glMultiTexCoordP1ui epoxy_glMultiTexCoordP1ui
#define glMultiTexCoordP1uiv epoxy_glMultiTexCoordP1uiv
#define glMultiTexCoordP2ui epoxy_glMultiTexCoordP2ui
#define glMultiTexCoordP2uiv epoxy_glMultiTexCoordP2uiv
#define glMultiTexCoordP3ui epoxy_glMultiTexCoordP3ui
#define glMultiTexCoordP3uiv epoxy_glMultiTexCoordP3uiv
#define glMultiTexCoordP4ui epoxy_glMultiTexCoordP4ui
#define glMultiTexCoordP4uiv epoxy_glMultiTexCoordP4uiv
#define glNamedBufferData epoxy_glNamedBufferData
#define glNamedBufferStorage epoxy_glNamedBufferStorage
#define glNamedBufferSubData epoxy_glNamedBufferSubData
#define glNamedFramebufferDrawBuffer epoxy_glNamedFramebufferDrawBuffer
#define glNamedFramebufferDrawBuffers epoxy_glNamedFramebufferDrawBuffers
#define glNamedFramebufferParameteri epoxy_glNamedFramebufferParameteri
#define glNamedFramebufferReadBuffer epoxy_glNamedFramebufferReadBuffer
#define glNamedFramebufferRenderbuffer epoxy_glNamedFramebufferRenderbuffer
#define glNamedFramebufferTexture epoxy_glNamedFramebufferTexture
#define glNamedFramebufferTextureLayer epoxy_glNamedFramebufferTextureLayer
#define glNamedRenderbufferStorage epoxy_glNamedRenderbufferStorage
#define glNamedRenderbufferStorageMultisample epoxy_glNamedRenderbufferStorageMultisample
#define glNewList epoxy_glNewList
#define glNormal3b epoxy_glNormal3b
#define glNormal3bv epoxy_glNormal3bv
#define glNormal3d epoxy_glNormal3d
#define glNormal3dv epoxy_glNormal3dv
#define glNormal3f epoxy_glNormal3f
#define glNormal3fv epoxy_glNormal3fv
#define glNormal3i epoxy_glNormal3i
#define glNormal3iv epoxy_glNormal3iv
#define glNormal3s epoxy_glNormal3s
#define glNormal3sv epoxy_glNormal3sv
#define glNormal3x epoxy_glNormal3x
#define glNormalP3ui epoxy_glNormalP3ui
#define glNormalP3uiv epoxy_glNormalP3uiv
#define glNormalPointer epoxy_glNormalPointer
#define glObjectLabel epoxy_glObjectLabel
#define glObjectLabelKHR epoxy_glObjectLabelKHR
#define glObjectPtrLabel epoxy_glObjectPtrLabel
#define glObjectPtrLabelKHR epoxy_glObjectPtrLabelKHR
#define glOrtho epoxy_glOrtho
#define glOrthof epoxy_glOrthof
#define glOrthofOES epoxy_glOrthofOES
#define glOrthox epoxy_glOrthox
#define glPassThrough epoxy_glPassThrough
#define glPatchParameterfv epoxy_glPatchParameterfv
#define glPatchParameteri epoxy_glPatchParameteri
#define glPauseTransformFeedback epoxy_glPauseTransformFeedback
#define glPixelMapfv epoxy_glPixelMapfv
#define glPixelMapuiv epoxy_glPixelMapuiv
#define glPixelMapusv epoxy_glPixelMapusv
#define glPixelStoref epoxy_glPixelStoref
#define glPixelStorei epoxy_glPixelStorei
#define glPixelTransferf epoxy_glPixelTransferf
#define glPixelTransferi epoxy_glPixelTransferi
#define glPixelZoom epoxy_glPixelZoom
#define glPointParameterf epoxy_glPointParameterf
#define glPointParameterfv epoxy_glPointParameterfv
#define glPointParameteri epoxy_glPointParameteri
#define glPointParameteriv epoxy_glPointParameteriv
#define glPointParameterx epoxy_glPointParameterx
#define glPointParameterxv epoxy_glPointParameterxv
#define glPointSize epoxy_glPointSize
#define glPointSizex epoxy_glPointSizex
#define glPolygonMode epoxy_glPolygonMode
#define glPolygonOffset epoxy_glPolygonOffset
#define glPolygonOffsetClamp epoxy_glPolygonOffsetClamp
#define glPolygonOffsetx epoxy_glPolygonOffsetx
#define glPolygonStipple epoxy_glPolygonStipple
#define glPopAttrib epoxy_glPopAttrib
#define glPopClientAttrib epoxy_glPopClientAttrib
#define glPopDebugGroup epoxy_glPopDebugGroup
#define glPopDebugGroupKHR epoxy_glPopDebugGroupKHR
#define glPopMatrix epoxy_glPopMatrix
#define glPopName epoxy_glPopName
#define glPrimitiveBoundingBox epoxy_glPrimitiveBoundingBox
#define glPrimitiveRestartIndex epoxy_glPrimitiveRestartIndex
#define glPrioritizeTextures epoxy_glPrioritizeTextures
#define glProgramBinary epoxy_glProgramBinary
#define glProgramParameteri epoxy_glProgramParameteri
#define glProgramUniform1d epoxy_glProgramUniform1d
#define glProgramUniform1dv epoxy_glProgramUniform1dv
#define glProgramUniform1f epoxy_glProgramUniform1f
#define glProgramUniform1fv epoxy_glProgramUniform1fv
#define glProgramUniform1i epoxy_glProgramUniform1i
#define glProgramUniform1iv epoxy_glProgramUniform1iv
#define glProgramUniform1ui epoxy_glProgramUniform1ui
#define glProgramUniform1uiv epoxy_glProgramUniform1uiv
#define glProgramUniform2d epoxy_glProgramUniform2d
#define glProgramUniform2dv epoxy_glProgramUniform2dv
#define glProgramUniform2f epoxy_glProgramUniform2f
#define glProgramUniform2fv epoxy_glProgramUniform2fv
#define glProgramUniform2i epoxy_glProgramUniform2i
#define glProgramUniform2iv epoxy_glProgramUniform2iv
#define glProgramUniform2ui epoxy_glProgramUniform2ui
#define glProgramUniform2uiv epoxy_glProgramUniform2uiv
#define glProgramUniform3d epoxy_glProgramUniform3d
#define glProgramUniform3dv epoxy_glProgramUniform3dv
#define glProgramUniform3f epoxy_glProgramUniform3f
#define glProgramUniform3fv epoxy_glProgramUniform3fv
#define glProgramUniform3i epoxy_glProgramUniform3i
#define glProgramUniform3iv epoxy_glProgramUniform3iv
#define glProgramUniform3ui epoxy_glProgramUniform3ui
#define glProgramUniform3uiv epoxy_glProgramUniform3uiv
#define glProgramUniform4d epoxy_glProgramUniform4d
#define glProgramUniform4dv epoxy_glProgramUniform4dv
#define glProgramUniform4f epoxy_glProgramUniform4f
#define glProgramUniform4fv epoxy_glProgramUniform4fv
#define glProgramUniform4i epoxy_glProgramUniform4i
#define glProgramUniform4iv epoxy_glProgramUniform4iv
#define glProgramUniform4ui epoxy_glProgramUniform4ui
#define glProgramUniform4uiv epoxy_glProgramUniform4uiv
#define glProgramUniformMatrix2dv epoxy_glProgramUniformMatrix2dv
#define glProgramUniformMatrix2fv epoxy_glProgramUniformMatrix2fv
#define glProgramUniformMatrix2x3dv epoxy_glProgramUniformMatrix2x3dv
#define glProgramUniformMatrix2x3fv epoxy_glProgramUniformMatrix2x3fv
#define glProgramUniformMatrix2x4dv epoxy_glProgramUniformMatrix2x4dv
#define glProgramUniformMatrix2x4fv epoxy_glProgramUniformMatrix2x4fv
#define glProgramUniformMatrix3dv epoxy_glProgramUniformMatrix3dv
#define glProgramUniformMatrix3fv epoxy_glProgramUniformMatrix3fv
#define glProgramUniformMatrix3x2dv epoxy_glProgramUniformMatrix3x2dv
#define glProgramUniformMatrix3x2fv epoxy_glProgramUniformMatrix3x2fv
#define glProgramUniformMatrix3x4dv epoxy_glProgramUniformMatrix3x4dv
#define glProgramUniformMatrix3x4fv epoxy_glProgramUniformMatrix3x4fv
#define glProgramUniformMatrix4dv epoxy_glProgramUniformMatrix4dv
#define glProgramUniformMatrix4fv epoxy_glProgramUniformMatrix4fv
#define glProgramUniformMatrix4x2dv epoxy_glProgramUniformMatrix4x2dv
#define glProgramUniformMatrix4x2fv epoxy_glProgramUniformMatrix4x2fv
#define glProgramUniformMatrix4x3dv epoxy_glProgramUniformMatrix4x3dv
#define glProgramUniformMatrix4x3fv epoxy_glProgramUniformMatrix4x3fv
#define glProvokingVertex epoxy_glProvokingVertex
#define glPushAttrib epoxy_glPushAttrib
#define glPushClientAttrib epoxy_glPushClientAttrib
#define glPushDebugGroup epoxy_glPushDebugGroup
#define glPushDebugGroupKHR epoxy_glPushDebugGroupKHR
#define glPushMatrix epoxy_glPushMatrix
#define glPushName epoxy_glPushName
#define glQueryCounter epoxy_glQueryCounter
#define glRasterPos2d epoxy_glRasterPos2d
#define glRasterPos2dv epoxy_glRasterPos2dv
#define glRasterPos2f epoxy_glRasterPos2f
#define glRasterPos2fv epoxy_glRasterPos2fv
#define glRasterPos2i epoxy_glRasterPos2i
#define glRasterPos2iv epoxy_glRasterPos2iv
#define glRasterPos2s epoxy_glRasterPos2s
#define glRasterPos2sv epoxy_glRasterPos2sv
#define glRasterPos3d epoxy_glRasterPos3d
#define glRasterPos3dv epoxy_glRasterPos3dv
#define glRasterPos3f epoxy_glRasterPos3f
#define glRasterPos3fv epoxy_glRasterPos3fv
#define glRasterPos3i epoxy_glRasterPos3i
#define glRasterPos3iv epoxy_glRasterPos3iv
#define glRasterPos3s epoxy_glRasterPos3s
#define glRasterPos3sv epoxy_glRasterPos3sv
#define glRasterPos4d epoxy_glRasterPos4d
#define glRasterPos4dv epoxy_glRasterPos4dv
#define glRasterPos4f epoxy_glRasterPos4f
#define glRasterPos4fv epoxy_glRasterPos4fv
#define glRasterPos4i epoxy_glRasterPos4i
#define glRasterPos4iv epoxy_glRasterPos4iv
#define glRasterPos4s epoxy_glRasterPos4s
#define glRasterPos4sv epoxy_glRasterPos4sv
#define glReadBuffer epoxy_glReadBuffer
#define glReadPixels epoxy_glReadPixels
#define glReadnPixels epoxy_glReadnPixels
#define glRectd epoxy_glRectd
#define glRectdv epoxy_glRectdv
#define glRectf epoxy_glRectf
#define glRectfv epoxy_glRectfv
#define glRecti epoxy_glRecti
#define glRectiv epoxy_glRectiv
#define glRects epoxy_glRects
#define glRectsv epoxy_glRectsv
#define glReleaseShaderCompiler epoxy_glReleaseShaderCompiler
#define glRenderMode epoxy_glRenderMode
#define glRenderbufferStorage epoxy_glRenderbufferStorage
#define glRenderbufferStorageMultisample epoxy_glRenderbufferStorageMultisample
#define glResumeTransformFeedback epoxy_glResumeTransformFeedback
#define glRotated epoxy_glRotated
#define glRotatef epoxy_glRotatef
#define glRotatex epoxy_glRotatex
#define glSampleCoverage epoxy_glSampleCoverage
#define glSampleCoveragex epoxy_glSampleCoveragex
#define glSampleMaski epoxy_glSampleMaski
#define glSamplerParameterIiv epoxy_glSamplerParameterIiv
#define glSamplerParameterIuiv epoxy_glSamplerParameterIuiv
#define glSamplerParameterf epoxy_glSamplerParameterf
#define glSamplerParameterfv epoxy_glSamplerParameterfv
#define glSamplerParameteri epoxy_glSamplerParameteri
#define glSamplerParameteriv epoxy_glSamplerParameteriv
#define glScaled epoxy_glScaled
#define glScalef epoxy_glScalef
#define glScalex epoxy_glScalex
#define glScissor epoxy_glScissor
#define glScissorArrayv epoxy_glScissorArrayv
#define glScissorIndexed epoxy_glScissorIndexed
#define glScissorIndexedv epoxy_glScissorIndexedv
#define glSecondaryColor3b epoxy_glSecondaryColor3b
#define glSecondaryColor3bv epoxy_glSecondaryColor3bv
#define glSecondaryColor3d epoxy_glSecondaryColor3d
#define glSecondaryColor3dv epoxy_glSecondaryColor3dv
#define glSecondaryColor3f epoxy_glSecondaryColor3f
#define glSecondaryColor3fv epoxy_glSecondaryColor3fv
#define glSecondaryColor3i epoxy_glSecondaryColor3i
#define glSecondaryColor3iv epoxy_glSecondaryColor3iv
#define glSecondaryColor3s epoxy_glSecondaryColor3s
#define glSecondaryColor3sv epoxy_glSecondaryColor3sv
#define glSecondaryColor3ub epoxy_glSecondaryColor3ub
#define glSecondaryColor3ubv epoxy_glSecondaryColor3ubv
#define glSecondaryColor3ui epoxy_glSecondaryColor3ui
#define glSecondaryColor3uiv epoxy_glSecondaryColor3uiv
#define glSecondaryColor3us epoxy_glSecondaryColor3us
#define glSecondaryColor3usv epoxy_glSecondaryColor3usv
#define glSecondaryColorP3ui epoxy_glSecondaryColorP3ui
#define glSecondaryColorP3uiv epoxy_glSecondaryColorP3uiv
#define glSecondaryColorPointer epoxy_glSecondaryColorPointer
#define glSelectBuffer epoxy_glSelectBuffer
#define glShadeModel epoxy_glShadeModel
#define glShaderBinary epoxy_glShaderBinary
#define glShaderSource epoxy_glShaderSource
#define glShaderStorageBlockBinding epoxy_glShaderStorageBlockBinding
#define glSpecializeShader epoxy_glSpecializeShader
#define glStencilFunc epoxy_glStencilFunc
#define glStencilFuncSeparate epoxy_glStencilFuncSeparate
#define glStencilMask epoxy_glStencilMask
#define glStencilMaskSeparate epoxy_glStencilMaskSeparate
#define glStencilOp epoxy_glStencilOp
#define glStencilOpSeparate epoxy_glStencilOpSeparate
#define glTexBuffer epoxy_glTexBuffer
#define glTexBufferRange epoxy_glTexBufferRange
#define glTexCoord1d epoxy_glTexCoord1d
#define glTexCoord1dv epoxy_glTexCoord1dv
#define glTexCoord1f epoxy_glTexCoord1f
#define glTexCoord1fv epoxy_glTexCoord1fv
#define glTexCoord1i epoxy_glTexCoord1i
#define glTexCoord1iv epoxy_glTexCoord1iv
#define glTexCoord1s epoxy_glTexCoord1s
#define glTexCoord1sv epoxy_glTexCoord1sv
#define glTexCoord2d epoxy_glTexCoord2d
#define glTexCoord2dv epoxy_glTexCoord2dv
#define glTexCoord2f epoxy_glTexCoord2f
#define glTexCoord2fv epoxy_glTexCoord2fv
#define glTexCoord2i epoxy_glTexCoord2i
#define glTexCoord2iv epoxy_glTexCoord2iv
#define glTexCoord2s epoxy_glTexCoord2s
#define glTexCoord2sv epoxy_glTexCoord2sv
#define glTexCoord3d epoxy_glTexCoord3d
#define glTexCoord3dv epoxy_glTexCoord3dv
#define glTexCoord3f epoxy_glTexCoord3f
#define glTexCoord3fv epoxy_glTexCoord3fv
#define glTexCoord3i epoxy_glTexCoord3i
#define glTexCoord3iv epoxy_glTexCoord3iv
#define glTexCoord3s epoxy_glTexCoord3s
#define glTexCoord3sv epoxy_glTexCoord3sv
#define glTexCoord4d epoxy_glTexCoord4d
#define glTexCoord4dv epoxy_glTexCoord4dv
#define glTexCoord4f epoxy_glTexCoord4f
#define glTexCoord4fv epoxy_glTexCoord4fv
#define glTexCoord4i epoxy_glTexCoord4i
#define glTexCoord4iv epoxy_glTexCoord4iv
#define glTexCoord4s epoxy_glTexCoord4s
#define glTexCoord4sv epoxy_glTexCoord4sv
#define glTexCoordP1ui epoxy_glTexCoordP1ui
#define glTexCoordP1uiv epoxy_glTexCoordP1uiv
#define glTexCoordP2ui epoxy_glTexCoordP2ui
#define glTexCoordP2uiv epoxy_glTexCoordP2uiv
#define glTexCoordP3ui epoxy_glTexCoordP3ui
#define glTexCoordP3uiv epoxy_glTexCoordP3uiv
#define glTexCoordP4ui epoxy_glTexCoordP4ui
#define glTexCoordP4uiv epoxy_glTexCoordP4uiv
#define glTexCoordPointer epoxy_glTexCoordPointer
#define glTexEnvf epoxy_glTexEnvf
#define glTexEnvfv epoxy_glTexEnvfv
#define glTexEnvi epoxy_glTexEnvi
#define glTexEnviv epoxy_glTexEnviv
#define glTexEnvx epoxy_glTexEnvx
#define glTexEnvxv epoxy_glTexEnvxv
#define glTexGend epoxy_glTexGend
#define glTexGendv epoxy_glTexGendv
#define glTexGenf epoxy_glTexGenf
#define glTexGenfv epoxy_glTexGenfv
#define glTexGeni epoxy_glTexGeni
#define glTexGeniv epoxy_glTexGeniv
#define glTexImage1D epoxy_glTexImage1D
#define glTexImage2D epoxy_glTexImage2D
#define glTexImage2DMultisample epoxy_glTexImage2DMultisample
#define glTexImage3D epoxy_glTexImage3D
#define glTexImage3DMultisample epoxy_glTexImage3DMultisample
#define glTexParameterIiv epoxy_glTexParameterIiv
#define glTexParameterIuiv epoxy_glTexParameterIuiv
#define glTexParameterf epoxy_glTexParameterf
#define glTexParameterfv epoxy_glTexParameterfv
#define glTexParameteri epoxy_glTexParameteri
#define glTexParameteriv epoxy_glTexParameteriv
#define glTexParameterx epoxy_glTexParameterx
#define glTexParameterxv epoxy_glTexParameterxv
#define glTexStorage1D epoxy_glTexStorage1D
#define glTexStorage2D epoxy_glTexStorage2D
#define glTexStorage2DMultisample epoxy_glTexStorage2DMultisample
#define glTexStorage3D epoxy_glTexStorage3D
#define glTexStorage3DMultisample epoxy_glTexStorage3DMultisample
#define glTexSubImage1D epoxy_glTexSubImage1D
#define glTexSubImage2D epoxy_glTexSubImage2D
#define glTexSubImage3D epoxy_glTexSubImage3D
#define glTextureBarrier epoxy_glTextureBarrier
#define glTextureBuffer epoxy_glTextureBuffer
#define glTextureBufferRange epoxy_glTextureBufferRange
#define glTextureParameterIiv epoxy_glTextureParameterIiv
#define glTextureParameterIuiv epoxy_glTextureParameterIuiv
#define glTextureParameterf epoxy_glTextureParameterf
#define glTextureParameterfv epoxy_glTextureParameterfv
#define glTextureParameteri epoxy_glTextureParameteri
#define glTextureParameteriv epoxy_glTextureParameteriv
#define glTextureStorage1D epoxy_glTextureStorage1D
#define glTextureStorage2D epoxy_glTextureStorage2D
#define glTextureStorage2DMultisample epoxy_glTextureStorage2DMultisample
#define glTextureStorage3D epoxy_glTextureStorage3D
#define glTextureStorage3DMultisample epoxy_glTextureStorage3DMultisample
#define glTextureSubImage1D epoxy_glTextureSubImage1D
#define glTextureSubImage2D epoxy_glTextureSubImage2D
#define glTextureSubImage3D epoxy_glTextureSubImage3D
#define glTextureView epoxy_glTextureView
#define glTransformFeedbackBufferBase epoxy_glTransformFeedbackBufferBase
#define glTransformFeedbackBufferRange epoxy_glTransformFeedbackBufferRange
#define glTransformFeedbackVaryings epoxy_glTransformFeedbackVaryings
#define glTranslated epoxy_glTranslated
#define glTranslatef epoxy_glTranslatef
#define glTranslatex epoxy_glTranslatex
#define glUniform1d epoxy_glUniform1d
#define glUniform1dv epoxy_glUniform1dv
#define glUniform1f epoxy_glUniform1f
#define glUniform1fv epoxy_glUniform1fv
#define glUniform1i epoxy_glUniform1i
#define glUniform1iv epoxy_glUniform1iv
#define glUniform1ui epoxy_glUniform1ui
#define glUniform1uiv epoxy_glUniform1uiv
#define glUniform2d epoxy_glUniform2d
#define glUniform2dv epoxy_glUniform2dv
#define glUniform2f epoxy_glUniform2f
#define glUniform2fv epoxy_glUniform2fv
#define glUniform2i epoxy_glUniform2i
#define glUniform2iv epoxy_glUniform2iv
#define glUniform2ui epoxy_glUniform2ui
#define glUniform2uiv epoxy_glUniform2uiv
#define glUniform3d epoxy_glUniform3d
#define glUniform3dv epoxy_glUniform3dv
#define glUniform3f epoxy_glUniform3f
#define glUniform3fv epoxy_glUniform3fv
#define glUniform3i epoxy_glUniform3i
#define glUniform3iv epoxy_glUniform3iv
#define glUniform3ui epoxy_glUniform3ui
#define glUniform3uiv epoxy_glUniform3uiv
#define glUniform4d epoxy_glUniform4d
#define glUniform4dv epoxy_glUniform4dv
#define glUniform4f epoxy_glUniform4f
#define glUniform4fv epoxy_glUniform4fv
#define glUniform4i epoxy_glUniform4i
#define glUniform4iv epoxy_glUniform4iv
#define glUniform4ui epoxy_glUniform4ui
#define glUniform4uiv epoxy_glUniform4uiv
#define glUniformBlockBinding epoxy_glUniformBlockBinding
#define glUniformMatrix2dv epoxy_glUniformMatrix2dv
#define glUniformMatrix2fv epoxy_glUniformMatrix2fv
#define glUniformMatrix2x3dv epoxy_glUniformMatrix2x3dv
#define glUniformMatrix2x3fv epoxy_glUniformMatrix2x3fv
#define glUniformMatrix2x4dv epoxy_glUniformMatrix2x4dv
#define glUniformMatrix2x4fv epoxy_glUniformMatrix2x4fv
#define glUniformMatrix3dv epoxy_glUniformMatrix3dv
#define glUniformMatrix3fv epoxy_glUniformMatrix3fv
#define glUniformMatrix3x2dv epoxy_glUniformMatrix3x2dv
#define glUniformMatrix3x2fv epoxy_glUniformMatrix3x2fv
#define glUniformMatrix3x4dv epoxy_glUniformMatrix3x4dv
#define glUniformMatrix3x4fv epoxy_glUniformMatrix3x4fv
#define glUniformMatrix4dv epoxy_glUniformMatrix4dv
#define glUniformMatrix4fv epoxy_glUniformMatrix4fv
#define glUniformMatrix4x2dv epoxy_glUniformMatrix4x2dv
#define glUniformMatrix4x2fv epoxy_glUniformMatrix4x2fv
#define glUniformMatrix4x3dv epoxy_glUniformMatrix4x3dv
#define glUniformMatrix4x3fv epoxy_glUniformMatrix4x3fv
#define glUniformSubroutinesuiv epoxy_glUniformSubroutinesuiv
#define glUnmapBuffer epoxy_glUnmapBuffer
#define glUnmapBufferARB epoxy_glUnmapBufferARB
#define glUnmapBufferOES epoxy_glUnmapBufferOES
#define glUnmapNamedBuffer epoxy_glUnmapNamedBuffer
#define glUseProgram epoxy_glUseProgram
#define glUseProgramStages epoxy_glUseProgramStages
#define glValidateProgram epoxy_glValidateProgram
#define glValidateProgramPipeline epoxy_glValidateProgramPipeline
#define glVertex2d epoxy_glVertex2d
#define glVertex2dv epoxy_glVertex2dv
#define glVertex2f epoxy_glVertex2f
#define glVertex2fv epoxy_glVertex2fv
#define glVertex2i epoxy_glVertex2i
#define glVertex2iv epoxy_glVertex2iv
#define glVertex2s epoxy_glVertex2s
#define glVertex2sv epoxy_glVertex2sv
#define glVertex3d epoxy_glVertex3d
#define glVertex3dv epoxy_glVertex3dv
#define glVertex3f epoxy_glVertex3f
#define glVertex3fv epoxy_glVertex3fv
#define glVertex3i epoxy_glVertex3i
#define glVertex3iv epoxy_glVertex3iv
#define glVertex3s epoxy_glVertex3s
#define glVertex3sv epoxy_glVertex3sv
#define glVertex4d epoxy_glVertex4d
#define glVertex4dv epoxy_glVertex4dv
#define glVertex4f epoxy_glVertex4f
#define glVertex4fv epoxy_glVertex4fv
#define glVertex4i epoxy_glVertex4i
#define glVertex4iv epoxy_glVertex4iv
#define glVertex4s epoxy_glVertex4s
#define glVertex4sv epoxy_glVertex4sv
#define glVertexArrayAttribBinding epoxy_glVertexArrayAttribBinding
#define glVertexArrayAttribFormat epoxy_glVertexArrayAttribFormat
#define glVertexArrayAttribIFormat epoxy_glVertexArrayAttribIFormat
#define glVertexArrayAttribLFormat epoxy_glVertexArrayAttribLFormat
#define glVertexArrayBindingDivisor epoxy_glVertexArrayBindingDivisor
#define glVertexArrayElementBuffer epoxy_glVertexArrayElementBuffer
#define glVertexArrayVertexBuffer epoxy_glVertexArrayVertexBuffer
#define glVertexArrayVertexBuffers epoxy_glVertexArrayVertexBuffers
#define glVertexAttrib1d epoxy_glVertexAttrib1d
#define glVertexAttrib1dv epoxy_glVertexAttrib1dv
#define glVertexAttrib1f epoxy_glVertexAttrib1f
#define glVertexAttrib1fv epoxy_glVertexAttrib1fv
#define glVertexAttrib1s epoxy_glVertexAttrib1s
#define glVertexAttrib1sv epoxy_glVertexAttrib1sv
#define glVertexAttrib2d epoxy_glVertexAttrib2d
#define glVertexAttrib2dv epoxy_glVertexAttrib2dv
#define glVertexAttrib2f epoxy_glVertexAttrib2f
#define glVertexAttrib2fv epoxy_glVertexAttrib2fv
#define glVertexAttrib2s epoxy_glVertexAttrib2s
#define glVertexAttrib2sv epoxy_glVertexAttrib2sv
#define glVertexAttrib3d epoxy_glVertexAttrib3d
#define glVertexAttrib3dv epoxy_glVertexAttrib3dv
#define glVertexAttrib3f epoxy_glVertexAttrib3f
#define glVertexAttrib3fv epoxy_glVertexAttrib3fv
#define glVertexAttrib3s epoxy_glVertexAttrib3s
#define glVertexAttrib3sv epoxy_glVertexAttrib3sv
#define glVertexAttrib4Nbv epoxy_glVertexAttrib4Nbv
#define glVertexAttrib4Niv epoxy_glVertexAttrib4Niv
#define glVertexAttrib4Nsv epoxy_glVertexAttrib4Nsv
#define glVertexAttrib4Nub epoxy_glVertexAttrib4Nub
#define glVertexAttrib4Nubv epoxy_glVertexAttrib4Nubv
#define glVertexAttrib4Nuiv epoxy_glVertexAttrib4Nuiv
#define glVertexAttrib4Nusv epoxy_glVertexAttrib4Nusv
#define glVertexAttrib4bv epoxy_glVertexAttrib4bv
#define glVertexAttrib4d epoxy_glVertexAttrib4d
#define glVertexAttrib4dv epoxy_glVertexAttrib4dv
#define glVertexAttrib4f epoxy_glVertexAttrib4f
#define glVertexAttrib4fv epoxy_glVertexAttrib4fv
#define glVertexAttrib4iv epoxy_glVertexAttrib4iv
#define glVertexAttrib4s epoxy_glVertexAttrib4s
#define glVertexAttrib4sv epoxy_glVertexAttrib4sv
#define glVertexAttrib4ubv epoxy_glVertexAttrib4ubv
#define glVertexAttrib4uiv epoxy_glVertexAttrib4uiv
#define glVertexAttrib4usv epoxy_glVertexAttrib4usv
#define glVertexAttribBinding epoxy_glVertexAttribBinding
#define glVertexAttribDivisor epoxy_glVertexAttribDivisor
#define glVertexAttribFormat epoxy_glVertexAttribFormat
#define glVertexAttribI1i epoxy_glVertexAttribI1i
#define glVertexAttribI1iv epoxy_glVertexAttribI1iv
#define glVertexAttribI1ui epoxy_glVertexAttribI1ui
#define glVertexAttribI1uiv epoxy_glVertexAttribI1uiv
#define glVertexAttribI2i epoxy_glVertexAttribI2i
#define glVertexAttribI2iv epoxy_glVertexAttribI2iv
#define glVertexAttribI2ui epoxy_glVertexAttribI2ui
#define glVertexAttribI2uiv epoxy_glVertexAttribI2uiv
#define glVertexAttribI3i epoxy_glVertexAttribI3i
#define glVertexAttribI3iv epoxy_glVertexAttribI3iv
#define glVertexAttribI3ui epoxy_glVertexAttribI3ui
#define glVertexAttribI3uiv epoxy_glVertexAttribI3uiv
#define glVertexAttribI4bv epoxy_glVertexAttribI4bv
#define glVertexAttribI4i epoxy_glVertexAttribI4i
#define glVertexAttribI4iv epoxy_glVertexAttribI4iv
#define glVertexAttribI4sv epoxy_glVertexAttribI4sv
#define glVertexAttribI4ubv epoxy_glVertexAttribI4ubv
#define glVertexAttribI4ui epoxy_glVertexAttribI4ui
#define glVertexAttribI4uiv epoxy_glVertexAttribI4uiv
#define glVertexAttribI4usv epoxy_glVertexAttribI4usv
#define glVertexAttribIFormat epoxy_glVertexAttribIFormat
#define glVertexAttribIPointer epoxy_glVertexAttribIPointer
#define glVertexAttribL1d epoxy_glVertexAttribL1d
#define glVertexAttribL1dv epoxy_glVertexAttribL1dv
#define glVertexAttribL2d epoxy_glVertexAttribL2d
#define glVertexAttribL2dv epoxy_glVertexAttribL2dv
#define glVertexAttribL3d epoxy_glVertexAttribL3d
#define glVertexAttribL3dv epoxy_glVertexAttribL3dv
#define glVertexAttribL4d epoxy_glVertexAttribL4d
#define glVertexAttribL4dv epoxy_glVertexAttribL4dv
#define glVertexAttribLFormat epoxy_glVertexAttribLFormat
#define glVertexAttribLPointer epoxy_glVertexAttribLPointer
#define glVertexAttribP1ui epoxy_glVertexAttribP1ui
#define glVertexAttribP1uiv epoxy_glVertexAttribP1uiv
#define glVertexAttribP2ui epoxy_glVertexAttribP2ui
#define glVertexAttribP2uiv epoxy_glVertexAttribP2uiv
#define glVertexAttribP3ui epoxy_glVertexAttribP3ui
#define glVertexAttribP3uiv epoxy_glVertexAttribP3uiv
#define glVertexAttribP4ui epoxy_glVertexAttribP4ui
#define glVertexAttribP4uiv epoxy_glVertexAttribP4uiv
#define glVertexAttribPointer epoxy_glVertexAttribPointer
#define glVertexBindingDivisor epoxy_glVertexBindingDivisor
#define glVertexP2ui epoxy_glVertexP2ui
#define glVertexP2uiv epoxy_glVertexP2uiv
#define glVertexP3ui epoxy_glVertexP3ui
#define glVertexP3uiv epoxy_glVertexP3uiv
#define glVertexP4ui epoxy_glVertexP4ui
#define glVertexP4uiv epoxy_glVertexP4uiv
#define glVertexPointer epoxy_glVertexPointer
#define glViewport epoxy_glViewport
#define glViewportArrayv epoxy_glViewportArrayv
#define glViewportIndexedf epoxy_glViewportIndexedf
#define glViewportIndexedfv epoxy_glViewportIndexedfv
#define glWaitSync epoxy_glWaitSync
#define glWindowPos2d epoxy_glWindowPos2d
#define glWindowPos2dv epoxy_glWindowPos2dv
#define glWindowPos2f epoxy_glWindowPos2f
#define glWindowPos2fv epoxy_glWindowPos2fv
#define glWindowPos2i epoxy_glWindowPos2i
#define glWindowPos2iv epoxy_glWindowPos2iv
#define glWindowPos2s epoxy_glWindowPos2s
#define glWindowPos2sv epoxy_glWindowPos2sv
#define glWindowPos3d epoxy_glWindowPos3d
#define glWindowPos3dv epoxy_glWindowPos3dv
#define glWindowPos3f epoxy_glWindowPos3f
#define glWindowPos3fv epoxy_glWindowPos3fv
#define glWindowPos3i epoxy_glWindowPos3i
#define glWindowPos3iv epoxy_glWindowPos3iv
#define glWindowPos3s epoxy_glWindowPos3s
#define glWindowPos3sv epoxy_glWindowPos3sv
