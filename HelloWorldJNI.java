public class HelloWorldJNI {

    static {
        System.loadLibrary("helloworldjni");
    }
    
    public static void main(String[] args) {
        HelloWorldJNI helloWorldJNI = new HelloWorldJNI();
	System.out.println(helloWorldJNI.add(2, 3));
    }

    private native int add(int a, int b);
}
