import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;



public class mul_table   {
	
    public static void main(String[] args) throws IOException {
        BufferedReader buffdReader = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(buffdReader.readLine().trim());
       
        for (int i=1;i<=10;i++){
            int result=N*i;
            System.out.println(N +" x "+ i+ " = "+ result);
            
        }

        buffdReader.close();
    }
}
