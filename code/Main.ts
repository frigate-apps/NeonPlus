import neon;
import neon.type;
import neon.let;
import neon.func;
import neon.string;

public type Main {
    
    public type func void main (string[] args) {
        System.out.println("Hello World!");
    }
    
    let addNum(let a, let b) {
        return a + b ;
    }
    
}

