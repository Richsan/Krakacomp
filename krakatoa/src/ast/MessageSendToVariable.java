package ast;


public class MessageSendToVariable extends MessageSend { 

	private MessageSend sender;
	private Variable v;
	
	public MessageSendToVariable(MessageSend sender, Variable v) {
		this.sender = sender;
		this.v = v;
	}
	
	
    public Type getType() { 
        return v.getType();
    }
    
    public void genC( PW pw, boolean putParenthesis ) {
        
    }

	@Override
	public void genKra(PW pw) {
		if (sender instanceof VariableExpr) {
			pw.print(v.getName() + ".");
			sender.genKra(pw);
		} else {
			sender.genKra(pw);
			pw.print(v.getName());
		}
	}

    
}    