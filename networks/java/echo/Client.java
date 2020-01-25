import java.io.*;
import java.net.*;
public class Client {
  private Socket socket = null;
  private DataInputStream input = null;
  private DataOutputStream out = null;

  public Client(String address, int port) {
    try {
      socket = new Socket(address, port);
      System.out.println("Connected");
      input = new DataInputStream(System.in);
      out = new DataOutputStream(socket.getOutputStream());
    }
    catch (Exception e) {
      System.out.println(e);
    }
    String line = "";
    while(!line.equals("Over")) {
      try {
        line = input.readLine();
        out.writeUTF(line);
      }
      catch (Exception e) {
        System.out.println(e);
      }
    }
    try {
      input.close();
      out.close();
      socket.close();
    }
    catch (Exception e) {
      System.out.println(e);
    }
  }
  public static void main(String[] args) {
    Client client = new Client("localhost", 5000);
  }
}
