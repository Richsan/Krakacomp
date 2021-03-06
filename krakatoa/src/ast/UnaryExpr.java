/*
Primeiro Trabalho de Laboratório de Compiladores
 
Segundo Semestre de 2016.
Campus de Sorocaba da UFSCar
Prof. José de Oliveira Guimarães
 
Grupo:
Nome: Guilherme José Carvalho Gois
Nome: Henrique Manoel de Lima Sebastião
 */

package ast;

import lexer.*;

public class UnaryExpr extends Expr {

	public UnaryExpr(Expr expr, Symbol op) {
		this.expr = expr;
		this.op = op;
	}

	@Override
	public void genC(PW pw, boolean putParenthesis) {
		switch (op) {
		case PLUS:
			pw.print("+");
			break;
		case MINUS:
			pw.print("-");
			break;
		case NOT:
			pw.print("!");
			break;
		default:
			pw.print(" internal error at UnaryExpr::genC");

		}
		expr.genC(pw, false);
	}

	@Override
	public Type getType() {
		return expr.getType();
	}

	private Expr	expr;
	private Symbol	op;
	@Override
	public void genKra(PW pw) {
		switch (op) {
		case PLUS:
			expr.genKra(pw);
			pw.print("+");
			break;
		case MINUS:
			expr.genKra(pw);
			pw.print("-");
			break;
		case NOT:
			pw.print("!");
			expr.genKra(pw);
			break;
		default:
			pw.print(" internal error at UnaryExpr::genKra");
		}
	}
}
