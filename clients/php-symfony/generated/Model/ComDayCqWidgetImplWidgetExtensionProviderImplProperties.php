<?php
/**
 * ComDayCqWidgetImplWidgetExtensionProviderImplProperties
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
 * Class representing the ComDayCqWidgetImplWidgetExtensionProviderImplProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqWidgetImplWidgetExtensionProviderImplProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyArray|null
     * @SerializedName("extendable.widgets")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyArray")
     */
    protected $extendableWidgets;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("widgetextensionprovider.debug")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $widgetextensionproviderDebug;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->extendableWidgets = isset($data['extendableWidgets']) ? $data['extendableWidgets'] : null;
        $this->widgetextensionproviderDebug = isset($data['widgetextensionproviderDebug']) ? $data['widgetextensionproviderDebug'] : null;
    }

    /**
     * Gets extendableWidgets.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyArray|null
     */
    public function getExtendableWidgets()
    {
        return $this->extendableWidgets;
    }

    /**
     * Sets extendableWidgets.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyArray|null $extendableWidgets
     *
     * @return $this
     */
    public function setExtendableWidgets(ConfigNodePropertyArray $extendableWidgets = null)
    {
        $this->extendableWidgets = $extendableWidgets;

        return $this;
    }

    /**
     * Gets widgetextensionproviderDebug.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getWidgetextensionproviderDebug()
    {
        return $this->widgetextensionproviderDebug;
    }

    /**
     * Sets widgetextensionproviderDebug.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $widgetextensionproviderDebug
     *
     * @return $this
     */
    public function setWidgetextensionproviderDebug(ConfigNodePropertyBoolean $widgetextensionproviderDebug = null)
    {
        $this->widgetextensionproviderDebug = $widgetextensionproviderDebug;

        return $this;
    }
}


