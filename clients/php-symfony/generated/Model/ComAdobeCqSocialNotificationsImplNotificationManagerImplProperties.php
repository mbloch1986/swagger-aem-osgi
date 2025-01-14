<?php
/**
 * ComAdobeCqSocialNotificationsImplNotificationManagerImplProperties
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
 * Class representing the ComAdobeCqSocialNotificationsImplNotificationManagerImplProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComAdobeCqSocialNotificationsImplNotificationManagerImplProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("max.unread.notification.count")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $maxUnreadNotificationCount;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->maxUnreadNotificationCount = isset($data['maxUnreadNotificationCount']) ? $data['maxUnreadNotificationCount'] : null;
    }

    /**
     * Gets maxUnreadNotificationCount.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getMaxUnreadNotificationCount()
    {
        return $this->maxUnreadNotificationCount;
    }

    /**
     * Sets maxUnreadNotificationCount.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $maxUnreadNotificationCount
     *
     * @return $this
     */
    public function setMaxUnreadNotificationCount(ConfigNodePropertyInteger $maxUnreadNotificationCount = null)
    {
        $this->maxUnreadNotificationCount = $maxUnreadNotificationCount;

        return $this;
    }
}


