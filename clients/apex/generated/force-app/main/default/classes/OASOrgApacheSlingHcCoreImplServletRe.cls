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
 * OASOrgApacheSlingHcCoreImplServletRe
 */
public class OASOrgApacheSlingHcCoreImplServletRe {
    /**
     * Get totalWidth
     * @return totalWidth
     */
    public OASConfigNodePropertyInteger totalWidth { get; set; }

    /**
     * Get colWidthName
     * @return colWidthName
     */
    public OASConfigNodePropertyInteger colWidthName { get; set; }

    /**
     * Get colWidthResult
     * @return colWidthResult
     */
    public OASConfigNodePropertyInteger colWidthResult { get; set; }

    /**
     * Get colWidthTiming
     * @return colWidthTiming
     */
    public OASConfigNodePropertyInteger colWidthTiming { get; set; }

    public static OASOrgApacheSlingHcCoreImplServletRe getExample() {
        OASOrgApacheSlingHcCoreImplServletRe orgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties = new OASOrgApacheSlingHcCoreImplServletRe();
          orgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties.totalWidth = OASConfigNodePropertyInteger.getExample();
          orgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties.colWidthName = OASConfigNodePropertyInteger.getExample();
          orgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties.colWidthResult = OASConfigNodePropertyInteger.getExample();
          orgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties.colWidthTiming = OASConfigNodePropertyInteger.getExample();
        return orgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASOrgApacheSlingHcCoreImplServletRe) {           
            OASOrgApacheSlingHcCoreImplServletRe orgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties = (OASOrgApacheSlingHcCoreImplServletRe) obj;
            return this.totalWidth == orgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties.totalWidth
                && this.colWidthName == orgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties.colWidthName
                && this.colWidthResult == orgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties.colWidthResult
                && this.colWidthTiming == orgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties.colWidthTiming;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (totalWidth == null ? 0 : System.hashCode(totalWidth));
        hashCode = (17 * hashCode) + (colWidthName == null ? 0 : System.hashCode(colWidthName));
        hashCode = (17 * hashCode) + (colWidthResult == null ? 0 : System.hashCode(colWidthResult));
        hashCode = (17 * hashCode) + (colWidthTiming == null ? 0 : System.hashCode(colWidthTiming));
        return hashCode;
    }
}
