public class Program {
    public static void main(String[] args) {
        Animal animal = new Animal();
        System.out.println(animal.favFood);
        System.out.println(animal.getName());

        Cats morris = new Cats("Morris","Tune","Ball");
        System.out.println(morris.getName());
        System.out.println(morris.getToy());
        System.out.println(morris.favFood);

        Animal tobby = new Cats("harry","milk","Sweater");
        acceptAnimal(tobby);
    }
    public static void acceptAnimal(Animal animal)
    {
        System.out.println(animal.getName());
        System.out.println(animal.favFood);
        animal.walkAround();
        /*
        * This doesn't work properly
        * */
        // System.out.println(animal.favToy);

        System.out.println(((Cats) animal).favToy);
    }
}
