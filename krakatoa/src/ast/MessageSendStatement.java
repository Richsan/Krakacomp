package ast;

public class MessageSendStatement extends Statement { 


   public MessageSendStatement(MessageSend messageSend) {
	   this.messageSend = messageSend;
	}

	public void genC( PW pw ) {
	      pw.printIdent("");
	      // messageSend.genC(pw);
	      pw.println(";");
	   }

   private MessageSend  messageSend;

	@Override
	public void genKra(PW pw) {
		messageSend.genKra(pw);
		pw.println(";");
	}

}


