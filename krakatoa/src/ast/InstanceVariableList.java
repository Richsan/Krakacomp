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

import java.util.*;

public class InstanceVariableList {

    public InstanceVariableList() {
       instanceVariableList = new ArrayList<InstanceVariable>();
    }

    public boolean addElement(InstanceVariable instanceVariable) {
      if (instanceVariableList.contains(instanceVariable))
        return false;

      instanceVariableList.add( instanceVariable );
      
      return true;
    }
    
    public Variable searchVariable(String name)
    {
     	
 	  	for(Variable vSearch: this.instanceVariableList) {
 	   		if(name.equals(vSearch.getName()))
 	  			return vSearch;
 	   	}
 	  	
 	    return null;

    }

    public Iterator<InstanceVariable> elements() {
    	return this.instanceVariableList.iterator();
    }

    public int getSize() {
        return instanceVariableList.size();
    }

    private ArrayList<InstanceVariable> instanceVariableList;

	public void genKra(PW pw) {
		for (Iterator<InstanceVariable> iterator = elements(); iterator.hasNext(); ) {
			iterator.next().genKra(pw);
		}
	}

}
