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
 * OASOrgApacheFelixWebconsolePluginsEv
 */
public class OASOrgApacheFelixWebconsolePluginsEv implements OAS.MappedProperties {
    /**
     * Get maxSize
     * @return maxSize
     */
    public OASConfigNodePropertyInteger maxSize { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'max.size' => 'maxSize'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASOrgApacheFelixWebconsolePluginsEv getExample() {
        OASOrgApacheFelixWebconsolePluginsEv orgApacheFelixWebconsolePluginsEventInternalPluginServletProperties = new OASOrgApacheFelixWebconsolePluginsEv();
          orgApacheFelixWebconsolePluginsEventInternalPluginServletProperties.maxSize = OASConfigNodePropertyInteger.getExample();
        return orgApacheFelixWebconsolePluginsEventInternalPluginServletProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASOrgApacheFelixWebconsolePluginsEv) {           
            OASOrgApacheFelixWebconsolePluginsEv orgApacheFelixWebconsolePluginsEventInternalPluginServletProperties = (OASOrgApacheFelixWebconsolePluginsEv) obj;
            return this.maxSize == orgApacheFelixWebconsolePluginsEventInternalPluginServletProperties.maxSize;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (maxSize == null ? 0 : System.hashCode(maxSize));
        return hashCode;
    }
}
