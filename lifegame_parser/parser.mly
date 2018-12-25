%{
  open Migrate_parsetree.Ast_404
  open Longident
  open Parsetree

  let loc = Relit.loc
%}

%token ALIVE
%token DEAD
%token EOF

%start <Migrate_parsetree.Ast_404.Parsetree.expression> board
%%

board:
  | b = cell EOF { b }

cell:
  | ALIVE
    { [%expr [Board.ALIVE]] }
  | DEAD
    { [%expr [Board.DEAD]] }
