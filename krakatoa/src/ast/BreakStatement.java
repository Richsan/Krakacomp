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

public class BreakStatement extends Statement {

	@Override
	public void genC(PW pw) {
		pw.printlnIdent("break;");
	}

	@Override
	public void genKra(PW pw) {
		pw.printlnIdent("break;");
	}

}
