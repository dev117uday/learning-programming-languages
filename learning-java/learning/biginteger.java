import java.math.BigInteger;

public class Main {
    public static void main(String[] args) {
        BigInteger reallyBig = new BigInteger("222232244629420445529739893461909967206666939096499764990");
        reallyBig = reallyBig.add(BigInteger.valueOf(1));
        System.out.println(reallyBig.toString());
    }
}
