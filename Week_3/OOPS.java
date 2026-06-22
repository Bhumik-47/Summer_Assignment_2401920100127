import java.util.Random;

abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    public String notice() {
        return "This is a First Class compartment";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "This is a Ladies compartment";
    }
}

class General extends Compartment {
    public String notice() {
        return "This is a General compartment";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "This is a Luggage compartment";
    }
}

class TestCompartment {
    public static void main(String[] args) {
        
        Compartment c[] = new Compartment[10];
        Random rand = new Random();

        
        for (int i = 0; i < c.length; i++) {
           
            int randomNum = rand.nextInt(4) + 1; 

            switch (randomNum) {
                case 1:
                    c[i] = new FirstClass();
                    break;
                case 2:
                    c[i] = new Ladies();
                    break;
                case 3:
                    c[i] = new General();
                    break;
                case 4:
                    c[i] = new Luggage();
                    break;
            }
        }

       
        for (int i = 0; i < c.length; i++) {
            System.out.println("Compartment " + (i + 1) + ": " + c[i].notice());
        }
    }
}