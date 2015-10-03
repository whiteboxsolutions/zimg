#pragma once

#ifndef ZIMG_UNIT_TEST_GRAPH_FILTER_VALIDATOR_H_
#define ZIMG_UNIT_TEST_GRAPH_FILTER_VALIDATOR_H_

namespace zimg {;

enum class PixelType;
struct PixelFormat;

namespace graph {;

class IZimgFilter;

} // namespace graph
} // namespace zimg


void validate_filter(const zimg::graph::IZimgFilter *filter, unsigned src_width, unsigned src_height, zimg::PixelType src_type, const char * const sha1_str[3] = nullptr);

void validate_filter(const zimg::graph::IZimgFilter *filter, unsigned src_width, unsigned src_height, const zimg::PixelFormat &src_format, const char * const sha1_str[3] = nullptr);

void validate_filter_reference(const zimg::graph::IZimgFilter *ref_filter, const zimg::graph::IZimgFilter *test_filter,
                               unsigned src_width, unsigned src_height, zimg::PixelType src_type, double snr_thresh);

void validate_filter_reference(const zimg::graph::IZimgFilter *ref_filter, const zimg::graph::IZimgFilter *test_filter,
                               unsigned src_width, unsigned src_height, const zimg::PixelFormat &src_format, double snr_thresh);

#endif // ZIMG_UNIT_TEST_GRAPH_FILTER_VALIDATOR_H_