<?php
/**
 * ComDayCqReplicationImplReplicationContentFactoryProviderImplProperties
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
 * Class representing the ComDayCqReplicationImplReplicationContentFactoryProviderImplProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqReplicationImplReplicationContentFactoryProviderImplProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     * @SerializedName("replication.content.useFileStorage")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyBoolean")
     */
    protected $replicationContentUseFileStorage;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("replication.content.maxCommitAttempts")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $replicationContentMaxCommitAttempts;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->replicationContentUseFileStorage = isset($data['replicationContentUseFileStorage']) ? $data['replicationContentUseFileStorage'] : null;
        $this->replicationContentMaxCommitAttempts = isset($data['replicationContentMaxCommitAttempts']) ? $data['replicationContentMaxCommitAttempts'] : null;
    }

    /**
     * Gets replicationContentUseFileStorage.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyBoolean|null
     */
    public function getReplicationContentUseFileStorage()
    {
        return $this->replicationContentUseFileStorage;
    }

    /**
     * Sets replicationContentUseFileStorage.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyBoolean|null $replicationContentUseFileStorage
     *
     * @return $this
     */
    public function setReplicationContentUseFileStorage(ConfigNodePropertyBoolean $replicationContentUseFileStorage = null)
    {
        $this->replicationContentUseFileStorage = $replicationContentUseFileStorage;

        return $this;
    }

    /**
     * Gets replicationContentMaxCommitAttempts.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getReplicationContentMaxCommitAttempts()
    {
        return $this->replicationContentMaxCommitAttempts;
    }

    /**
     * Sets replicationContentMaxCommitAttempts.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $replicationContentMaxCommitAttempts
     *
     * @return $this
     */
    public function setReplicationContentMaxCommitAttempts(ConfigNodePropertyInteger $replicationContentMaxCommitAttempts = null)
    {
        $this->replicationContentMaxCommitAttempts = $replicationContentMaxCommitAttempts;

        return $this;
    }
}


