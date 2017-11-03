package bjsasc.com.testndkbuild;

/**
 * Created by pc on 2017/8/9.
 */

public class NdkJniUtils {
    static {
        System.loadLibrary("YanboberJniLibName");   //defaultConfig.ndk.moduleName
    }

    public native String getCLanguageString();

    public native String getTestString();

    public native String test();
}
