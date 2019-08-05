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
 * OASOrgApacheFelixScrScrServiceInfo
 */
public class OASOrgApacheFelixScrScrServiceInfo {
    /**
     * Get pid
     * @return pid
     */
    public String pid { get; set; }

    /**
     * Get title
     * @return title
     */
    public String title { get; set; }

    /**
     * Get description
     * @return description
     */
    public String description { get; set; }

    /**
     * Get properties
     * @return properties
     */
    public OASOrgApacheFelixScrScrServiceProper properties { get; set; }

    public static OASOrgApacheFelixScrScrServiceInfo getExample() {
        OASOrgApacheFelixScrScrServiceInfo orgApacheFelixScrScrServiceInfo = new OASOrgApacheFelixScrScrServiceInfo();
          orgApacheFelixScrScrServiceInfo.pid = '';
          orgApacheFelixScrScrServiceInfo.title = '';
          orgApacheFelixScrScrServiceInfo.description = '';
          orgApacheFelixScrScrServiceInfo.properties = OASOrgApacheFelixScrScrServiceProper.getExample();
        return orgApacheFelixScrScrServiceInfo;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASOrgApacheFelixScrScrServiceInfo) {           
            OASOrgApacheFelixScrScrServiceInfo orgApacheFelixScrScrServiceInfo = (OASOrgApacheFelixScrScrServiceInfo) obj;
            return this.pid == orgApacheFelixScrScrServiceInfo.pid
                && this.title == orgApacheFelixScrScrServiceInfo.title
                && this.description == orgApacheFelixScrScrServiceInfo.description
                && this.properties == orgApacheFelixScrScrServiceInfo.properties;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (pid == null ? 0 : System.hashCode(pid));
        hashCode = (17 * hashCode) + (title == null ? 0 : System.hashCode(title));
        hashCode = (17 * hashCode) + (description == null ? 0 : System.hashCode(description));
        hashCode = (17 * hashCode) + (properties == null ? 0 : System.hashCode(properties));
        return hashCode;
    }
}
