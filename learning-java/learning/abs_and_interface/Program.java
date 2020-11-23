public class Program
{
    public static void main(String[] args)
    {
        Vehicle myCar = new Vehicle(4,88);
        System.out.println("Cars max speed : " + myCar.getSpeed());
        System.out.println("Car has max wheels : " + myCar.getWheel());
        myCar.setCarStrength(20);
        System.out.println("Current Strength of Car : " + myCar.getCarStrength());
    }
}