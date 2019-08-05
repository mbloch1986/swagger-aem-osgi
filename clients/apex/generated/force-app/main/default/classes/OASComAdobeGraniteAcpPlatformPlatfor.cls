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
 * OASComAdobeGraniteAcpPlatformPlatfor
 */
public class OASComAdobeGraniteAcpPlatformPlatfor implements OAS.MappedProperties {
    /**
     * Get queryLimit
     * @return queryLimit
     */
    public OASConfigNodePropertyInteger queryLimit { get; set; }

    /**
     * Get fileTypeExtensionMap
     * @return fileTypeExtensionMap
     */
    public OASConfigNodePropertyArray fileTypeExtensionMap { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'query.limit' => 'queryLimit',
        'file.type.extension.map' => 'fileTypeExtensionMap'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASComAdobeGraniteAcpPlatformPlatfor getExample() {
        OASComAdobeGraniteAcpPlatformPlatfor comAdobeGraniteAcpPlatformPlatformServletProperties = new OASComAdobeGraniteAcpPlatformPlatfor();
          comAdobeGraniteAcpPlatformPlatformServletProperties.queryLimit = OASConfigNodePropertyInteger.getExample();
          comAdobeGraniteAcpPlatformPlatformServletProperties.fileTypeExtensionMap = OASConfigNodePropertyArray.getExample();
        return comAdobeGraniteAcpPlatformPlatformServletProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComAdobeGraniteAcpPlatformPlatfor) {           
            OASComAdobeGraniteAcpPlatformPlatfor comAdobeGraniteAcpPlatformPlatformServletProperties = (OASComAdobeGraniteAcpPlatformPlatfor) obj;
            return this.queryLimit == comAdobeGraniteAcpPlatformPlatformServletProperties.queryLimit
                && this.fileTypeExtensionMap == comAdobeGraniteAcpPlatformPlatformServletProperties.fileTypeExtensionMap;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (queryLimit == null ? 0 : System.hashCode(queryLimit));
        hashCode = (17 * hashCode) + (fileTypeExtensionMap == null ? 0 : System.hashCode(fileTypeExtensionMap));
        return hashCode;
    }
}
