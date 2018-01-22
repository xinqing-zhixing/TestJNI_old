package hu.mobile.testcmake;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

public class TestCMakeActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("nativeLib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_test_cmake);

        // Example of a call to a native method

        Log.i("-----jni","C++ -------------------------------------------------------------------------------------");
        TextView testCppTV = (TextView) findViewById(R.id.testCppTV);
        testCppTV.setText(stringFromCPP());

        Log.i("-----jni","C -------------------------------------------------------------------------------------");
        TextView testCTV = (TextView) findViewById(R.id.testCTV);
        testCTV.setText(stringFromC());

//        testCppLog();
        //c语言测试
//        testDataType();
//        testVariable();
//        testPointer();
        testArray();
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromCPP();
    public native String stringFromC();
    public native void testCppLog();

    public native void testDataType();
    public native void testVariable();
    public native void testPointer();
    public native void testArray();


}
