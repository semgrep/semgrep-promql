(* Generated by ocaml-tree-sitter. *)
(*
   promql grammar

   entrypoint: query_
*)

open! Sexplib.Conv
open Tree_sitter_run

type pat_atan2 = Token.t (* pattern [aA][tT][aA][nN]2 *)

type backtick_quoted_string = Token.t

type pat_group_left =
  Token.t (* pattern [gG][rR][oO][uU][pP]_[lL][eE][fF][tT] *)

type pat_group_right =
  Token.t (* pattern [gG][rR][oO][uU][pP]_[rR][iI][gG][hH][tT] *)

type double_quoted_string = Token.t

type pat_780550e = Token.t (* pattern [0-9]+ *)

type pat_and = Token.t (* pattern [aA][nN][dD] *)

type pat_with = Token.t (* pattern [wW][iI][tT][hH][oO][uU][tT] *)

type pat_bool = Token.t (* pattern [bB][oO][oO][lL] *)

type identifier = Token.t (* pattern [a-zA-Z_:][a-zA-Z0-9_:]* *)

type pat_igno = Token.t (* pattern [iI][gG][nN][oO][rR][iI][nN][gG] *)

type pat_by = Token.t (* pattern [bB][yY] *)

type pat_or = Token.t (* pattern [oO][rR] *)

type pat_db4e4e9 =
  Token.t (* pattern [-+]?([0-9]*\.?[0-9]+([eE][-+]?[0-9]+)?|0[xX][0-9a-fA-F]+|[nN][aA][nN]|[iI][nN][fF]) *)

type single_quoted_string = Token.t

type pat_on = Token.t (* pattern [oO][nN] *)

type semgrep_metavariable = Token.t

type pat_unless = Token.t (* pattern [uU][nN][lL][eE][sS][sS] *)

type pat_dcab316 = Token.t (* pattern [1-9][0-9]* *)

type quoted_string = [
    `Single_quoted_str of single_quoted_string (*tok*)
  | `Double_quoted_str of double_quoted_string (*tok*)
  | `Back_quoted_str of backtick_quoted_string (*tok*)
]

type label_name = [
    `Semg_meta of semgrep_metavariable (*tok*)
  | `Id of identifier (*tok*)
]

type function_name = [
    `Semg_meta of semgrep_metavariable (*tok*)
  | `Id of identifier (*tok*)
]

type duration = [
    `Semg_meta of semgrep_metavariable (*tok*)
  | `Rep1_pat_780550e_choice_ms of
      (
          pat_780550e
        * [
              `Ms of Token.t (* "ms" *)
            | `S of Token.t (* "s" *)
            | `M of Token.t (* "m" *)
            | `H of Token.t (* "h" *)
            | `D of Token.t (* "d" *)
            | `W of Token.t (* "w" *)
            | `Y of Token.t (* "y" *)
          ]
      )
        list (* one or more *)
]

type float_literal = [
    `Semg_meta of semgrep_metavariable (*tok*)
  | `Pat_db4e4e9 of pat_db4e4e9
]

type metric_name = [
    `Semg_meta of semgrep_metavariable (*tok*)
  | `Id of identifier (*tok*)
]

type at = (
    Token.t (* "@" *)
  * [
        `Star of Token.t (* "start()" *)
      | `EndL of Token.t (* "end()" *)
      | `Pat_dcab316 of pat_dcab316
    ]
)

type label_value = [
    `Semg_meta of semgrep_metavariable (*tok*)
  | `Quoted_str of quoted_string
]

type string_literal = [
    `Semg_meta of semgrep_metavariable (*tok*)
  | `Quoted_str of quoted_string
]

type anon_choice_semg_ellips_d768110 = [
    `Semg_ellips of Token.t (* "..." *)
  | `Label_name of label_name
]

type anon_label_name_rep_COMMA_label_name_opt_COMMA_84ead0c = (
    label_name
  * (Token.t (* "," *) * label_name) list (* zero or more *)
  * Token.t (* "," *) option
)

type range_selection = (Token.t (* "[" *) * duration * Token.t (* "]" *))

type offset = (Token.t (* "offset" *) * Token.t (* "-" *) option * duration)

type subquery_range_selection = (
    Token.t (* "[" *)
  * duration
  * Token.t (* ":" *)
  * duration option
  * Token.t (* "]" *)
)

type literal_expression = [
    `Float_lit of float_literal
  | `Str_lit of string_literal
]

type grouping = (
    [ `Pat_by of pat_by | `Pat_with of pat_with ]
  * Token.t (* "(" *)
  * (
        anon_choice_semg_ellips_d768110
      * (Token.t (* "," *) * anon_choice_semg_ellips_d768110)
          list (* zero or more *)
      * Token.t (* "," *) option
    )
      option
  * Token.t (* ")" *)
)

type binary_grouping = (
    [ `Pat_on of pat_on | `Pat_igno of pat_igno ]
  * Token.t (* "(" *)
  * anon_label_name_rep_COMMA_label_name_opt_COMMA_84ead0c option
  * Token.t (* ")" *)
  * (
        [
            `Pat_group_left of pat_group_left
          | `Pat_group_right of pat_group_right
        ]
      * (
            Token.t (* "(" *)
          * anon_label_name_rep_COMMA_label_name_opt_COMMA_84ead0c option
          * Token.t (* ")" *)
        )
          option
    )
      option
)

type modifier = [
    `Offset_opt_at of (offset * at option)
  | `At_opt_offset of (at * offset option)
]

type anon_choice_semg_ellips_c826cc7 = [
    `Semg_ellips of Token.t (* "..." *)
  | `Label_matc of (
        label_name
      * [
            `EQ of Token.t (* "=" *)
          | `BANGEQ of Token.t (* "!=" *)
          | `EQTILDE of Token.t (* "=~" *)
          | `BANGTILDE of Token.t (* "!~" *)
        ]
      * label_value
    )
]

type label_selectors = (
    Token.t (* "{" *)
  * (
        anon_choice_semg_ellips_c826cc7
      * (Token.t (* "," *) * anon_choice_semg_ellips_c826cc7)
          list (* zero or more *)
      * Token.t (* "," *) option
    )
      option
  * Token.t (* "}" *)
)

type series_matcher = [
    `Metric_name of metric_name
  | `Label_selecs of label_selectors
  | `Metric_name_label_selecs of (metric_name * label_selectors)
]

type selector_expression = [
    `Inst_vec_sele of (series_matcher * modifier option)
  | `Range_vec_sele of (series_matcher * range_selection * modifier option)
]

type binary_expression = [
    `Query_choice_HAT_opt_bin_grou_query of (
        query_
      * [ `HAT of Token.t (* "^" *) ]
      * binary_grouping option
      * query_
    )
  | `Query_choice_STAR_opt_bin_grou_query of (
        query_
      * [
            `STAR of Token.t (* "*" *)
          | `SLASH of Token.t (* "/" *)
          | `PERC of Token.t (* "%" *)
        ]
      * binary_grouping option
      * query_
    )
  | `Query_choice_PLUS_opt_bin_grou_query of (
        query_
      * [ `PLUS of Token.t (* "+" *) | `DASH of Token.t (* "-" *) ]
      * binary_grouping option
      * query_
    )
  | `Query_choice_EQEQ_opt_pat_bool_opt_bin_grou_query of (
        query_
      * [
            `EQEQ of Token.t (* "==" *)
          | `BANGEQ of Token.t (* "!=" *)
          | `GT of Token.t (* ">" *)
          | `GTEQ of Token.t (* ">=" *)
          | `LT of Token.t (* "<" *)
          | `LTEQ of Token.t (* "<=" *)
        ]
      * pat_bool option
      * binary_grouping option
      * query_
    )
  | `Query_choice_pat_and_opt_bin_grou_query of (
        query_
      * [
            `Pat_and of pat_and
          | `Pat_or of pat_or
          | `Pat_unless of pat_unless
        ]
      * binary_grouping option
      * query_
    )
  | `Query_choice_pat_atan2_opt_bin_grou_query of (
        query_
      * [ `Pat_atan2 of pat_atan2 ]
      * binary_grouping option
      * query_
    )
]

and call_expression = function_call

and function_args = (
    Token.t (* "(" *)
  * (
        query_
      * (Token.t (* "," *) * query_) list (* zero or more *)
      * Token.t (* "," *) option
    )
      option
  * Token.t (* ")" *)
)

and function_call = [
    `Func_name_func_args of (function_name * function_args)
  | `Func_name_grou_func_args of (function_name * grouping * function_args)
  | `Func_name_func_args_grou of (function_name * function_args * grouping)
]

and operator_expression = binary_expression

and query = [
    `Query_exp of query_expression
  | `LPAR_query_exp_RPAR of (
        Token.t (* "(" *) * query_expression * Token.t (* ")" *)
    )
]

and query_ = query

and query_expression = [
    `Semg_ellips of Token.t (* "..." *)
  | `Choice_lit_exp of [
        `Lit_exp of literal_expression
      | `Sele_exp of selector_expression
      | `Call_exp of call_expression
      | `Op_exp of operator_expression
      | `Subq_exp of subquery_expression
    ]
]

and subquery = (query_ * subquery_range_selection * modifier option)

and subquery_expression = subquery

type semgrep_ellipsis (* inlined *) = Token.t (* "..." *)

type comment (* inlined *) = Token.t

type label_matcher (* inlined *) = (
    label_name
  * [
        `EQ of Token.t (* "=" *)
      | `BANGEQ of Token.t (* "!=" *)
      | `EQTILDE of Token.t (* "=~" *)
      | `BANGTILDE of Token.t (* "!~" *)
    ]
  * label_value
)

type instant_vector_selector (* inlined *) = (
    series_matcher
  * modifier option
)

type range_vector_selector (* inlined *) = (
    series_matcher
  * range_selection
  * modifier option
)

type extra = [ `Comment of Loc.t * comment ]

type extras = extra list
