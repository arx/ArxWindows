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
#include "epoxy/gl.h"
struct _GPU_DEVICE {
    DWORD  cb;
    CHAR   DeviceName[32];
    CHAR   DeviceString[128];
    DWORD  Flags;
    RECT   rcVirtualScreen;
};
DECLARE_HANDLE(HPBUFFERARB);
DECLARE_HANDLE(HPBUFFEREXT);
DECLARE_HANDLE(HVIDEOOUTPUTDEVICENV);
DECLARE_HANDLE(HPVIDEODEV);
DECLARE_HANDLE(HPGPUNV);
DECLARE_HANDLE(HGPUNV);
DECLARE_HANDLE(HVIDEOINPUTDEVICENV);
typedef struct _GPU_DEVICE GPU_DEVICE;
typedef struct _GPU_DEVICE *PGPU_DEVICE;

#define WGL_VERSION_1_0 1

#define WGL_3DFX_multisample 1
#define WGL_3DL_stereo_control 1
#define WGL_AMD_gpu_association 1
#define WGL_ARB_buffer_region 1
#define WGL_ARB_context_flush_control 1
#define WGL_ARB_create_context 1
#define WGL_ARB_create_context_no_error 1
#define WGL_ARB_create_context_profile 1
#define WGL_ARB_create_context_robustness 1
#define WGL_ARB_extensions_string 1
#define WGL_ARB_framebuffer_sRGB 1
#define WGL_ARB_make_current_read 1
#define WGL_ARB_multisample 1
#define WGL_ARB_pbuffer 1
#define WGL_ARB_pixel_format 1
#define WGL_ARB_pixel_format_float 1
#define WGL_ARB_render_texture 1
#define WGL_ARB_robustness_application_isolation 1
#define WGL_ARB_robustness_share_group_isolation 1
#define WGL_ATI_pixel_format_float 1
#define WGL_EXT_colorspace 1
#define WGL_EXT_create_context_es2_profile 1
#define WGL_EXT_create_context_es_profile 1
#define WGL_EXT_depth_float 1
#define WGL_EXT_display_color_table 1
#define WGL_EXT_extensions_string 1
#define WGL_EXT_framebuffer_sRGB 1
#define WGL_EXT_make_current_read 1
#define WGL_EXT_multisample 1
#define WGL_EXT_pbuffer 1
#define WGL_EXT_pixel_format 1
#define WGL_EXT_pixel_format_packed_float 1
#define WGL_EXT_swap_control 1
#define WGL_EXT_swap_control_tear 1
#define WGL_I3D_digital_video_control 1
#define WGL_I3D_gamma 1
#define WGL_I3D_genlock 1
#define WGL_I3D_image_buffer 1
#define WGL_I3D_swap_frame_lock 1
#define WGL_I3D_swap_frame_usage 1
#define WGL_NV_DX_interop 1
#define WGL_NV_DX_interop2 1
#define WGL_NV_copy_image 1
#define WGL_NV_delay_before_swap 1
#define WGL_NV_float_buffer 1
#define WGL_NV_gpu_affinity 1
#define WGL_NV_multisample_coverage 1
#define WGL_NV_present_video 1
#define WGL_NV_render_depth_texture 1
#define WGL_NV_render_texture_rectangle 1
#define WGL_NV_swap_group 1
#define WGL_NV_vertex_array_range 1
#define WGL_NV_video_capture 1
#define WGL_NV_video_output 1
#define WGL_OML_sync_control 1

#define WGL_CONTEXT_RELEASE_BEHAVIOR_NONE_ARB            0
#define WGL_FONT_LINES                                   0
#define WGL_ACCESS_READ_ONLY_NV                          0x00000000
#define WGL_ACCESS_READ_WRITE_NV                         0x00000001
#define WGL_CONTEXT_CORE_PROFILE_BIT_ARB                 0x00000001
#define WGL_CONTEXT_DEBUG_BIT_ARB                        0x00000001
#define WGL_FRONT_COLOR_BUFFER_BIT_ARB                   0x00000001
#define WGL_IMAGE_BUFFER_MIN_ACCESS_I3D                  0x00000001
#define WGL_ACCESS_WRITE_DISCARD_NV                      0x00000002
#define WGL_BACK_COLOR_BUFFER_BIT_ARB                    0x00000002
#define WGL_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB        0x00000002
#define WGL_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB           0x00000002
#define WGL_IMAGE_BUFFER_LOCK_I3D                        0x00000002
#define WGL_SWAP_OVERLAY1                                0x00000002
#define WGL_CONTEXT_ES2_PROFILE_BIT_EXT                  0x00000004
#define WGL_CONTEXT_ES_PROFILE_BIT_EXT                   0x00000004
#define WGL_CONTEXT_ROBUST_ACCESS_BIT_ARB                0x00000004
#define WGL_DEPTH_BUFFER_BIT_ARB                         0x00000004
#define WGL_SWAP_OVERLAY2                                0x00000004
#define WGL_CONTEXT_RESET_ISOLATION_BIT_ARB              0x00000008
#define WGL_STENCIL_BUFFER_BIT_ARB                       0x00000008
#define WGL_SWAP_OVERLAY3                                0x00000008
#define WGL_SWAP_OVERLAY4                                0x00000010
#define WGL_SWAP_OVERLAY5                                0x00000020
#define WGL_SWAP_OVERLAY6                                0x00000040
#define WGL_SWAP_OVERLAY7                                0x00000080
#define WGL_SWAP_OVERLAY8                                0x00000100
#define WGL_SWAP_OVERLAY9                                0x00000200
#define WGL_SWAP_OVERLAY10                               0x00000400
#define WGL_SWAP_OVERLAY11                               0x00000800
#define WGL_SWAP_OVERLAY12                               0x00001000
#define WGL_SWAP_OVERLAY13                               0x00002000
#define WGL_SWAP_OVERLAY14                               0x00004000
#define WGL_SWAP_OVERLAY15                               0x00008000
#define WGL_SWAP_UNDERLAY1                               0x00010000
#define WGL_SWAP_UNDERLAY2                               0x00020000
#define WGL_SWAP_UNDERLAY3                               0x00040000
#define WGL_SWAP_UNDERLAY4                               0x00080000
#define WGL_SWAP_UNDERLAY5                               0x00100000
#define WGL_SWAP_UNDERLAY6                               0x00200000
#define WGL_SWAP_UNDERLAY7                               0x00400000
#define WGL_SWAP_UNDERLAY8                               0x00800000
#define WGL_SWAP_UNDERLAY9                               0x01000000
#define WGL_SWAP_UNDERLAY10                              0x02000000
#define WGL_SWAP_UNDERLAY11                              0x04000000
#define WGL_SWAP_UNDERLAY12                              0x08000000
#define WGL_SWAP_UNDERLAY13                              0x10000000
#define WGL_GPU_VENDOR_AMD                               0x1F00
#define WGL_GPU_RENDERER_STRING_AMD                      0x1F01
#define WGL_GPU_OPENGL_VERSION_STRING_AMD                0x1F02
#define WGL_NUMBER_PIXEL_FORMATS_ARB                     0x2000
#define WGL_NUMBER_PIXEL_FORMATS_EXT                     0x2000
#define WGL_SWAP_UNDERLAY14                              0x20000000
#define WGL_DRAW_TO_WINDOW_ARB                           0x2001
#define WGL_DRAW_TO_WINDOW_EXT                           0x2001
#define WGL_DRAW_TO_BITMAP_ARB                           0x2002
#define WGL_DRAW_TO_BITMAP_EXT                           0x2002
#define WGL_ACCELERATION_ARB                             0x2003
#define WGL_ACCELERATION_EXT                             0x2003
#define WGL_NEED_PALETTE_ARB                             0x2004
#define WGL_NEED_PALETTE_EXT                             0x2004
#define WGL_NEED_SYSTEM_PALETTE_ARB                      0x2005
#define WGL_NEED_SYSTEM_PALETTE_EXT                      0x2005
#define WGL_SWAP_LAYER_BUFFERS_ARB                       0x2006
#define WGL_SWAP_LAYER_BUFFERS_EXT                       0x2006
#define WGL_SWAP_METHOD_ARB                              0x2007
#define WGL_SWAP_METHOD_EXT                              0x2007
#define WGL_NUMBER_OVERLAYS_ARB                          0x2008
#define WGL_NUMBER_OVERLAYS_EXT                          0x2008
#define WGL_NUMBER_UNDERLAYS_ARB                         0x2009
#define WGL_NUMBER_UNDERLAYS_EXT                         0x2009
#define WGL_TRANSPARENT_ARB                              0x200A
#define WGL_TRANSPARENT_EXT                              0x200A
#define WGL_TRANSPARENT_VALUE_EXT                        0x200B
#define WGL_SHARE_DEPTH_ARB                              0x200C
#define WGL_SHARE_DEPTH_EXT                              0x200C
#define WGL_SHARE_STENCIL_ARB                            0x200D
#define WGL_SHARE_STENCIL_EXT                            0x200D
#define WGL_SHARE_ACCUM_ARB                              0x200E
#define WGL_SHARE_ACCUM_EXT                              0x200E
#define WGL_SUPPORT_GDI_ARB                              0x200F
#define WGL_SUPPORT_GDI_EXT                              0x200F
#define WGL_SUPPORT_OPENGL_ARB                           0x2010
#define WGL_SUPPORT_OPENGL_EXT                           0x2010
#define WGL_DOUBLE_BUFFER_ARB                            0x2011
#define WGL_DOUBLE_BUFFER_EXT                            0x2011
#define WGL_STEREO_ARB                                   0x2012
#define WGL_STEREO_EXT                                   0x2012
#define WGL_PIXEL_TYPE_ARB                               0x2013
#define WGL_PIXEL_TYPE_EXT                               0x2013
#define WGL_COLOR_BITS_ARB                               0x2014
#define WGL_COLOR_BITS_EXT                               0x2014
#define WGL_RED_BITS_ARB                                 0x2015
#define WGL_RED_BITS_EXT                                 0x2015
#define WGL_RED_SHIFT_ARB                                0x2016
#define WGL_RED_SHIFT_EXT                                0x2016
#define WGL_GREEN_BITS_ARB                               0x2017
#define WGL_GREEN_BITS_EXT                               0x2017
#define WGL_GREEN_SHIFT_ARB                              0x2018
#define WGL_GREEN_SHIFT_EXT                              0x2018
#define WGL_BLUE_BITS_ARB                                0x2019
#define WGL_BLUE_BITS_EXT                                0x2019
#define WGL_BLUE_SHIFT_ARB                               0x201A
#define WGL_BLUE_SHIFT_EXT                               0x201A
#define WGL_ALPHA_BITS_ARB                               0x201B
#define WGL_ALPHA_BITS_EXT                               0x201B
#define WGL_ALPHA_SHIFT_ARB                              0x201C
#define WGL_ALPHA_SHIFT_EXT                              0x201C
#define WGL_ACCUM_BITS_ARB                               0x201D
#define WGL_ACCUM_BITS_EXT                               0x201D
#define WGL_ACCUM_RED_BITS_ARB                           0x201E
#define WGL_ACCUM_RED_BITS_EXT                           0x201E
#define WGL_ACCUM_GREEN_BITS_ARB                         0x201F
#define WGL_ACCUM_GREEN_BITS_EXT                         0x201F
#define WGL_ACCUM_BLUE_BITS_ARB                          0x2020
#define WGL_ACCUM_BLUE_BITS_EXT                          0x2020
#define WGL_ACCUM_ALPHA_BITS_ARB                         0x2021
#define WGL_ACCUM_ALPHA_BITS_EXT                         0x2021
#define WGL_DEPTH_BITS_ARB                               0x2022
#define WGL_DEPTH_BITS_EXT                               0x2022
#define WGL_STENCIL_BITS_ARB                             0x2023
#define WGL_STENCIL_BITS_EXT                             0x2023
#define WGL_AUX_BUFFERS_ARB                              0x2024
#define WGL_AUX_BUFFERS_EXT                              0x2024
#define WGL_NO_ACCELERATION_ARB                          0x2025
#define WGL_NO_ACCELERATION_EXT                          0x2025
#define WGL_GENERIC_ACCELERATION_ARB                     0x2026
#define WGL_GENERIC_ACCELERATION_EXT                     0x2026
#define WGL_FULL_ACCELERATION_ARB                        0x2027
#define WGL_FULL_ACCELERATION_EXT                        0x2027
#define WGL_SWAP_EXCHANGE_ARB                            0x2028
#define WGL_SWAP_EXCHANGE_EXT                            0x2028
#define WGL_SWAP_COPY_ARB                                0x2029
#define WGL_SWAP_COPY_EXT                                0x2029
#define WGL_SWAP_UNDEFINED_ARB                           0x202A
#define WGL_SWAP_UNDEFINED_EXT                           0x202A
#define WGL_TYPE_RGBA_ARB                                0x202B
#define WGL_TYPE_RGBA_EXT                                0x202B
#define WGL_TYPE_COLORINDEX_ARB                          0x202C
#define WGL_TYPE_COLORINDEX_EXT                          0x202C
#define WGL_DRAW_TO_PBUFFER_ARB                          0x202D
#define WGL_DRAW_TO_PBUFFER_EXT                          0x202D
#define WGL_MAX_PBUFFER_PIXELS_ARB                       0x202E
#define WGL_MAX_PBUFFER_PIXELS_EXT                       0x202E
#define WGL_MAX_PBUFFER_WIDTH_ARB                        0x202F
#define WGL_MAX_PBUFFER_WIDTH_EXT                        0x202F
#define WGL_MAX_PBUFFER_HEIGHT_ARB                       0x2030
#define WGL_MAX_PBUFFER_HEIGHT_EXT                       0x2030
#define WGL_OPTIMAL_PBUFFER_WIDTH_EXT                    0x2031
#define WGL_OPTIMAL_PBUFFER_HEIGHT_EXT                   0x2032
#define WGL_PBUFFER_LARGEST_ARB                          0x2033
#define WGL_PBUFFER_LARGEST_EXT                          0x2033
#define WGL_PBUFFER_WIDTH_ARB                            0x2034
#define WGL_PBUFFER_WIDTH_EXT                            0x2034
#define WGL_PBUFFER_HEIGHT_ARB                           0x2035
#define WGL_PBUFFER_HEIGHT_EXT                           0x2035
#define WGL_PBUFFER_LOST_ARB                             0x2036
#define WGL_TRANSPARENT_RED_VALUE_ARB                    0x2037
#define WGL_TRANSPARENT_GREEN_VALUE_ARB                  0x2038
#define WGL_TRANSPARENT_BLUE_VALUE_ARB                   0x2039
#define WGL_TRANSPARENT_ALPHA_VALUE_ARB                  0x203A
#define WGL_TRANSPARENT_INDEX_VALUE_ARB                  0x203B
#define WGL_DEPTH_FLOAT_EXT                              0x2040
#define WGL_SAMPLE_BUFFERS_ARB                           0x2041
#define WGL_SAMPLE_BUFFERS_EXT                           0x2041
#define WGL_COVERAGE_SAMPLES_NV                          0x2042
#define WGL_SAMPLES_ARB                                  0x2042
#define WGL_SAMPLES_EXT                                  0x2042
#define ERROR_INVALID_PIXEL_TYPE_ARB                     0x2043
#define ERROR_INVALID_PIXEL_TYPE_EXT                     0x2043
#define WGL_GENLOCK_SOURCE_MULTIVIEW_I3D                 0x2044
#define WGL_GENLOCK_SOURCE_EXTERNAL_SYNC_I3D             0x2045
#define WGL_GENLOCK_SOURCE_EXTERNAL_FIELD_I3D            0x2046
#define WGL_GENLOCK_SOURCE_EXTERNAL_TTL_I3D              0x2047
#define WGL_GENLOCK_SOURCE_DIGITAL_SYNC_I3D              0x2048
#define WGL_GENLOCK_SOURCE_DIGITAL_FIELD_I3D             0x2049
#define WGL_GENLOCK_SOURCE_EDGE_FALLING_I3D              0x204A
#define WGL_GENLOCK_SOURCE_EDGE_RISING_I3D               0x204B
#define WGL_GENLOCK_SOURCE_EDGE_BOTH_I3D                 0x204C
#define WGL_GAMMA_TABLE_SIZE_I3D                         0x204E
#define WGL_GAMMA_EXCLUDE_DESKTOP_I3D                    0x204F
#define WGL_DIGITAL_VIDEO_CURSOR_ALPHA_FRAMEBUFFER_I3D   0x2050
#define WGL_DIGITAL_VIDEO_CURSOR_ALPHA_VALUE_I3D         0x2051
#define WGL_DIGITAL_VIDEO_CURSOR_INCLUDED_I3D            0x2052
#define WGL_DIGITAL_VIDEO_GAMMA_CORRECTED_I3D            0x2053
#define ERROR_INCOMPATIBLE_DEVICE_CONTEXTS_ARB           0x2054
#define WGL_STEREO_EMITTER_ENABLE_3DL                    0x2055
#define WGL_STEREO_EMITTER_DISABLE_3DL                   0x2056
#define WGL_STEREO_POLARITY_NORMAL_3DL                   0x2057
#define WGL_STEREO_POLARITY_INVERT_3DL                   0x2058
#define WGL_SAMPLE_BUFFERS_3DFX                          0x2060
#define WGL_SAMPLES_3DFX                                 0x2061
#define WGL_BIND_TO_TEXTURE_RGB_ARB                      0x2070
#define WGL_BIND_TO_TEXTURE_RGBA_ARB                     0x2071
#define WGL_TEXTURE_FORMAT_ARB                           0x2072
#define WGL_TEXTURE_TARGET_ARB                           0x2073
#define WGL_MIPMAP_TEXTURE_ARB                           0x2074
#define WGL_TEXTURE_RGB_ARB                              0x2075
#define WGL_TEXTURE_RGBA_ARB                             0x2076
#define WGL_NO_TEXTURE_ARB                               0x2077
#define WGL_TEXTURE_CUBE_MAP_ARB                         0x2078
#define WGL_TEXTURE_1D_ARB                               0x2079
#define WGL_TEXTURE_2D_ARB                               0x207A
#define WGL_MIPMAP_LEVEL_ARB                             0x207B
#define WGL_CUBE_MAP_FACE_ARB                            0x207C
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB              0x207D
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB              0x207E
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB              0x207F
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB              0x2080
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB              0x2081
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB              0x2082
#define WGL_FRONT_LEFT_ARB                               0x2083
#define WGL_FRONT_RIGHT_ARB                              0x2084
#define WGL_BACK_LEFT_ARB                                0x2085
#define WGL_BACK_RIGHT_ARB                               0x2086
#define WGL_AUX0_ARB                                     0x2087
#define WGL_AUX1_ARB                                     0x2088
#define WGL_AUX2_ARB                                     0x2089
#define WGL_AUX3_ARB                                     0x208A
#define WGL_AUX4_ARB                                     0x208B
#define WGL_AUX5_ARB                                     0x208C
#define WGL_AUX6_ARB                                     0x208D
#define WGL_AUX7_ARB                                     0x208E
#define WGL_AUX8_ARB                                     0x208F
#define WGL_AUX9_ARB                                     0x2090
#define WGL_CONTEXT_MAJOR_VERSION_ARB                    0x2091
#define WGL_CONTEXT_MINOR_VERSION_ARB                    0x2092
#define WGL_CONTEXT_LAYER_PLANE_ARB                      0x2093
#define WGL_CONTEXT_FLAGS_ARB                            0x2094
#define ERROR_INVALID_VERSION_ARB                        0x2095
#define ERROR_INVALID_PROFILE_ARB                        0x2096
#define WGL_CONTEXT_RELEASE_BEHAVIOR_ARB                 0x2097
#define WGL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_ARB           0x2098
#define WGL_BIND_TO_TEXTURE_RECTANGLE_RGB_NV             0x20A0
#define WGL_BIND_TO_TEXTURE_RECTANGLE_RGBA_NV            0x20A1
#define WGL_TEXTURE_RECTANGLE_NV                         0x20A2
#define WGL_BIND_TO_TEXTURE_DEPTH_NV                     0x20A3
#define WGL_BIND_TO_TEXTURE_RECTANGLE_DEPTH_NV           0x20A4
#define WGL_DEPTH_TEXTURE_FORMAT_NV                      0x20A5
#define WGL_TEXTURE_DEPTH_COMPONENT_NV                   0x20A6
#define WGL_DEPTH_COMPONENT_NV                           0x20A7
#define WGL_TYPE_RGBA_UNSIGNED_FLOAT_EXT                 0x20A8
#define WGL_FRAMEBUFFER_SRGB_CAPABLE_ARB                 0x20A9
#define WGL_FRAMEBUFFER_SRGB_CAPABLE_EXT                 0x20A9
#define WGL_FLOAT_COMPONENTS_NV                          0x20B0
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_R_NV         0x20B1
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RG_NV        0x20B2
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RGB_NV       0x20B3
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RGBA_NV      0x20B4
#define WGL_TEXTURE_FLOAT_R_NV                           0x20B5
#define WGL_TEXTURE_FLOAT_RG_NV                          0x20B6
#define WGL_TEXTURE_FLOAT_RGB_NV                         0x20B7
#define WGL_TEXTURE_FLOAT_RGBA_NV                        0x20B8
#define WGL_COLOR_SAMPLES_NV                             0x20B9
#define WGL_BIND_TO_VIDEO_RGB_NV                         0x20C0
#define WGL_BIND_TO_VIDEO_RGBA_NV                        0x20C1
#define WGL_BIND_TO_VIDEO_RGB_AND_DEPTH_NV               0x20C2
#define WGL_VIDEO_OUT_COLOR_NV                           0x20C3
#define WGL_VIDEO_OUT_ALPHA_NV                           0x20C4
#define WGL_VIDEO_OUT_DEPTH_NV                           0x20C5
#define WGL_VIDEO_OUT_COLOR_AND_ALPHA_NV                 0x20C6
#define WGL_VIDEO_OUT_COLOR_AND_DEPTH_NV                 0x20C7
#define WGL_VIDEO_OUT_FRAME                              0x20C8
#define WGL_VIDEO_OUT_FIELD_1                            0x20C9
#define WGL_VIDEO_OUT_FIELD_2                            0x20CA
#define WGL_VIDEO_OUT_STACKED_FIELDS_1_2                 0x20CB
#define WGL_VIDEO_OUT_STACKED_FIELDS_2_1                 0x20CC
#define WGL_UNIQUE_ID_NV                                 0x20CE
#define WGL_NUM_VIDEO_CAPTURE_SLOTS_NV                   0x20CF
#define ERROR_INCOMPATIBLE_AFFINITY_MASKS_NV             0x20D0
#define ERROR_MISSING_AFFINITY_MASK_NV                   0x20D1
#define WGL_NUM_VIDEO_SLOTS_NV                           0x20F0
#define WGL_TYPE_RGBA_FLOAT_ARB                          0x21A0
#define WGL_TYPE_RGBA_FLOAT_ATI                          0x21A0
#define WGL_GPU_FASTEST_TARGET_GPUS_AMD                  0x21A2
#define WGL_GPU_RAM_AMD                                  0x21A3
#define WGL_GPU_CLOCK_AMD                                0x21A4
#define WGL_GPU_NUM_PIPES_AMD                            0x21A5
#define WGL_GPU_NUM_SIMD_AMD                             0x21A6
#define WGL_GPU_NUM_RB_AMD                               0x21A7
#define WGL_GPU_NUM_SPI_AMD                              0x21A8
#define WGL_COLORSPACE_EXT                               0x3087
#define WGL_COLORSPACE_SRGB_EXT                          0x3089
#define WGL_COLORSPACE_LINEAR_EXT                        0x308A
#define WGL_CONTEXT_OPENGL_NO_ERROR_ARB                  0x31B3
#define WGL_SWAP_UNDERLAY15                              0x40000000
#define WGL_LOSE_CONTEXT_ON_RESET_ARB                    0x8252
#define WGL_CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB      0x8256
#define WGL_NO_RESET_NOTIFICATION_ARB                    0x8261
#define WGL_CONTEXT_PROFILE_MASK_ARB                     0x9126
#define WGL_FONT_POLYGONS                                1

typedef VOID (GLAPIENTRY *PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC)(HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef BOOL (GLAPIENTRY *PFNWGLCOPYCONTEXTPROC)(HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask);
typedef HGLRC (GLAPIENTRY *PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC)(UINT id);
typedef HGLRC (GLAPIENTRY *PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC)(UINT id, HGLRC hShareContext, const int * attribList);
typedef HGLRC (GLAPIENTRY *PFNWGLCREATECONTEXTPROC)(HDC hDc);
typedef HGLRC (GLAPIENTRY *PFNWGLCREATELAYERCONTEXTPROC)(HDC hDc, int level);
typedef BOOL (GLAPIENTRY *PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC)(HGLRC hglrc);
typedef BOOL (GLAPIENTRY *PFNWGLDELETECONTEXTPROC)(HGLRC oldContext);
typedef BOOL (GLAPIENTRY *PFNWGLDESCRIBELAYERPLANEPROC)(HDC hDc, int pixelFormat, int layerPlane, UINT nBytes, const LAYERPLANEDESCRIPTOR * plpd);
typedef UINT (GLAPIENTRY *PFNWGLGETCONTEXTGPUIDAMDPROC)(HGLRC hglrc);
typedef HGLRC (GLAPIENTRY *PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC)(void);
typedef HGLRC (GLAPIENTRY *PFNWGLGETCURRENTCONTEXTPROC)(void);
typedef HDC (GLAPIENTRY *PFNWGLGETCURRENTDCPROC)(void);
typedef HDC (GLAPIENTRY *PFNWGLGETCURRENTREADDCARBPROC)(void);
typedef HDC (GLAPIENTRY *PFNWGLGETCURRENTREADDCEXTPROC)(void);
typedef const char * (GLAPIENTRY *PFNWGLGETEXTENSIONSSTRINGARBPROC)(HDC hdc);
typedef UINT (GLAPIENTRY *PFNWGLGETGPUIDSAMDPROC)(UINT maxCount, UINT * ids);
typedef INT (GLAPIENTRY *PFNWGLGETGPUINFOAMDPROC)(UINT id, int property, GLenum dataType, UINT size, void * data);
typedef int (GLAPIENTRY *PFNWGLGETLAYERPALETTEENTRIESPROC)(HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF * pcr);
typedef PROC (GLAPIENTRY *PFNWGLGETPROCADDRESSPROC)(LPCSTR lpszProc);
typedef BOOL (GLAPIENTRY *PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC)(HGLRC hglrc);
typedef BOOL (GLAPIENTRY *PFNWGLMAKECONTEXTCURRENTARBPROC)(HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
typedef BOOL (GLAPIENTRY *PFNWGLMAKECONTEXTCURRENTEXTPROC)(HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
typedef BOOL (GLAPIENTRY *PFNWGLMAKECURRENTPROC)(HDC hDc, HGLRC newContext);
typedef BOOL (GLAPIENTRY *PFNWGLREALIZELAYERPALETTEPROC)(HDC hdc, int iLayerPlane, BOOL bRealize);
typedef int (GLAPIENTRY *PFNWGLSETLAYERPALETTEENTRIESPROC)(HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF * pcr);
typedef BOOL (GLAPIENTRY *PFNWGLSHARELISTSPROC)(HGLRC hrcSrvShare, HGLRC hrcSrvSource);
typedef BOOL (GLAPIENTRY *PFNWGLSWAPLAYERBUFFERSPROC)(HDC hdc, UINT fuFlags);
typedef BOOL (GLAPIENTRY *PFNWGLUSEFONTBITMAPSAPROC)(HDC hDC, DWORD first, DWORD count, DWORD listBase);
typedef BOOL (GLAPIENTRY *PFNWGLUSEFONTBITMAPSWPROC)(HDC hDC, DWORD first, DWORD count, DWORD listBase);
typedef BOOL (GLAPIENTRY *PFNWGLUSEFONTOUTLINESPROC)(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
typedef BOOL (GLAPIENTRY *PFNWGLUSEFONTOUTLINESAPROC)(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
typedef BOOL (GLAPIENTRY *PFNWGLUSEFONTOUTLINESWPROC)(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
EPOXY_PUBLIC VOID (EPOXY_CALLSPEC *epoxy_wglBlitContextFramebufferAMD)(HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

EPOXY_PUBLIC BOOL (EPOXY_CALLSPEC *epoxy_wglCopyContext)(HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask);

EPOXY_PUBLIC HGLRC (EPOXY_CALLSPEC *epoxy_wglCreateAssociatedContextAMD)(UINT id);

EPOXY_PUBLIC HGLRC (EPOXY_CALLSPEC *epoxy_wglCreateAssociatedContextAttribsAMD)(UINT id, HGLRC hShareContext, const int * attribList);

EPOXY_PUBLIC HGLRC (EPOXY_CALLSPEC *epoxy_wglCreateContext)(HDC hDc);

EPOXY_PUBLIC HGLRC (EPOXY_CALLSPEC *epoxy_wglCreateLayerContext)(HDC hDc, int level);

EPOXY_PUBLIC BOOL (EPOXY_CALLSPEC *epoxy_wglDeleteAssociatedContextAMD)(HGLRC hglrc);

EPOXY_PUBLIC BOOL (EPOXY_CALLSPEC *epoxy_wglDeleteContext)(HGLRC oldContext);

EPOXY_PUBLIC BOOL (EPOXY_CALLSPEC *epoxy_wglDescribeLayerPlane)(HDC hDc, int pixelFormat, int layerPlane, UINT nBytes, const LAYERPLANEDESCRIPTOR * plpd);

EPOXY_PUBLIC UINT (EPOXY_CALLSPEC *epoxy_wglGetContextGPUIDAMD)(HGLRC hglrc);

EPOXY_PUBLIC HGLRC (EPOXY_CALLSPEC *epoxy_wglGetCurrentAssociatedContextAMD)(void);

EPOXY_PUBLIC HGLRC (EPOXY_CALLSPEC *epoxy_wglGetCurrentContext)(void);

EPOXY_PUBLIC HDC (EPOXY_CALLSPEC *epoxy_wglGetCurrentDC)(void);

EPOXY_PUBLIC HDC (EPOXY_CALLSPEC *epoxy_wglGetCurrentReadDCARB)(void);

EPOXY_PUBLIC HDC (EPOXY_CALLSPEC *epoxy_wglGetCurrentReadDCEXT)(void);

EPOXY_PUBLIC const char * (EPOXY_CALLSPEC *epoxy_wglGetExtensionsStringARB)(HDC hdc);

EPOXY_PUBLIC UINT (EPOXY_CALLSPEC *epoxy_wglGetGPUIDsAMD)(UINT maxCount, UINT * ids);

EPOXY_PUBLIC INT (EPOXY_CALLSPEC *epoxy_wglGetGPUInfoAMD)(UINT id, int property, GLenum dataType, UINT size, void * data);

EPOXY_PUBLIC int (EPOXY_CALLSPEC *epoxy_wglGetLayerPaletteEntries)(HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF * pcr);

EPOXY_PUBLIC PROC (EPOXY_CALLSPEC *epoxy_wglGetProcAddress)(LPCSTR lpszProc);

EPOXY_PUBLIC BOOL (EPOXY_CALLSPEC *epoxy_wglMakeAssociatedContextCurrentAMD)(HGLRC hglrc);

EPOXY_PUBLIC BOOL (EPOXY_CALLSPEC *epoxy_wglMakeContextCurrentARB)(HDC hDrawDC, HDC hReadDC, HGLRC hglrc);

EPOXY_PUBLIC BOOL (EPOXY_CALLSPEC *epoxy_wglMakeContextCurrentEXT)(HDC hDrawDC, HDC hReadDC, HGLRC hglrc);

EPOXY_PUBLIC BOOL (EPOXY_CALLSPEC *epoxy_wglMakeCurrent)(HDC hDc, HGLRC newContext);

EPOXY_PUBLIC BOOL (EPOXY_CALLSPEC *epoxy_wglRealizeLayerPalette)(HDC hdc, int iLayerPlane, BOOL bRealize);

EPOXY_PUBLIC int (EPOXY_CALLSPEC *epoxy_wglSetLayerPaletteEntries)(HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF * pcr);

EPOXY_PUBLIC BOOL (EPOXY_CALLSPEC *epoxy_wglShareLists)(HGLRC hrcSrvShare, HGLRC hrcSrvSource);

EPOXY_PUBLIC BOOL (EPOXY_CALLSPEC *epoxy_wglSwapLayerBuffers)(HDC hdc, UINT fuFlags);

EPOXY_PUBLIC BOOL (EPOXY_CALLSPEC *epoxy_wglUseFontBitmapsA)(HDC hDC, DWORD first, DWORD count, DWORD listBase);

EPOXY_PUBLIC BOOL (EPOXY_CALLSPEC *epoxy_wglUseFontBitmapsW)(HDC hDC, DWORD first, DWORD count, DWORD listBase);

EPOXY_PUBLIC BOOL (EPOXY_CALLSPEC *epoxy_wglUseFontOutlines)(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);

EPOXY_PUBLIC BOOL (EPOXY_CALLSPEC *epoxy_wglUseFontOutlinesA)(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);

EPOXY_PUBLIC BOOL (EPOXY_CALLSPEC *epoxy_wglUseFontOutlinesW)(HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);

#define wglBlitContextFramebufferAMD epoxy_wglBlitContextFramebufferAMD
#define wglCopyContext epoxy_wglCopyContext
#define wglCreateAssociatedContextAMD epoxy_wglCreateAssociatedContextAMD
#define wglCreateAssociatedContextAttribsAMD epoxy_wglCreateAssociatedContextAttribsAMD
#define wglCreateContext epoxy_wglCreateContext
#define wglCreateLayerContext epoxy_wglCreateLayerContext
#define wglDeleteAssociatedContextAMD epoxy_wglDeleteAssociatedContextAMD
#define wglDeleteContext epoxy_wglDeleteContext
#define wglDescribeLayerPlane epoxy_wglDescribeLayerPlane
#define wglGetContextGPUIDAMD epoxy_wglGetContextGPUIDAMD
#define wglGetCurrentAssociatedContextAMD epoxy_wglGetCurrentAssociatedContextAMD
#define wglGetCurrentContext epoxy_wglGetCurrentContext
#define wglGetCurrentDC epoxy_wglGetCurrentDC
#define wglGetCurrentReadDCARB epoxy_wglGetCurrentReadDCARB
#define wglGetCurrentReadDCEXT epoxy_wglGetCurrentReadDCEXT
#define wglGetExtensionsStringARB epoxy_wglGetExtensionsStringARB
#define wglGetGPUIDsAMD epoxy_wglGetGPUIDsAMD
#define wglGetGPUInfoAMD epoxy_wglGetGPUInfoAMD
#define wglGetLayerPaletteEntries epoxy_wglGetLayerPaletteEntries
#define wglGetProcAddress epoxy_wglGetProcAddress
#define wglMakeAssociatedContextCurrentAMD epoxy_wglMakeAssociatedContextCurrentAMD
#define wglMakeContextCurrentARB epoxy_wglMakeContextCurrentARB
#define wglMakeContextCurrentEXT epoxy_wglMakeContextCurrentEXT
#define wglMakeCurrent epoxy_wglMakeCurrent
#define wglRealizeLayerPalette epoxy_wglRealizeLayerPalette
#define wglSetLayerPaletteEntries epoxy_wglSetLayerPaletteEntries
#define wglShareLists epoxy_wglShareLists
#define wglSwapLayerBuffers epoxy_wglSwapLayerBuffers
#define wglUseFontBitmapsA epoxy_wglUseFontBitmapsA
#define wglUseFontBitmapsW epoxy_wglUseFontBitmapsW
#define wglUseFontOutlines epoxy_wglUseFontOutlines
#define wglUseFontOutlinesA epoxy_wglUseFontOutlinesA
#define wglUseFontOutlinesW epoxy_wglUseFontOutlinesW
