import java.io.*;
import java.net.*;
public class Server {
  private Socket socket = null;
  private ServerSocket server = null;
  private DataInputStream in = null;

  public Server(int port) {
    try {
      server = new ServerSocket(port);
      System.out.print("Server started");
      System.out.print("Waiting for client...");
      socket = server.accept();
      System.out.println("Client accept");

      in = new DataInputStream(new BufferedInputStream(socket.getInputStream()));
      String line = "";
      while(!line.equals("Over")) {
        try {
          line = in.readUTF();
          System.out.println(line);
        }
        catch (Exception e) {
          System.out.println(e);
        }
      }
      System.out.println("Closing connection");
      socket.close();
      in.close();
    }
    catch (Exception e) {
      System.out.println(e);
    }
  }
  public static void main(String[] args) {
    Server server = new Server(5000);
  }
}
