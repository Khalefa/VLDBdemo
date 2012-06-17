
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABORT_P = 258,
     ABSOLUTE_P = 259,
     ACCESS = 260,
     ACTION = 261,
     ADD_P = 262,
     ADMIN = 263,
     AFTER = 264,
     AGGREGATE = 265,
     ALGORITHM = 266,
     ALL = 267,
     ALSO = 268,
     ALTER = 269,
     ALWAYS = 270,
     ANALYSE = 271,
     ANALYZE = 272,
     AND = 273,
     ANY = 274,
     ARRAY = 275,
     AS = 276,
     ASC = 277,
     ASOF = 278,
     ASSERTION = 279,
     ASSIGNMENT = 280,
     ASYMMETRIC = 281,
     AT = 282,
     ATTRIBUTES = 283,
     AUTHORIZATION = 284,
     AVERAGE = 285,
     BACKWARD = 286,
     BEFORE = 287,
     BEGIN_P = 288,
     BETWEEN = 289,
     BIGINT = 290,
     BINARY = 291,
     BIT = 292,
     BOOLEAN_P = 293,
     BOTH = 294,
     BOTTOMUP = 295,
     BY = 296,
     CACHE = 297,
     CALLED = 298,
     CASCADE = 299,
     CASCADED = 300,
     CASE = 301,
     CAST = 302,
     CATALOG_P = 303,
     CHAIN = 304,
     CHAR_P = 305,
     CHARACTER = 306,
     CHARACTERISTICS = 307,
     CHECK = 308,
     CHECKPOINT = 309,
     CHOOSE = 310,
     CLASS = 311,
     CLOSE = 312,
     CLUSTER = 313,
     COALESCE = 314,
     COLLATE = 315,
     COLUMN = 316,
     COMMENT = 317,
     COMMIT = 318,
     COMMITTED = 319,
     COMPLETE = 320,
     CONCURRENTLY = 321,
     CONFIDENCE = 322,
     CONFIGURATION = 323,
     CONNECTION = 324,
     CONSTRAINT = 325,
     CONSTRAINTS = 326,
     CONTENT_P = 327,
     CONTINUE_P = 328,
     CONVERSION_P = 329,
     COPY = 330,
     CORRELATION = 331,
     COST = 332,
     CREATE = 333,
     CREATEDB = 334,
     CREATEROLE = 335,
     CREATEUSER = 336,
     CROSS = 337,
     CSV = 338,
     CURRENT_P = 339,
     CURRENT_CATALOG = 340,
     CURRENT_DATE = 341,
     CURRENT_ROLE = 342,
     CURRENT_SCHEMA = 343,
     CURRENT_TIME = 344,
     CURRENT_TIMESTAMP = 345,
     CURRENT_USER = 346,
     CURSOR = 347,
     CYCLE = 348,
     DATA_P = 349,
     DATABASE = 350,
     DAY_P = 351,
     DEALLOCATE = 352,
     DEC = 353,
     DECIMAL_P = 354,
     DECLARE = 355,
     DECOMPOSE = 356,
     DEFAULT = 357,
     DEFAULTS = 358,
     DEFERRABLE = 359,
     DEFERRED = 360,
     DEFINER = 361,
     DELETE_P = 362,
     DELIMITER = 363,
     DELIMITERS = 364,
     DESC = 365,
     DICTIONARY = 366,
     DIMENSION = 367,
     DISABLE_P = 368,
     DISAGGREGATE = 369,
     DISAGGSCHEME = 370,
     DISCARD = 371,
     DISTINCT = 372,
     DO = 373,
     DOCUMENT_P = 374,
     DOMAIN_P = 375,
     DOUBLE_P = 376,
     DROP = 377,
     EACH = 378,
     ELSE = 379,
     ENABLE_P = 380,
     ENCODING = 381,
     ENCRYPTED = 382,
     END_P = 383,
     ENUM_P = 384,
     ESCAPE = 385,
     EXCEPT = 386,
     EXCLUDING = 387,
     EXCLUSIVE = 388,
     EXECUTE = 389,
     EXISTS = 390,
     EXPLAIN = 391,
     EXTERNAL = 392,
     EXTRACT = 393,
     FALSE_P = 394,
     FAMILY = 395,
     FETCH = 396,
     FILL = 397,
     FILLING = 398,
     FIRST = 399,
     FIRST_P = 400,
     FLOAT_P = 401,
     FOLLOWING = 402,
     FOR = 403,
     FORCE = 404,
     FORECAST = 405,
     FOREIGN = 406,
     FORWARD = 407,
     FREEZE = 408,
     FROM = 409,
     FULL = 410,
     FUNCTION = 411,
     GLOBAL = 412,
     GRANT = 413,
     GRANTED = 414,
     GREATEST = 415,
     GREEDY = 416,
     GROUP_P = 417,
     HANDLER = 418,
     HAVING = 419,
     HEADER_P = 420,
     HOLD = 421,
     HOUR_P = 422,
     IDENTITY_P = 423,
     IF_P = 424,
     ILIKE = 425,
     IMMEDIATE = 426,
     IMMUTABLE = 427,
     IMPLICIT_P = 428,
     IN_P = 429,
     INCLUDING = 430,
     INCREMENT = 431,
     INDEX = 432,
     INDEXES = 433,
     INHERIT = 434,
     INHERITS = 435,
     INITIALLY = 436,
     INNER_P = 437,
     INOUT = 438,
     INPUT_P = 439,
     INSENSITIVE = 440,
     INSERT = 441,
     INSTEAD = 442,
     INT_P = 443,
     INTEGER = 444,
     INTERSECT = 445,
     INTERVAL = 446,
     INTO = 447,
     INVOKER = 448,
     IS = 449,
     ISNULL = 450,
     ISOLATION = 451,
     JOIN = 452,
     KEY = 453,
     KEYS = 454,
     LANCOMPILER = 455,
     LANGUAGE = 456,
     LARGE_P = 457,
     LAST_P = 458,
     LC_COLLATE_P = 459,
     LC_CTYPE_P = 460,
     LEADING = 461,
     LEAST = 462,
     LEFT = 463,
     LEVEL = 464,
     LIKE = 465,
     LIMIT = 466,
     LISTEN = 467,
     LOAD = 468,
     LOCAL = 469,
     LOCALTIME = 470,
     LOCALTIMESTAMP = 471,
     LOCATION = 472,
     LOCK_P = 473,
     LOGIN_P = 474,
     MAINTENANCE = 475,
     MAPPING = 476,
     MATCH = 477,
     MAXVALUE = 478,
     METHOD = 479,
     MINUTE_P = 480,
     MINVALUE = 481,
     MODE = 482,
     MODEL = 483,
     MODELGRAPH = 484,
     MODELINDEX = 485,
     MONTH_P = 486,
     MOVE = 487,
     MULT = 488,
     NAME_P = 489,
     NAMES = 490,
     NATIONAL = 491,
     NATURAL = 492,
     NCHAR = 493,
     NEW = 494,
     NEXT = 495,
     NO = 496,
     NOCREATEDB = 497,
     NOCREATEROLE = 498,
     NOCREATEUSER = 499,
     NOINHERIT = 500,
     NOLOGIN_P = 501,
     NONE = 502,
     NOSUPERUSER = 503,
     NOT = 504,
     NOTHING = 505,
     NOTIFY = 506,
     NOTNULL = 507,
     NOWAIT = 508,
     NULL_P = 509,
     NULLIF = 510,
     NULLS_P = 511,
     NUMBER = 512,
     NUMERIC = 513,
     OBJECT_P = 514,
     OF = 515,
     OFF = 516,
     OFFSET = 517,
     OIDS = 518,
     OLD = 519,
     ON = 520,
     ONDEMAND = 521,
     ONLY = 522,
     OPERATOR = 523,
     OPTION = 524,
     OPTIONS = 525,
     OR = 526,
     ORDER = 527,
     OUT_P = 528,
     OUTER_P = 529,
     OVER = 530,
     OVERLAPS = 531,
     OVERLAY = 532,
     OWNED = 533,
     OWNER = 534,
     PARAMETERS = 535,
     PARSER = 536,
     PARTIAL = 537,
     PARTITION = 538,
     PASSWORD = 539,
     PLACING = 540,
     PLANS = 541,
     POSITION = 542,
     PRECEDING = 543,
     PRECISION = 544,
     PRESERVE = 545,
     PREPARE = 546,
     PREPARED = 547,
     PRIMARY = 548,
     PRINT = 549,
     PRIOR = 550,
     PRIVILEGES = 551,
     PROCEDURAL = 552,
     PROCEDURE = 553,
     QUARTER_P = 554,
     QUOTE = 555,
     RANGE = 556,
     READ = 557,
     REAL = 558,
     REASSIGN = 559,
     RECHECK = 560,
     RECURSIVE = 561,
     REESTIMATE = 562,
     REFERENCES = 563,
     REINDEX = 564,
     RELATIVE_P = 565,
     RELEASE = 566,
     RENAME = 567,
     REPEATABLE = 568,
     REPLACE = 569,
     REPLICA = 570,
     RESET = 571,
     RESTART = 572,
     RESTORE = 573,
     RESTRICT = 574,
     RETURNING = 575,
     RETURNS = 576,
     REVOKE = 577,
     RIGHT = 578,
     ROLE = 579,
     ROLLBACK = 580,
     ROW = 581,
     ROWS = 582,
     RULE = 583,
     SAVEPOINT = 584,
     SCHEMA = 585,
     SCROLL = 586,
     SEARCH = 587,
     SEASON = 588,
     SECOND_P = 589,
     SECURITY = 590,
     SELECT = 591,
     SEQUENCE = 592,
     SERIALIZABLE = 593,
     SERVER = 594,
     SESSION = 595,
     SESSION_USER = 596,
     SET = 597,
     SETOF = 598,
     SHARE = 599,
     SHOW = 600,
     SIMILAR = 601,
     SIMPLE = 602,
     SIMPLEREESTIMATE = 603,
     SMALLINT = 604,
     SOME = 605,
     STABLE = 606,
     STANDALONE_P = 607,
     START = 608,
     STATEMENT = 609,
     STATISTICS = 610,
     STRATEGY = 611,
     STDIN = 612,
     STDOUT = 613,
     STORAGE = 614,
     STORE = 615,
     STRICT_P = 616,
     STRIP_P = 617,
     SUBSTRING = 618,
     SUPERUSER_P = 619,
     SYMMETRIC = 620,
     SYSID = 621,
     SYSTEM_P = 622,
     TABLE = 623,
     TABLESPACE = 624,
     TEMP = 625,
     TEMPLATE = 626,
     TEMPORARY = 627,
     TEXT_P = 628,
     THEN = 629,
     TIME = 630,
     TIMESERIES = 631,
     TIMESTAMP = 632,
     TO = 633,
     TOPDOWN = 634,
     TRAILING = 635,
     TRAINING_DATA = 636,
     TRANSACTION = 637,
     TREAT = 638,
     TRIGGER = 639,
     TRIM = 640,
     TRUE_P = 641,
     TRUNCATE = 642,
     TRUSTED = 643,
     TYPE_P = 644,
     UNBOUNDED = 645,
     UNCOMMITTED = 646,
     UNENCRYPTED = 647,
     UNION = 648,
     UNIQUE = 649,
     UNKNOWN = 650,
     UNLISTEN = 651,
     UNTIL = 652,
     UPDATE = 653,
     USER = 654,
     USING = 655,
     VACUUM = 656,
     VALID = 657,
     VALIDATOR = 658,
     VALUE_P = 659,
     VALUES = 660,
     VARCHAR = 661,
     VARIADIC = 662,
     VARYING = 663,
     VERBOSE = 664,
     VERSION_P = 665,
     VIEW = 666,
     VOLATILE = 667,
     WEEK_P = 668,
     WHEN = 669,
     WHERE = 670,
     WHITESPACE_P = 671,
     WINDOW = 672,
     WITH = 673,
     WITHOUT = 674,
     WORK = 675,
     WRAPPER = 676,
     WRITE = 677,
     XML_P = 678,
     XMLATTRIBUTES = 679,
     XMLCONCAT = 680,
     XMLELEMENT = 681,
     XMLFOREST = 682,
     XMLPARSE = 683,
     XMLPI = 684,
     XMLROOT = 685,
     XMLSERIALIZE = 686,
     YEAR_P = 687,
     YES_P = 688,
     ZONE = 689,
     NULLS_FIRST = 690,
     NULLS_LAST = 691,
     WITH_TIME = 692,
     IDENT = 693,
     FCONST = 694,
     SCONST = 695,
     BCONST = 696,
     XCONST = 697,
     Op = 698,
     ICONST = 699,
     PARAM = 700,
     POSTFIXOP = 701,
     UMINUS = 702,
     TYPECAST = 703
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 150 "gram.y"

	int					ival;
	char				chr;
	char				*str;
	const char			*keyword;
	bool				boolean;
	JoinType			jtype;
	DropBehavior		dbehavior;
	OnCommitAction		oncommit;
	List				*list;
	Node				*node;
	Value				*value;
	ObjectType			objtype;

	TypeName			*typnam;
	FunctionParameter   *fun_param;
	FunctionParameterMode fun_param_mode;
	FuncWithArgs		*funwithargs;
	DefElem				*defelt;
	SortBy				*sortby;
	WindowDef			*windef;
	JoinExpr			*jexpr;
	IndexElem			*ielem;
	Alias				*alias;
	RangeVar			*range;
	IntoClause			*into;
	WithClause			*with;
	A_Indices			*aind;
	ResTarget			*target;
	struct PrivTarget	*privtarget;
	AccessPriv			*accesspriv;

	InsertStmt			*istmt;
	VariableSetStmt		*vsetstmt;
	
	GraphAttribute		*graphAttr;



/* Line 1676 of yacc.c  */
#line 540 "gram.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE base_yylval;

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYLTYPE base_yylloc;

