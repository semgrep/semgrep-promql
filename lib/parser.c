#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 179
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 103
#define ALIAS_COUNT 2
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  sym_float_literal = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_offset = 6,
  anon_sym_DASH = 7,
  anon_sym_AT = 8,
  anon_sym_start_LPAREN_RPAREN = 9,
  anon_sym_end_LPAREN_RPAREN = 10,
  aux_sym_at_token1 = 11,
  anon_sym_LBRACE = 12,
  anon_sym_COMMA = 13,
  anon_sym_RBRACE = 14,
  anon_sym_EQ = 15,
  anon_sym_BANG_EQ = 16,
  anon_sym_EQ_TILDE = 17,
  anon_sym_BANG_TILDE = 18,
  anon_sym_sum = 19,
  anon_sym_max = 20,
  anon_sym_min = 21,
  anon_sym_avg = 22,
  anon_sym_group = 23,
  anon_sym_stddev = 24,
  anon_sym_stdvar = 25,
  anon_sym_count = 26,
  anon_sym_count_values = 27,
  anon_sym_bottomk = 28,
  anon_sym_topk = 29,
  anon_sym_quantile = 30,
  anon_sym_by = 31,
  anon_sym_without = 32,
  anon_sym_CARET = 33,
  anon_sym_STAR = 34,
  anon_sym_SLASH = 35,
  anon_sym_PERCENT = 36,
  anon_sym_PLUS = 37,
  anon_sym_EQ_EQ = 38,
  anon_sym_GT = 39,
  anon_sym_GT_EQ = 40,
  anon_sym_LT = 41,
  anon_sym_LT_EQ = 42,
  anon_sym_bool = 43,
  anon_sym_and = 44,
  anon_sym_or = 45,
  anon_sym_unless = 46,
  anon_sym_atan2 = 47,
  anon_sym_on = 48,
  anon_sym_ignoring = 49,
  anon_sym_group_left = 50,
  anon_sym_group_right = 51,
  anon_sym_COLON = 52,
  sym_double_quoted_string = 53,
  sym_single_quoted_string = 54,
  aux_sym_duration_token1 = 55,
  anon_sym_ms = 56,
  anon_sym_s = 57,
  anon_sym_m = 58,
  anon_sym_h = 59,
  anon_sym_d = 60,
  anon_sym_w = 61,
  anon_sym_y = 62,
  sym_identifier = 63,
  sym_comment = 64,
  sym_semgrep_metavariable = 65,
  sym_query_ = 66,
  sym_query = 67,
  sym_query_expression = 68,
  sym_literal_expression = 69,
  sym_string_literal = 70,
  sym_timeseries_selector_expression = 71,
  sym_instant_vector_selector = 72,
  sym_range_vector_selector = 73,
  sym_range_selection = 74,
  sym_modifier = 75,
  sym_offset = 76,
  sym_at = 77,
  sym_series_matcher = 78,
  sym_label_selectors = 79,
  sym_label_matcher = 80,
  sym_metric_name = 81,
  sym_label_name = 82,
  sym_label_value = 83,
  sym_function_expression = 84,
  sym_function_call = 85,
  sym_function_name = 86,
  sym_function_args = 87,
  sym_operator_expression = 88,
  sym_aggregation_expression = 89,
  sym_aggregation_operator = 90,
  sym_aggregation_grouping = 91,
  sym_binary_expression = 92,
  sym_binary_grouping = 93,
  sym_subquery_expression = 94,
  sym_subquery = 95,
  sym_subquery_range_selection = 96,
  sym_quoted_string = 97,
  sym_duration = 98,
  aux_sym_label_selectors_repeat1 = 99,
  aux_sym_function_args_repeat1 = 100,
  aux_sym_aggregation_grouping_repeat1 = 101,
  aux_sym_duration_repeat1 = 102,
  alias_sym_pat_780550e = 103,
  alias_sym_pat_dcab316 = 104,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_float_literal] = "float_literal",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_offset] = "offset",
  [anon_sym_DASH] = "-",
  [anon_sym_AT] = "@",
  [anon_sym_start_LPAREN_RPAREN] = "start()",
  [anon_sym_end_LPAREN_RPAREN] = "end()",
  [aux_sym_at_token1] = "at_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ_TILDE] = "=~",
  [anon_sym_BANG_TILDE] = "!~",
  [anon_sym_sum] = "sum",
  [anon_sym_max] = "max",
  [anon_sym_min] = "min",
  [anon_sym_avg] = "avg",
  [anon_sym_group] = "group",
  [anon_sym_stddev] = "stddev",
  [anon_sym_stdvar] = "stdvar",
  [anon_sym_count] = "count",
  [anon_sym_count_values] = "count_values",
  [anon_sym_bottomk] = "bottomk",
  [anon_sym_topk] = "topk",
  [anon_sym_quantile] = "quantile",
  [anon_sym_by] = "by",
  [anon_sym_without] = "without",
  [anon_sym_CARET] = "^",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_bool] = "bool",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_unless] = "unless",
  [anon_sym_atan2] = "atan2",
  [anon_sym_on] = "on",
  [anon_sym_ignoring] = "ignoring",
  [anon_sym_group_left] = "group_left",
  [anon_sym_group_right] = "group_right",
  [anon_sym_COLON] = ":",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [aux_sym_duration_token1] = "duration_token1",
  [anon_sym_ms] = "ms",
  [anon_sym_s] = "s",
  [anon_sym_m] = "m",
  [anon_sym_h] = "h",
  [anon_sym_d] = "d",
  [anon_sym_w] = "w",
  [anon_sym_y] = "y",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_semgrep_metavariable] = "semgrep_metavariable",
  [sym_query_] = "query_",
  [sym_query] = "query",
  [sym_query_expression] = "query_expression",
  [sym_literal_expression] = "literal_expression",
  [sym_string_literal] = "string_literal",
  [sym_timeseries_selector_expression] = "timeseries_selector_expression",
  [sym_instant_vector_selector] = "instant_vector_selector",
  [sym_range_vector_selector] = "range_vector_selector",
  [sym_range_selection] = "range_selection",
  [sym_modifier] = "modifier",
  [sym_offset] = "offset",
  [sym_at] = "at",
  [sym_series_matcher] = "series_matcher",
  [sym_label_selectors] = "label_selectors",
  [sym_label_matcher] = "label_matcher",
  [sym_metric_name] = "metric_name",
  [sym_label_name] = "label_name",
  [sym_label_value] = "label_value",
  [sym_function_expression] = "function_expression",
  [sym_function_call] = "function_call",
  [sym_function_name] = "function_name",
  [sym_function_args] = "function_args",
  [sym_operator_expression] = "operator_expression",
  [sym_aggregation_expression] = "aggregation_expression",
  [sym_aggregation_operator] = "aggregation_operator",
  [sym_aggregation_grouping] = "aggregation_grouping",
  [sym_binary_expression] = "binary_expression",
  [sym_binary_grouping] = "binary_grouping",
  [sym_subquery_expression] = "subquery_expression",
  [sym_subquery] = "subquery",
  [sym_subquery_range_selection] = "subquery_range_selection",
  [sym_quoted_string] = "quoted_string",
  [sym_duration] = "duration",
  [aux_sym_label_selectors_repeat1] = "label_selectors_repeat1",
  [aux_sym_function_args_repeat1] = "function_args_repeat1",
  [aux_sym_aggregation_grouping_repeat1] = "aggregation_grouping_repeat1",
  [aux_sym_duration_repeat1] = "duration_repeat1",
  [alias_sym_pat_780550e] = "pat_780550e",
  [alias_sym_pat_dcab316] = "pat_dcab316",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_float_literal] = sym_float_literal,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_offset] = anon_sym_offset,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_start_LPAREN_RPAREN] = anon_sym_start_LPAREN_RPAREN,
  [anon_sym_end_LPAREN_RPAREN] = anon_sym_end_LPAREN_RPAREN,
  [aux_sym_at_token1] = aux_sym_at_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ_TILDE] = anon_sym_EQ_TILDE,
  [anon_sym_BANG_TILDE] = anon_sym_BANG_TILDE,
  [anon_sym_sum] = anon_sym_sum,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_avg] = anon_sym_avg,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_stddev] = anon_sym_stddev,
  [anon_sym_stdvar] = anon_sym_stdvar,
  [anon_sym_count] = anon_sym_count,
  [anon_sym_count_values] = anon_sym_count_values,
  [anon_sym_bottomk] = anon_sym_bottomk,
  [anon_sym_topk] = anon_sym_topk,
  [anon_sym_quantile] = anon_sym_quantile,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_without] = anon_sym_without,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_atan2] = anon_sym_atan2,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_ignoring] = anon_sym_ignoring,
  [anon_sym_group_left] = anon_sym_group_left,
  [anon_sym_group_right] = anon_sym_group_right,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [aux_sym_duration_token1] = aux_sym_duration_token1,
  [anon_sym_ms] = anon_sym_ms,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_w] = anon_sym_w,
  [anon_sym_y] = anon_sym_y,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_semgrep_metavariable] = sym_semgrep_metavariable,
  [sym_query_] = sym_query_,
  [sym_query] = sym_query,
  [sym_query_expression] = sym_query_expression,
  [sym_literal_expression] = sym_literal_expression,
  [sym_string_literal] = sym_string_literal,
  [sym_timeseries_selector_expression] = sym_timeseries_selector_expression,
  [sym_instant_vector_selector] = sym_instant_vector_selector,
  [sym_range_vector_selector] = sym_range_vector_selector,
  [sym_range_selection] = sym_range_selection,
  [sym_modifier] = sym_modifier,
  [sym_offset] = sym_offset,
  [sym_at] = sym_at,
  [sym_series_matcher] = sym_series_matcher,
  [sym_label_selectors] = sym_label_selectors,
  [sym_label_matcher] = sym_label_matcher,
  [sym_metric_name] = sym_metric_name,
  [sym_label_name] = sym_label_name,
  [sym_label_value] = sym_label_value,
  [sym_function_expression] = sym_function_expression,
  [sym_function_call] = sym_function_call,
  [sym_function_name] = sym_function_name,
  [sym_function_args] = sym_function_args,
  [sym_operator_expression] = sym_operator_expression,
  [sym_aggregation_expression] = sym_aggregation_expression,
  [sym_aggregation_operator] = sym_aggregation_operator,
  [sym_aggregation_grouping] = sym_aggregation_grouping,
  [sym_binary_expression] = sym_binary_expression,
  [sym_binary_grouping] = sym_binary_grouping,
  [sym_subquery_expression] = sym_subquery_expression,
  [sym_subquery] = sym_subquery,
  [sym_subquery_range_selection] = sym_subquery_range_selection,
  [sym_quoted_string] = sym_quoted_string,
  [sym_duration] = sym_duration,
  [aux_sym_label_selectors_repeat1] = aux_sym_label_selectors_repeat1,
  [aux_sym_function_args_repeat1] = aux_sym_function_args_repeat1,
  [aux_sym_aggregation_grouping_repeat1] = aux_sym_aggregation_grouping_repeat1,
  [aux_sym_duration_repeat1] = aux_sym_duration_repeat1,
  [alias_sym_pat_780550e] = alias_sym_pat_780550e,
  [alias_sym_pat_dcab316] = alias_sym_pat_dcab316,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_offset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_start_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_at_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_avg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stddev] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stdvar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_count_values] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bottomk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_topk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quantile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_without] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atan2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignoring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_duration_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_semgrep_metavariable] = {
    .visible = true,
    .named = true,
  },
  [sym_query_] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_query_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_timeseries_selector_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_instant_vector_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_range_vector_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_range_selection] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_at] = {
    .visible = true,
    .named = true,
  },
  [sym_series_matcher] = {
    .visible = true,
    .named = true,
  },
  [sym_label_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_label_matcher] = {
    .visible = true,
    .named = true,
  },
  [sym_metric_name] = {
    .visible = true,
    .named = true,
  },
  [sym_label_name] = {
    .visible = true,
    .named = true,
  },
  [sym_label_value] = {
    .visible = true,
    .named = true,
  },
  [sym_function_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_function_args] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregation_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregation_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregation_grouping] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_grouping] = {
    .visible = true,
    .named = true,
  },
  [sym_subquery_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_subquery] = {
    .visible = true,
    .named = true,
  },
  [sym_subquery_range_selection] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_label_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_aggregation_grouping_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_duration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_pat_780550e] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_dcab316] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_pat_dcab316,
  },
  [2] = {
    [0] = alias_sym_pat_780550e,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(114);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '0') ADVANCE(194);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '>') ADVANCE(171);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == '[') ADVANCE(124);
      if (lookahead == ']') ADVANCE(125);
      if (lookahead == '^') ADVANCE(165);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'g') ADVANCE(81);
      if (lookahead == 'h') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 'q') ADVANCE(99);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(203);
      if (lookahead == 'y') ADVANCE(204);
      if (lookahead == '{') ADVANCE(132);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == 'b') ADVANCE(238);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'g') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(205);
      if (lookahead == 'q') ADVANCE(262);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead == 't') ADVANCE(239);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(273);
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == 'b') ADVANCE(238);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'g') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(233);
      if (lookahead == 'q') ADVANCE(262);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(273);
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == 'b') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'g') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(233);
      if (lookahead == 'q') ADVANCE(262);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == 'b') ADVANCE(238);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'g') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(205);
      if (lookahead == 'q') ADVANCE(262);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == 'd') ADVANCE(201);
      if (lookahead == 'h') ADVANCE(200);
      if (lookahead == 'm') ADVANCE(199);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == 'w') ADVANCE(202);
      if (lookahead == 'y') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(130);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(129);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(105);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(180);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(137);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '~') ADVANCE(139);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(170);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 41:
      if (lookahead == 'g') ADVANCE(183);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'k') ADVANCE(159);
      END_STATE();
    case 51:
      if (lookahead == 'k') ADVANCE(157);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'y') ADVANCE(163);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 101:
      if (lookahead == 'v') ADVANCE(149);
      END_STATE();
    case 102:
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 103:
      if (lookahead == 'y') ADVANCE(163);
      END_STATE();
    case 104:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 106:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(117);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 108:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 112:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(277);
      END_STATE();
    case 113:
      if (eof) ADVANCE(114);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(171);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == '[') ADVANCE(124);
      if (lookahead == ']') ADVANCE(125);
      if (lookahead == '^') ADVANCE(165);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(46);
      if (lookahead == '{') ADVANCE(132);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(113)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_offset);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_start_LPAREN_RPAREN);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_end_LPAREN_RPAREN);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_at_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(170);
      if (lookahead == '~') ADVANCE(138);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '~') ADVANCE(138);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_avg);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_avg);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_group);
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_group);
      if (lookahead == '_') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_group);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_stddev);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_stddev);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_stdvar);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_stdvar);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == '_') ADVANCE(102);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == '_') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_count_values);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_count_values);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_bottomk);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_bottomk);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_topk);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_topk);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_quantile);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_quantile);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_without);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_atan2);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_on);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ignoring);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ignoring);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_group_left);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_group_left);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_group_right);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_group_right);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_double_quoted_string);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_single_quoted_string);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '\'') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_duration_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_w);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(214);
      if (lookahead == 'v') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(237);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(226);
      if (lookahead == 't') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead == 'u') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_semgrep_metavariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(277);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 113},
  [26] = {.lex_state = 113},
  [27] = {.lex_state = 113},
  [28] = {.lex_state = 113},
  [29] = {.lex_state = 113},
  [30] = {.lex_state = 113},
  [31] = {.lex_state = 113},
  [32] = {.lex_state = 113},
  [33] = {.lex_state = 113},
  [34] = {.lex_state = 113},
  [35] = {.lex_state = 113},
  [36] = {.lex_state = 113},
  [37] = {.lex_state = 113},
  [38] = {.lex_state = 113},
  [39] = {.lex_state = 113},
  [40] = {.lex_state = 113},
  [41] = {.lex_state = 113},
  [42] = {.lex_state = 113},
  [43] = {.lex_state = 113},
  [44] = {.lex_state = 113},
  [45] = {.lex_state = 113},
  [46] = {.lex_state = 113},
  [47] = {.lex_state = 113},
  [48] = {.lex_state = 113},
  [49] = {.lex_state = 113},
  [50] = {.lex_state = 113},
  [51] = {.lex_state = 113},
  [52] = {.lex_state = 113},
  [53] = {.lex_state = 113},
  [54] = {.lex_state = 113},
  [55] = {.lex_state = 113},
  [56] = {.lex_state = 113},
  [57] = {.lex_state = 113},
  [58] = {.lex_state = 113},
  [59] = {.lex_state = 113},
  [60] = {.lex_state = 113},
  [61] = {.lex_state = 113},
  [62] = {.lex_state = 113},
  [63] = {.lex_state = 113},
  [64] = {.lex_state = 113},
  [65] = {.lex_state = 113},
  [66] = {.lex_state = 113},
  [67] = {.lex_state = 113},
  [68] = {.lex_state = 113},
  [69] = {.lex_state = 113},
  [70] = {.lex_state = 113},
  [71] = {.lex_state = 113},
  [72] = {.lex_state = 113},
  [73] = {.lex_state = 113},
  [74] = {.lex_state = 113},
  [75] = {.lex_state = 113},
  [76] = {.lex_state = 113},
  [77] = {.lex_state = 113},
  [78] = {.lex_state = 113},
  [79] = {.lex_state = 113},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 113},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 113},
  [84] = {.lex_state = 113},
  [85] = {.lex_state = 113},
  [86] = {.lex_state = 113},
  [87] = {.lex_state = 113},
  [88] = {.lex_state = 113},
  [89] = {.lex_state = 113},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 113},
  [92] = {.lex_state = 113},
  [93] = {.lex_state = 113},
  [94] = {.lex_state = 113},
  [95] = {.lex_state = 113},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 113},
  [98] = {.lex_state = 113},
  [99] = {.lex_state = 113},
  [100] = {.lex_state = 113},
  [101] = {.lex_state = 113},
  [102] = {.lex_state = 113},
  [103] = {.lex_state = 113},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 113},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 113},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 113},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 113},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 113},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 113},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 113},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 113},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 113},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_offset] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_start_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_end_LPAREN_RPAREN] = ACTIONS(1),
    [aux_sym_at_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ_TILDE] = ACTIONS(1),
    [anon_sym_BANG_TILDE] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_avg] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_stddev] = ACTIONS(1),
    [anon_sym_stdvar] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [anon_sym_count_values] = ACTIONS(1),
    [anon_sym_bottomk] = ACTIONS(1),
    [anon_sym_topk] = ACTIONS(1),
    [anon_sym_quantile] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_without] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_atan2] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_ignoring] = ACTIONS(1),
    [anon_sym_group_left] = ACTIONS(1),
    [anon_sym_group_right] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_double_quoted_string] = ACTIONS(1),
    [sym_single_quoted_string] = ACTIONS(1),
    [aux_sym_duration_token1] = ACTIONS(1),
    [anon_sym_ms] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_w] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(1),
  },
  [1] = {
    [sym_query_] = STATE(178),
    [sym_query] = STATE(101),
    [sym_query_expression] = STATE(81),
    [sym_literal_expression] = STATE(77),
    [sym_string_literal] = STATE(86),
    [sym_timeseries_selector_expression] = STATE(77),
    [sym_instant_vector_selector] = STATE(85),
    [sym_range_vector_selector] = STATE(85),
    [sym_series_matcher] = STATE(25),
    [sym_metric_name] = STATE(32),
    [sym_function_expression] = STATE(77),
    [sym_function_call] = STATE(72),
    [sym_function_name] = STATE(170),
    [sym_operator_expression] = STATE(77),
    [sym_aggregation_expression] = STATE(92),
    [sym_aggregation_operator] = STATE(135),
    [sym_binary_expression] = STATE(92),
    [sym_subquery_expression] = STATE(77),
    [sym_subquery] = STATE(79),
    [sym_quoted_string] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_float_literal] = ACTIONS(7),
    [anon_sym_sum] = ACTIONS(9),
    [anon_sym_max] = ACTIONS(9),
    [anon_sym_min] = ACTIONS(9),
    [anon_sym_avg] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_stddev] = ACTIONS(9),
    [anon_sym_stdvar] = ACTIONS(9),
    [anon_sym_count] = ACTIONS(9),
    [anon_sym_count_values] = ACTIONS(9),
    [anon_sym_bottomk] = ACTIONS(9),
    [anon_sym_topk] = ACTIONS(9),
    [anon_sym_quantile] = ACTIONS(9),
    [sym_double_quoted_string] = ACTIONS(11),
    [sym_single_quoted_string] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    ACTIONS(17), 1,
      anon_sym_bool,
    STATE(19), 1,
      sym_binary_grouping,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(55), 1,
      sym_query,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(19), 2,
      anon_sym_on,
      anon_sym_ignoring,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [89] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    STATE(14), 1,
      sym_binary_grouping,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(48), 1,
      sym_query,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(19), 2,
      anon_sym_on,
      anon_sym_ignoring,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [175] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    STATE(12), 1,
      sym_binary_grouping,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(56), 1,
      sym_query,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(19), 2,
      anon_sym_on,
      anon_sym_ignoring,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [261] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    STATE(21), 1,
      sym_binary_grouping,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(47), 1,
      sym_query,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(19), 2,
      anon_sym_on,
      anon_sym_ignoring,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [347] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    STATE(20), 1,
      sym_binary_grouping,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(57), 1,
      sym_query,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(19), 2,
      anon_sym_on,
      anon_sym_ignoring,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [433] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    STATE(22), 1,
      sym_binary_grouping,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(62), 1,
      sym_query,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(19), 2,
      anon_sym_on,
      anon_sym_ignoring,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [519] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    STATE(15), 1,
      sym_binary_grouping,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(60), 1,
      sym_query,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(19), 2,
      anon_sym_on,
      anon_sym_ignoring,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [605] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(88), 1,
      sym_query,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [687] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(88), 1,
      sym_query,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [769] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(54), 1,
      sym_query,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [851] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(61), 1,
      sym_query,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [930] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(86), 1,
      sym_string_literal,
    STATE(113), 1,
      sym_query_expression,
    STATE(115), 1,
      sym_query,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [1009] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(52), 1,
      sym_query,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [1088] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(51), 1,
      sym_query,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [1167] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(99), 1,
      sym_query,
    STATE(100), 1,
      sym_literal_expression,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 4,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [1248] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(88), 1,
      sym_query,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [1327] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(98), 1,
      sym_literal_expression,
    STATE(102), 1,
      sym_query,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 4,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [1408] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(62), 1,
      sym_query,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [1487] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(59), 1,
      sym_query,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [1566] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(63), 1,
      sym_query,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [1645] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(49), 1,
      sym_query,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [1724] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(103), 1,
      sym_query,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [1803] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_float_literal,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_semgrep_metavariable,
    STATE(25), 1,
      sym_series_matcher,
    STATE(32), 1,
      sym_metric_name,
    STATE(72), 1,
      sym_function_call,
    STATE(78), 1,
      sym_quoted_string,
    STATE(79), 1,
      sym_subquery,
    STATE(81), 1,
      sym_query_expression,
    STATE(86), 1,
      sym_string_literal,
    STATE(97), 1,
      sym_query,
    STATE(135), 1,
      sym_aggregation_operator,
    STATE(170), 1,
      sym_function_name,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(85), 2,
      sym_instant_vector_selector,
      sym_range_vector_selector,
    STATE(92), 2,
      sym_aggregation_expression,
      sym_binary_expression,
    STATE(77), 5,
      sym_literal_expression,
      sym_timeseries_selector_expression,
      sym_function_expression,
      sym_operator_expression,
      sym_subquery_expression,
    ACTIONS(9), 12,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
  [1882] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(32), 1,
      anon_sym_offset,
    ACTIONS(34), 1,
      anon_sym_AT,
    STATE(28), 1,
      sym_range_selection,
    STATE(37), 1,
      sym_at,
    STATE(45), 1,
      sym_offset,
    STATE(93), 1,
      sym_modifier,
    ACTIONS(36), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(27), 17,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1930] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_offset,
    ACTIONS(34), 1,
      anon_sym_AT,
    STATE(37), 1,
      sym_at,
    STATE(45), 1,
      sym_offset,
    STATE(84), 1,
      sym_modifier,
    ACTIONS(40), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(38), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [1973] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      aux_sym_duration_token1,
    STATE(27), 1,
      aux_sym_duration_repeat1,
    ACTIONS(44), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(42), 21,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_COLON,
  [2010] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_offset,
    ACTIONS(34), 1,
      anon_sym_AT,
    STATE(37), 1,
      sym_at,
    STATE(45), 1,
      sym_offset,
    STATE(75), 1,
      sym_modifier,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(49), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2053] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      aux_sym_duration_token1,
    STATE(27), 1,
      aux_sym_duration_repeat1,
    ACTIONS(55), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(53), 21,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_COLON,
  [2090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 21,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 22,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
      anon_sym_COLON,
      aux_sym_duration_token1,
  [2156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_label_selectors,
    ACTIONS(73), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2192] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(94), 1,
      sym_aggregation_grouping,
    ACTIONS(77), 2,
      anon_sym_by,
      anon_sym_without,
    ACTIONS(79), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(75), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2227] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(95), 1,
      sym_aggregation_grouping,
    ACTIONS(77), 2,
      anon_sym_by,
      anon_sym_without,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(81), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2262] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(83), 1,
      sym_aggregation_grouping,
    ACTIONS(77), 2,
      anon_sym_by,
      anon_sym_without,
    ACTIONS(87), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2297] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(73), 1,
      sym_aggregation_grouping,
    ACTIONS(77), 2,
      anon_sym_by,
      anon_sym_without,
    ACTIONS(91), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2332] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_offset,
    STATE(71), 1,
      sym_offset,
    ACTIONS(95), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(93), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(109), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(117), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(121), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2576] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_AT,
    STATE(71), 1,
      sym_at,
    ACTIONS(95), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(93), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2640] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_CARET,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(129), 14,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2675] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_CARET,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(141), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(139), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(129), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2714] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_CARET,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(145), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(143), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(147), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2780] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_CARET,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(141), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(139), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_atan2,
  [2821] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_CARET,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(141), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(139), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(151), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(155), 19,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2889] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_CARET,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_atan2,
    STATE(26), 1,
      sym_subquery_range_selection,
    STATE(165), 1,
      aux_sym_function_args_repeat1,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(141), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(139), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2938] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_CARET,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(133), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(129), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [2975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3006] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_CARET,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 17,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3068] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_CARET,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(171), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 17,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3101] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_CARET,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(141), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(139), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_atan2,
  [3142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(171), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3173] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_CARET,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(171), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(151), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3210] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_CARET,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(171), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(151), 14,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 19,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_offset,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(189), 19,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 19,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(205), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(209), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(213), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(217), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(225), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(229), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 2,
      anon_sym_group_left,
      anon_sym_group_right,
    ACTIONS(233), 4,
      anon_sym_LPAREN,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_semgrep_metavariable,
    ACTIONS(235), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym_identifier,
  [3729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(239), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_group_left,
      anon_sym_group_right,
    ACTIONS(243), 4,
      anon_sym_LPAREN,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_semgrep_metavariable,
    ACTIONS(245), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym_identifier,
  [3787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(75), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(249), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(253), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(257), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(261), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3927] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_CARET,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_atan2,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(141), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(265), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(133), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(139), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(267), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [3999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_group_left,
      anon_sym_group_right,
    ACTIONS(271), 4,
      anon_sym_LPAREN,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_semgrep_metavariable,
    ACTIONS(273), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym_identifier,
  [4029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [4057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(281), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [4085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(285), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [4113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [4141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [4169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_group_left,
      anon_sym_group_right,
    ACTIONS(293), 4,
      anon_sym_LPAREN,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_semgrep_metavariable,
    ACTIONS(295), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym_identifier,
  [4199] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_CARET,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_atan2,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(141), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(139), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(223), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 16,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [4271] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_CARET,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_atan2,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(141), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(139), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(223), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 16,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [4343] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_CARET,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_atan2,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(141), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(139), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4386] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_CARET,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_atan2,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(141), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(139), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4429] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_CARET,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_atan2,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(141), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(139), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 4,
      anon_sym_LPAREN,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_semgrep_metavariable,
    ACTIONS(315), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym_identifier,
  [4498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 4,
      anon_sym_LPAREN,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_semgrep_metavariable,
    ACTIONS(319), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym_identifier,
  [4524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_semgrep_metavariable,
    ACTIONS(245), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym_identifier,
  [4552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 4,
      anon_sym_LPAREN,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_semgrep_metavariable,
    ACTIONS(273), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym_identifier,
  [4578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_semgrep_metavariable,
    ACTIONS(273), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym_identifier,
  [4606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 4,
      anon_sym_LPAREN,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_semgrep_metavariable,
    ACTIONS(327), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym_identifier,
  [4632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_semgrep_metavariable,
    ACTIONS(327), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym_identifier,
  [4660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 4,
      anon_sym_LPAREN,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_semgrep_metavariable,
    ACTIONS(333), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym_identifier,
  [4686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 4,
      anon_sym_LPAREN,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_semgrep_metavariable,
    ACTIONS(337), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym_identifier,
  [4712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    ACTIONS(241), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(239), 15,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
      anon_sym_atan2,
  [4740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_semgrep_metavariable,
    ACTIONS(235), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym_identifier,
  [4768] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_CARET,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_atan2,
    STATE(26), 1,
      sym_subquery_range_selection,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(141), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_unless,
    ACTIONS(139), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 4,
      anon_sym_LPAREN,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_semgrep_metavariable,
    ACTIONS(345), 14,
      sym_float_literal,
      anon_sym_sum,
      anon_sym_max,
      anon_sym_min,
      anon_sym_avg,
      anon_sym_group,
      anon_sym_stddev,
      anon_sym_stdvar,
      anon_sym_count,
      anon_sym_count_values,
      anon_sym_bottomk,
      anon_sym_topk,
      anon_sym_quantile,
      sym_identifier,
  [4834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_m,
    ACTIONS(347), 6,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_h,
      anon_sym_d,
      anon_sym_w,
      anon_sym_y,
  [4849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(351), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4863] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      sym_label_name,
    STATE(167), 1,
      sym_label_matcher,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [4880] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_semgrep_metavariable,
    STATE(168), 1,
      sym_quoted_string,
    STATE(169), 1,
      sym_label_value,
    ACTIONS(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [4897] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      sym_label_name,
    STATE(167), 1,
      sym_label_matcher,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [4914] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      sym_label_name,
    STATE(147), 1,
      sym_label_matcher,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [4931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_label_name,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [4945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      sym_label_name,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [4959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_EQ,
    ACTIONS(371), 3,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [4971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_label_name,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [4985] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      aux_sym_duration_token1,
    ACTIONS(373), 1,
      anon_sym_DASH,
    STATE(29), 1,
      aux_sym_duration_repeat1,
    STATE(65), 1,
      sym_duration,
  [5001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      sym_label_name,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [5015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_label_name,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [5029] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_label_name,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [5043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_label_name,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [5057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_label_name,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [5071] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      sym_label_name,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [5085] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(125), 1,
      sym_label_name,
    STATE(167), 1,
      sym_label_matcher,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [5099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    STATE(173), 1,
      sym_aggregation_grouping,
    ACTIONS(77), 2,
      anon_sym_by,
      anon_sym_without,
  [5113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      sym_label_name,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [5127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      sym_label_name,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [5141] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      aux_sym_duration_token1,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_duration_repeat1,
    STATE(174), 1,
      sym_duration,
  [5157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_label_name,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [5171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_label_name,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [5185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_label_name,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [5199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      sym_label_name,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [5213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_aggregation_grouping_repeat1,
  [5226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_aggregation_grouping_repeat1,
  [5239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_function_args_repeat1,
  [5252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_aggregation_grouping_repeat1,
  [5265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_label_selectors_repeat1,
  [5278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      aux_sym_duration_token1,
    STATE(29), 1,
      aux_sym_duration_repeat1,
    STATE(50), 1,
      sym_duration,
  [5291] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_aggregation_grouping_repeat1,
  [5304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(171), 1,
      sym_label_name,
    ACTIONS(357), 2,
      sym_identifier,
      sym_semgrep_metavariable,
  [5315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym_label_selectors_repeat1,
  [5328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_aggregation_grouping_repeat1,
  [5341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_aggregation_grouping_repeat1,
  [5354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_aggregation_grouping_repeat1,
  [5367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_aggregation_grouping_repeat1,
  [5380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_aggregation_grouping_repeat1,
  [5393] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      aux_sym_duration_token1,
    STATE(29), 1,
      aux_sym_duration_repeat1,
    STATE(175), 1,
      sym_duration,
  [5406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      aux_sym_at_token1,
    ACTIONS(433), 2,
      anon_sym_start_LPAREN_RPAREN,
      anon_sym_end_LPAREN_RPAREN,
  [5417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 3,
      anon_sym_LPAREN,
      anon_sym_by,
      anon_sym_without,
  [5426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_aggregation_grouping_repeat1,
  [5439] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_aggregation_grouping_repeat1,
  [5452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      aux_sym_label_selectors_repeat1,
  [5465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym_aggregation_grouping_repeat1,
  [5478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      aux_sym_duration_token1,
    STATE(29), 1,
      aux_sym_duration_repeat1,
    STATE(177), 1,
      sym_duration,
  [5491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_function_args_repeat1,
  [5504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_aggregation_grouping_repeat1,
  [5517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_function_args,
  [5551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
  [5566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_LPAREN,
  [5573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
  [5580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_COLON,
  [5587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
  [5594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
  [5601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 89,
  [SMALL_STATE(4)] = 175,
  [SMALL_STATE(5)] = 261,
  [SMALL_STATE(6)] = 347,
  [SMALL_STATE(7)] = 433,
  [SMALL_STATE(8)] = 519,
  [SMALL_STATE(9)] = 605,
  [SMALL_STATE(10)] = 687,
  [SMALL_STATE(11)] = 769,
  [SMALL_STATE(12)] = 851,
  [SMALL_STATE(13)] = 930,
  [SMALL_STATE(14)] = 1009,
  [SMALL_STATE(15)] = 1088,
  [SMALL_STATE(16)] = 1167,
  [SMALL_STATE(17)] = 1248,
  [SMALL_STATE(18)] = 1327,
  [SMALL_STATE(19)] = 1408,
  [SMALL_STATE(20)] = 1487,
  [SMALL_STATE(21)] = 1566,
  [SMALL_STATE(22)] = 1645,
  [SMALL_STATE(23)] = 1724,
  [SMALL_STATE(24)] = 1803,
  [SMALL_STATE(25)] = 1882,
  [SMALL_STATE(26)] = 1930,
  [SMALL_STATE(27)] = 1973,
  [SMALL_STATE(28)] = 2010,
  [SMALL_STATE(29)] = 2053,
  [SMALL_STATE(30)] = 2090,
  [SMALL_STATE(31)] = 2124,
  [SMALL_STATE(32)] = 2156,
  [SMALL_STATE(33)] = 2192,
  [SMALL_STATE(34)] = 2227,
  [SMALL_STATE(35)] = 2262,
  [SMALL_STATE(36)] = 2297,
  [SMALL_STATE(37)] = 2332,
  [SMALL_STATE(38)] = 2366,
  [SMALL_STATE(39)] = 2396,
  [SMALL_STATE(40)] = 2426,
  [SMALL_STATE(41)] = 2456,
  [SMALL_STATE(42)] = 2486,
  [SMALL_STATE(43)] = 2516,
  [SMALL_STATE(44)] = 2546,
  [SMALL_STATE(45)] = 2576,
  [SMALL_STATE(46)] = 2610,
  [SMALL_STATE(47)] = 2640,
  [SMALL_STATE(48)] = 2675,
  [SMALL_STATE(49)] = 2714,
  [SMALL_STATE(50)] = 2751,
  [SMALL_STATE(51)] = 2780,
  [SMALL_STATE(52)] = 2821,
  [SMALL_STATE(53)] = 2860,
  [SMALL_STATE(54)] = 2889,
  [SMALL_STATE(55)] = 2938,
  [SMALL_STATE(56)] = 2975,
  [SMALL_STATE(57)] = 3006,
  [SMALL_STATE(58)] = 3039,
  [SMALL_STATE(59)] = 3068,
  [SMALL_STATE(60)] = 3101,
  [SMALL_STATE(61)] = 3142,
  [SMALL_STATE(62)] = 3173,
  [SMALL_STATE(63)] = 3210,
  [SMALL_STATE(64)] = 3245,
  [SMALL_STATE(65)] = 3274,
  [SMALL_STATE(66)] = 3303,
  [SMALL_STATE(67)] = 3332,
  [SMALL_STATE(68)] = 3361,
  [SMALL_STATE(69)] = 3390,
  [SMALL_STATE(70)] = 3419,
  [SMALL_STATE(71)] = 3447,
  [SMALL_STATE(72)] = 3475,
  [SMALL_STATE(73)] = 3503,
  [SMALL_STATE(74)] = 3531,
  [SMALL_STATE(75)] = 3559,
  [SMALL_STATE(76)] = 3587,
  [SMALL_STATE(77)] = 3615,
  [SMALL_STATE(78)] = 3643,
  [SMALL_STATE(79)] = 3671,
  [SMALL_STATE(80)] = 3699,
  [SMALL_STATE(81)] = 3729,
  [SMALL_STATE(82)] = 3757,
  [SMALL_STATE(83)] = 3787,
  [SMALL_STATE(84)] = 3815,
  [SMALL_STATE(85)] = 3843,
  [SMALL_STATE(86)] = 3871,
  [SMALL_STATE(87)] = 3899,
  [SMALL_STATE(88)] = 3927,
  [SMALL_STATE(89)] = 3971,
  [SMALL_STATE(90)] = 3999,
  [SMALL_STATE(91)] = 4029,
  [SMALL_STATE(92)] = 4057,
  [SMALL_STATE(93)] = 4085,
  [SMALL_STATE(94)] = 4113,
  [SMALL_STATE(95)] = 4141,
  [SMALL_STATE(96)] = 4169,
  [SMALL_STATE(97)] = 4199,
  [SMALL_STATE(98)] = 4242,
  [SMALL_STATE(99)] = 4271,
  [SMALL_STATE(100)] = 4314,
  [SMALL_STATE(101)] = 4343,
  [SMALL_STATE(102)] = 4386,
  [SMALL_STATE(103)] = 4429,
  [SMALL_STATE(104)] = 4472,
  [SMALL_STATE(105)] = 4498,
  [SMALL_STATE(106)] = 4524,
  [SMALL_STATE(107)] = 4552,
  [SMALL_STATE(108)] = 4578,
  [SMALL_STATE(109)] = 4606,
  [SMALL_STATE(110)] = 4632,
  [SMALL_STATE(111)] = 4660,
  [SMALL_STATE(112)] = 4686,
  [SMALL_STATE(113)] = 4712,
  [SMALL_STATE(114)] = 4740,
  [SMALL_STATE(115)] = 4768,
  [SMALL_STATE(116)] = 4808,
  [SMALL_STATE(117)] = 4834,
  [SMALL_STATE(118)] = 4849,
  [SMALL_STATE(119)] = 4863,
  [SMALL_STATE(120)] = 4880,
  [SMALL_STATE(121)] = 4897,
  [SMALL_STATE(122)] = 4914,
  [SMALL_STATE(123)] = 4931,
  [SMALL_STATE(124)] = 4945,
  [SMALL_STATE(125)] = 4959,
  [SMALL_STATE(126)] = 4971,
  [SMALL_STATE(127)] = 4985,
  [SMALL_STATE(128)] = 5001,
  [SMALL_STATE(129)] = 5015,
  [SMALL_STATE(130)] = 5029,
  [SMALL_STATE(131)] = 5043,
  [SMALL_STATE(132)] = 5057,
  [SMALL_STATE(133)] = 5071,
  [SMALL_STATE(134)] = 5085,
  [SMALL_STATE(135)] = 5099,
  [SMALL_STATE(136)] = 5113,
  [SMALL_STATE(137)] = 5127,
  [SMALL_STATE(138)] = 5141,
  [SMALL_STATE(139)] = 5157,
  [SMALL_STATE(140)] = 5171,
  [SMALL_STATE(141)] = 5185,
  [SMALL_STATE(142)] = 5199,
  [SMALL_STATE(143)] = 5213,
  [SMALL_STATE(144)] = 5226,
  [SMALL_STATE(145)] = 5239,
  [SMALL_STATE(146)] = 5252,
  [SMALL_STATE(147)] = 5265,
  [SMALL_STATE(148)] = 5278,
  [SMALL_STATE(149)] = 5291,
  [SMALL_STATE(150)] = 5304,
  [SMALL_STATE(151)] = 5315,
  [SMALL_STATE(152)] = 5328,
  [SMALL_STATE(153)] = 5341,
  [SMALL_STATE(154)] = 5354,
  [SMALL_STATE(155)] = 5367,
  [SMALL_STATE(156)] = 5380,
  [SMALL_STATE(157)] = 5393,
  [SMALL_STATE(158)] = 5406,
  [SMALL_STATE(159)] = 5417,
  [SMALL_STATE(160)] = 5426,
  [SMALL_STATE(161)] = 5439,
  [SMALL_STATE(162)] = 5452,
  [SMALL_STATE(163)] = 5465,
  [SMALL_STATE(164)] = 5478,
  [SMALL_STATE(165)] = 5491,
  [SMALL_STATE(166)] = 5504,
  [SMALL_STATE(167)] = 5517,
  [SMALL_STATE(168)] = 5525,
  [SMALL_STATE(169)] = 5533,
  [SMALL_STATE(170)] = 5541,
  [SMALL_STATE(171)] = 5551,
  [SMALL_STATE(172)] = 5559,
  [SMALL_STATE(173)] = 5566,
  [SMALL_STATE(174)] = 5573,
  [SMALL_STATE(175)] = 5580,
  [SMALL_STATE(176)] = 5587,
  [SMALL_STATE(177)] = 5594,
  [SMALL_STATE(178)] = 5601,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instant_vector_selector, 1),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_instant_vector_selector, 1), SHIFT(164),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instant_vector_selector, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_duration_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_duration_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_duration_repeat1, 2), SHIFT_REPEAT(117),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_vector_selector, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_vector_selector, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metric_name, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metric_name, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_duration_repeat1, 2, .production_id = 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_duration_repeat1, 2, .production_id = 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_matcher, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_series_matcher, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_expression, 7),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_expression, 7),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_expression, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_expression, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_expression, 6),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_expression, 6),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_expression, 5),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_expression, 5),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery_range_selection, 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery_range_selection, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_selectors, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_selectors, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery_range_selection, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery_range_selection, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_selectors, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_selectors, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_matcher, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_series_matcher, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_selectors, 5),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_selectors, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_selectors, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_selectors, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_selection, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_selection, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_grouping, 6),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_grouping, 6),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_grouping, 5),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_grouping, 5),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at, 2, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at, 2, .production_id = 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_grouping, 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_grouping, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_grouping, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_grouping, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_vector_selector, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_vector_selector, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 5),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 5),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_expression, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_expression, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery_expression, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery_expression, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 4),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 5),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 5),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeseries_selector_expression, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timeseries_selector_expression, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_expression, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_expression, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 6),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 6),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_args, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_expression, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_expression, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instant_vector_selector, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instant_vector_selector, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_expression, 8),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregation_expression, 8),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 11),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 11),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 10),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 10),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 7),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 7),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 8),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 8),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 12),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 12),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_grouping, 9),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_grouping, 9),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_name, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_name, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(17),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregation_grouping_repeat1, 2),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregation_grouping_repeat1, 2), SHIFT_REPEAT(150),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregation_operator, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_label_selectors_repeat1, 2), SHIFT_REPEAT(134),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_selectors_repeat1, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_value, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_matcher, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [468] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_promql(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
