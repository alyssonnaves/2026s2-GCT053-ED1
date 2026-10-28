import java.util.ArrayList;

public class App {
    public static void main(String[] args) {
        ArrayList<Integer> numbers = new ArrayList<>();
        numbers.ensureCapacity(80);
        numbers.add(5);
        System.out.println(numbers);
        numbers.add(8);
        System.out.println(numbers);

        for (int i = 0; i < 20; i++) {
            numbers.add(10*(i+1));
            System.out.println(numbers);
        }
        
    }
}
