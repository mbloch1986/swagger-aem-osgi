<?php
/**
 * OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Adobe Experience Manager OSGI config (AEM) API
 *
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("jasper.compilerTargetVM")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $jasperCompilerTargetVM;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("jasper.compilerSourceVM")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $jasperCompilerSourceVM;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("jasper.classdebuginfo")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $jasperClassdebuginfo;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("jasper.enablePooling")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $jasperEnablePooling;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyString|null
     * @SerializedName("jasper.ieClassId")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyString")
     */
    protected $jasperIeClassId;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("jasper.genStringAsCharArray")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $jasperGenStringAsCharArray;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("jasper.keepgenerated")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $jasperKeepgenerated;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("jasper.mappedfile")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $jasperMappedfile;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("jasper.trimSpaces")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $jasperTrimSpaces;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("jasper.displaySourceFragments")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $jasperDisplaySourceFragments;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("default.is.session")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $defaultIsSession;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->jasperCompilerTargetVM = isset($data['jasperCompilerTargetVM']) ? $data['jasperCompilerTargetVM'] : null;
        $this->jasperCompilerSourceVM = isset($data['jasperCompilerSourceVM']) ? $data['jasperCompilerSourceVM'] : null;
        $this->jasperClassdebuginfo = isset($data['jasperClassdebuginfo']) ? $data['jasperClassdebuginfo'] : null;
        $this->jasperEnablePooling = isset($data['jasperEnablePooling']) ? $data['jasperEnablePooling'] : null;
        $this->jasperIeClassId = isset($data['jasperIeClassId']) ? $data['jasperIeClassId'] : null;
        $this->jasperGenStringAsCharArray = isset($data['jasperGenStringAsCharArray']) ? $data['jasperGenStringAsCharArray'] : null;
        $this->jasperKeepgenerated = isset($data['jasperKeepgenerated']) ? $data['jasperKeepgenerated'] : null;
        $this->jasperMappedfile = isset($data['jasperMappedfile']) ? $data['jasperMappedfile'] : null;
        $this->jasperTrimSpaces = isset($data['jasperTrimSpaces']) ? $data['jasperTrimSpaces'] : null;
        $this->jasperDisplaySourceFragments = isset($data['jasperDisplaySourceFragments']) ? $data['jasperDisplaySourceFragments'] : null;
        $this->defaultIsSession = isset($data['defaultIsSession']) ? $data['defaultIsSession'] : null;
    }

    /**
     * Gets jasperCompilerTargetVM.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getJasperCompilerTargetVM()
    {
        return $this->jasperCompilerTargetVM;
    }

    /**
     * Sets jasperCompilerTargetVM.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $jasperCompilerTargetVM
     *
     * @return $this
     */
    public function setJasperCompilerTargetVM(ConfigNodePropertyString $jasperCompilerTargetVM = null)
    {
        $this->jasperCompilerTargetVM = $jasperCompilerTargetVM;

        return $this;
    }

    /**
     * Gets jasperCompilerSourceVM.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getJasperCompilerSourceVM()
    {
        return $this->jasperCompilerSourceVM;
    }

    /**
     * Sets jasperCompilerSourceVM.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $jasperCompilerSourceVM
     *
     * @return $this
     */
    public function setJasperCompilerSourceVM(ConfigNodePropertyString $jasperCompilerSourceVM = null)
    {
        $this->jasperCompilerSourceVM = $jasperCompilerSourceVM;

        return $this;
    }

    /**
     * Gets jasperClassdebuginfo.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getJasperClassdebuginfo()
    {
        return $this->jasperClassdebuginfo;
    }

    /**
     * Sets jasperClassdebuginfo.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $jasperClassdebuginfo
     *
     * @return $this
     */
    public function setJasperClassdebuginfo(ConfigNodePropertyBoolean $jasperClassdebuginfo = null)
    {
        $this->jasperClassdebuginfo = $jasperClassdebuginfo;

        return $this;
    }

    /**
     * Gets jasperEnablePooling.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getJasperEnablePooling()
    {
        return $this->jasperEnablePooling;
    }

    /**
     * Sets jasperEnablePooling.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $jasperEnablePooling
     *
     * @return $this
     */
    public function setJasperEnablePooling(ConfigNodePropertyBoolean $jasperEnablePooling = null)
    {
        $this->jasperEnablePooling = $jasperEnablePooling;

        return $this;
    }

    /**
     * Gets jasperIeClassId.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyString|null
     */
    public function getJasperIeClassId()
    {
        return $this->jasperIeClassId;
    }

    /**
     * Sets jasperIeClassId.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyString|null $jasperIeClassId
     *
     * @return $this
     */
    public function setJasperIeClassId(ConfigNodePropertyString $jasperIeClassId = null)
    {
        $this->jasperIeClassId = $jasperIeClassId;

        return $this;
    }

    /**
     * Gets jasperGenStringAsCharArray.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getJasperGenStringAsCharArray()
    {
        return $this->jasperGenStringAsCharArray;
    }

    /**
     * Sets jasperGenStringAsCharArray.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $jasperGenStringAsCharArray
     *
     * @return $this
     */
    public function setJasperGenStringAsCharArray(ConfigNodePropertyBoolean $jasperGenStringAsCharArray = null)
    {
        $this->jasperGenStringAsCharArray = $jasperGenStringAsCharArray;

        return $this;
    }

    /**
     * Gets jasperKeepgenerated.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getJasperKeepgenerated()
    {
        return $this->jasperKeepgenerated;
    }

    /**
     * Sets jasperKeepgenerated.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $jasperKeepgenerated
     *
     * @return $this
     */
    public function setJasperKeepgenerated(ConfigNodePropertyBoolean $jasperKeepgenerated = null)
    {
        $this->jasperKeepgenerated = $jasperKeepgenerated;

        return $this;
    }

    /**
     * Gets jasperMappedfile.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getJasperMappedfile()
    {
        return $this->jasperMappedfile;
    }

    /**
     * Sets jasperMappedfile.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $jasperMappedfile
     *
     * @return $this
     */
    public function setJasperMappedfile(ConfigNodePropertyBoolean $jasperMappedfile = null)
    {
        $this->jasperMappedfile = $jasperMappedfile;

        return $this;
    }

    /**
     * Gets jasperTrimSpaces.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getJasperTrimSpaces()
    {
        return $this->jasperTrimSpaces;
    }

    /**
     * Sets jasperTrimSpaces.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $jasperTrimSpaces
     *
     * @return $this
     */
    public function setJasperTrimSpaces(ConfigNodePropertyBoolean $jasperTrimSpaces = null)
    {
        $this->jasperTrimSpaces = $jasperTrimSpaces;

        return $this;
    }

    /**
     * Gets jasperDisplaySourceFragments.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getJasperDisplaySourceFragments()
    {
        return $this->jasperDisplaySourceFragments;
    }

    /**
     * Sets jasperDisplaySourceFragments.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $jasperDisplaySourceFragments
     *
     * @return $this
     */
    public function setJasperDisplaySourceFragments(ConfigNodePropertyBoolean $jasperDisplaySourceFragments = null)
    {
        $this->jasperDisplaySourceFragments = $jasperDisplaySourceFragments;

        return $this;
    }

    /**
     * Gets defaultIsSession.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getDefaultIsSession()
    {
        return $this->defaultIsSession;
    }

    /**
     * Sets defaultIsSession.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $defaultIsSession
     *
     * @return $this
     */
    public function setDefaultIsSession(ConfigNodePropertyBoolean $defaultIsSession = null)
    {
        $this->defaultIsSession = $defaultIsSession;

        return $this;
    }
}

