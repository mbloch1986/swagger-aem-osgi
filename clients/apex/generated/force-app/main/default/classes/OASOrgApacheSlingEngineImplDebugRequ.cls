/*
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OAS-api/OAS-codegen.git
 * Do not edit the class manually.
 */

/**
 * OASOrgApacheSlingEngineImplDebugRequ
 */
public class OASOrgApacheSlingEngineImplDebugRequ {
    /**
     * Get extensions
     * @return extensions
     */
    public OASConfigNodePropertyArray extensions { get; set; }

    /**
     * Get minDurationMs
     * @return minDurationMs
     */
    public OASConfigNodePropertyInteger minDurationMs { get; set; }

    /**
     * Get maxDurationMs
     * @return maxDurationMs
     */
    public OASConfigNodePropertyInteger maxDurationMs { get; set; }

    /**
     * Get compactLogFormat
     * @return compactLogFormat
     */
    public OASConfigNodePropertyBoolean compactLogFormat { get; set; }

    public static OASOrgApacheSlingEngineImplDebugRequ getExample() {
        OASOrgApacheSlingEngineImplDebugRequ orgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties = new OASOrgApacheSlingEngineImplDebugRequ();
          orgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties.extensions = OASConfigNodePropertyArray.getExample();
          orgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties.minDurationMs = OASConfigNodePropertyInteger.getExample();
          orgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties.maxDurationMs = OASConfigNodePropertyInteger.getExample();
          orgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties.compactLogFormat = OASConfigNodePropertyBoolean.getExample();
        return orgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASOrgApacheSlingEngineImplDebugRequ) {           
            OASOrgApacheSlingEngineImplDebugRequ orgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties = (OASOrgApacheSlingEngineImplDebugRequ) obj;
            return this.extensions == orgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties.extensions
                && this.minDurationMs == orgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties.minDurationMs
                && this.maxDurationMs == orgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties.maxDurationMs
                && this.compactLogFormat == orgApacheSlingEngineImplDebugRequestProgressTrackerLogFilterProperties.compactLogFormat;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (extensions == null ? 0 : System.hashCode(extensions));
        hashCode = (17 * hashCode) + (minDurationMs == null ? 0 : System.hashCode(minDurationMs));
        hashCode = (17 * hashCode) + (maxDurationMs == null ? 0 : System.hashCode(maxDurationMs));
        hashCode = (17 * hashCode) + (compactLogFormat == null ? 0 : System.hashCode(compactLogFormat));
        return hashCode;
    }
}
