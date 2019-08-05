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
 * OASOrgApacheSlingScriptingJspJspScri
 */
public class OASOrgApacheSlingScriptingJspJspScri implements OAS.MappedProperties {
    /**
     * Get jasperCompilerTargetVM
     * @return jasperCompilerTargetVM
     */
    public OASConfigNodePropertyString jasperCompilerTargetVM { get; set; }

    /**
     * Get jasperCompilerSourceVM
     * @return jasperCompilerSourceVM
     */
    public OASConfigNodePropertyString jasperCompilerSourceVM { get; set; }

    /**
     * Get jasperClassdebuginfo
     * @return jasperClassdebuginfo
     */
    public OASConfigNodePropertyBoolean jasperClassdebuginfo { get; set; }

    /**
     * Get jasperEnablePooling
     * @return jasperEnablePooling
     */
    public OASConfigNodePropertyBoolean jasperEnablePooling { get; set; }

    /**
     * Get jasperIeClassId
     * @return jasperIeClassId
     */
    public OASConfigNodePropertyString jasperIeClassId { get; set; }

    /**
     * Get jasperGenStringAsCharArray
     * @return jasperGenStringAsCharArray
     */
    public OASConfigNodePropertyBoolean jasperGenStringAsCharArray { get; set; }

    /**
     * Get jasperKeepgenerated
     * @return jasperKeepgenerated
     */
    public OASConfigNodePropertyBoolean jasperKeepgenerated { get; set; }

    /**
     * Get jasperMappedfile
     * @return jasperMappedfile
     */
    public OASConfigNodePropertyBoolean jasperMappedfile { get; set; }

    /**
     * Get jasperTrimSpaces
     * @return jasperTrimSpaces
     */
    public OASConfigNodePropertyBoolean jasperTrimSpaces { get; set; }

    /**
     * Get jasperDisplaySourceFragments
     * @return jasperDisplaySourceFragments
     */
    public OASConfigNodePropertyBoolean jasperDisplaySourceFragments { get; set; }

    /**
     * Get defaultIsSession
     * @return defaultIsSession
     */
    public OASConfigNodePropertyBoolean defaultIsSession { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'jasper.compilerTargetVM' => 'jasperCompilerTargetVM',
        'jasper.compilerSourceVM' => 'jasperCompilerSourceVM',
        'jasper.classdebuginfo' => 'jasperClassdebuginfo',
        'jasper.enablePooling' => 'jasperEnablePooling',
        'jasper.ieClassId' => 'jasperIeClassId',
        'jasper.genStringAsCharArray' => 'jasperGenStringAsCharArray',
        'jasper.keepgenerated' => 'jasperKeepgenerated',
        'jasper.mappedfile' => 'jasperMappedfile',
        'jasper.trimSpaces' => 'jasperTrimSpaces',
        'jasper.displaySourceFragments' => 'jasperDisplaySourceFragments',
        'default.is.session' => 'defaultIsSession'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASOrgApacheSlingScriptingJspJspScri getExample() {
        OASOrgApacheSlingScriptingJspJspScri orgApacheSlingScriptingJspJspScriptEngineFactoryProperties = new OASOrgApacheSlingScriptingJspJspScri();
          orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperCompilerTargetVM = OASConfigNodePropertyString.getExample();
          orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperCompilerSourceVM = OASConfigNodePropertyString.getExample();
          orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperClassdebuginfo = OASConfigNodePropertyBoolean.getExample();
          orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperEnablePooling = OASConfigNodePropertyBoolean.getExample();
          orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperIeClassId = OASConfigNodePropertyString.getExample();
          orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperGenStringAsCharArray = OASConfigNodePropertyBoolean.getExample();
          orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperKeepgenerated = OASConfigNodePropertyBoolean.getExample();
          orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperMappedfile = OASConfigNodePropertyBoolean.getExample();
          orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperTrimSpaces = OASConfigNodePropertyBoolean.getExample();
          orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperDisplaySourceFragments = OASConfigNodePropertyBoolean.getExample();
          orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.defaultIsSession = OASConfigNodePropertyBoolean.getExample();
        return orgApacheSlingScriptingJspJspScriptEngineFactoryProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASOrgApacheSlingScriptingJspJspScri) {           
            OASOrgApacheSlingScriptingJspJspScri orgApacheSlingScriptingJspJspScriptEngineFactoryProperties = (OASOrgApacheSlingScriptingJspJspScri) obj;
            return this.jasperCompilerTargetVM == orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperCompilerTargetVM
                && this.jasperCompilerSourceVM == orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperCompilerSourceVM
                && this.jasperClassdebuginfo == orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperClassdebuginfo
                && this.jasperEnablePooling == orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperEnablePooling
                && this.jasperIeClassId == orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperIeClassId
                && this.jasperGenStringAsCharArray == orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperGenStringAsCharArray
                && this.jasperKeepgenerated == orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperKeepgenerated
                && this.jasperMappedfile == orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperMappedfile
                && this.jasperTrimSpaces == orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperTrimSpaces
                && this.jasperDisplaySourceFragments == orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.jasperDisplaySourceFragments
                && this.defaultIsSession == orgApacheSlingScriptingJspJspScriptEngineFactoryProperties.defaultIsSession;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (jasperCompilerTargetVM == null ? 0 : System.hashCode(jasperCompilerTargetVM));
        hashCode = (17 * hashCode) + (jasperCompilerSourceVM == null ? 0 : System.hashCode(jasperCompilerSourceVM));
        hashCode = (17 * hashCode) + (jasperClassdebuginfo == null ? 0 : System.hashCode(jasperClassdebuginfo));
        hashCode = (17 * hashCode) + (jasperEnablePooling == null ? 0 : System.hashCode(jasperEnablePooling));
        hashCode = (17 * hashCode) + (jasperIeClassId == null ? 0 : System.hashCode(jasperIeClassId));
        hashCode = (17 * hashCode) + (jasperGenStringAsCharArray == null ? 0 : System.hashCode(jasperGenStringAsCharArray));
        hashCode = (17 * hashCode) + (jasperKeepgenerated == null ? 0 : System.hashCode(jasperKeepgenerated));
        hashCode = (17 * hashCode) + (jasperMappedfile == null ? 0 : System.hashCode(jasperMappedfile));
        hashCode = (17 * hashCode) + (jasperTrimSpaces == null ? 0 : System.hashCode(jasperTrimSpaces));
        hashCode = (17 * hashCode) + (jasperDisplaySourceFragments == null ? 0 : System.hashCode(jasperDisplaySourceFragments));
        hashCode = (17 * hashCode) + (defaultIsSession == null ? 0 : System.hashCode(defaultIsSession));
        return hashCode;
    }
}
