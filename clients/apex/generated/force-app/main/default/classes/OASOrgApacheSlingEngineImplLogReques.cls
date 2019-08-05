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
 * OASOrgApacheSlingEngineImplLogReques
 */
public class OASOrgApacheSlingEngineImplLogReques implements OAS.MappedProperties {
    /**
     * Get requestLogServiceFormat
     * @return requestLogServiceFormat
     */
    public OASConfigNodePropertyString requestLogServiceFormat { get; set; }

    /**
     * Get requestLogServiceOutput
     * @return requestLogServiceOutput
     */
    public OASConfigNodePropertyString requestLogServiceOutput { get; set; }

    /**
     * Get requestLogServiceOutputtype
     * @return requestLogServiceOutputtype
     */
    public OASConfigNodePropertyDropDown requestLogServiceOutputtype { get; set; }

    /**
     * Get requestLogServiceOnentry
     * @return requestLogServiceOnentry
     */
    public OASConfigNodePropertyBoolean requestLogServiceOnentry { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'request.log.service.format' => 'requestLogServiceFormat',
        'request.log.service.output' => 'requestLogServiceOutput',
        'request.log.service.outputtype' => 'requestLogServiceOutputtype',
        'request.log.service.onentry' => 'requestLogServiceOnentry'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASOrgApacheSlingEngineImplLogReques getExample() {
        OASOrgApacheSlingEngineImplLogReques orgApacheSlingEngineImplLogRequestLoggerServiceProperties = new OASOrgApacheSlingEngineImplLogReques();
          orgApacheSlingEngineImplLogRequestLoggerServiceProperties.requestLogServiceFormat = OASConfigNodePropertyString.getExample();
          orgApacheSlingEngineImplLogRequestLoggerServiceProperties.requestLogServiceOutput = OASConfigNodePropertyString.getExample();
          orgApacheSlingEngineImplLogRequestLoggerServiceProperties.requestLogServiceOutputtype = OASConfigNodePropertyDropDown.getExample();
          orgApacheSlingEngineImplLogRequestLoggerServiceProperties.requestLogServiceOnentry = OASConfigNodePropertyBoolean.getExample();
        return orgApacheSlingEngineImplLogRequestLoggerServiceProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASOrgApacheSlingEngineImplLogReques) {           
            OASOrgApacheSlingEngineImplLogReques orgApacheSlingEngineImplLogRequestLoggerServiceProperties = (OASOrgApacheSlingEngineImplLogReques) obj;
            return this.requestLogServiceFormat == orgApacheSlingEngineImplLogRequestLoggerServiceProperties.requestLogServiceFormat
                && this.requestLogServiceOutput == orgApacheSlingEngineImplLogRequestLoggerServiceProperties.requestLogServiceOutput
                && this.requestLogServiceOutputtype == orgApacheSlingEngineImplLogRequestLoggerServiceProperties.requestLogServiceOutputtype
                && this.requestLogServiceOnentry == orgApacheSlingEngineImplLogRequestLoggerServiceProperties.requestLogServiceOnentry;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (requestLogServiceFormat == null ? 0 : System.hashCode(requestLogServiceFormat));
        hashCode = (17 * hashCode) + (requestLogServiceOutput == null ? 0 : System.hashCode(requestLogServiceOutput));
        hashCode = (17 * hashCode) + (requestLogServiceOutputtype == null ? 0 : System.hashCode(requestLogServiceOutputtype));
        hashCode = (17 * hashCode) + (requestLogServiceOnentry == null ? 0 : System.hashCode(requestLogServiceOnentry));
        return hashCode;
    }
}
