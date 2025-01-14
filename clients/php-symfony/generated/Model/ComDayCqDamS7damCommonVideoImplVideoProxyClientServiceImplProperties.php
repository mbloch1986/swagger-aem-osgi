<?php
/**
 * ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties
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
 * Class representing the ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties 
{
        /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("cq.dam.s7dam.videoproxyclientservice.multipartupload.minsize.name")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("cq.dam.s7dam.videoproxyclientservice.multipartupload.partsize.name")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("cq.dam.s7dam.videoproxyclientservice.multipartupload.numthread.name")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("cq.dam.s7dam.videoproxyclientservice.http.readtimeout.name")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $cqDamS7damVideoproxyclientserviceHttpReadtimeoutName;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("cq.dam.s7dam.videoproxyclientservice.http.connectiontimeout.name")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("cq.dam.s7dam.videoproxyclientservice.http.maxretrycount.name")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $cqDamS7damVideoproxyclientserviceHttpMaxretrycountName;

    /**
     * @var OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     * @SerializedName("cq.dam.s7dam.videoproxyclientservice.uploadprogress.interval.name")
     * @Assert\Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     * @Type("OpenAPI\Server\Model\ConfigNodePropertyInteger")
     */
    protected $cqDamS7damVideoproxyclientserviceUploadprogressIntervalName;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName = isset($data['cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName']) ? $data['cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName'] : null;
        $this->cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName = isset($data['cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName']) ? $data['cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName'] : null;
        $this->cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName = isset($data['cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName']) ? $data['cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName'] : null;
        $this->cqDamS7damVideoproxyclientserviceHttpReadtimeoutName = isset($data['cqDamS7damVideoproxyclientserviceHttpReadtimeoutName']) ? $data['cqDamS7damVideoproxyclientserviceHttpReadtimeoutName'] : null;
        $this->cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName = isset($data['cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName']) ? $data['cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName'] : null;
        $this->cqDamS7damVideoproxyclientserviceHttpMaxretrycountName = isset($data['cqDamS7damVideoproxyclientserviceHttpMaxretrycountName']) ? $data['cqDamS7damVideoproxyclientserviceHttpMaxretrycountName'] : null;
        $this->cqDamS7damVideoproxyclientserviceUploadprogressIntervalName = isset($data['cqDamS7damVideoproxyclientserviceUploadprogressIntervalName']) ? $data['cqDamS7damVideoproxyclientserviceUploadprogressIntervalName'] : null;
    }

    /**
     * Gets cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getCqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName()
    {
        return $this->cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName;
    }

    /**
     * Sets cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName
     *
     * @return $this
     */
    public function setCqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName(ConfigNodePropertyInteger $cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName = null)
    {
        $this->cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName = $cqDamS7damVideoproxyclientserviceMultipartuploadMinsizeName;

        return $this;
    }

    /**
     * Gets cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getCqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName()
    {
        return $this->cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName;
    }

    /**
     * Sets cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName
     *
     * @return $this
     */
    public function setCqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName(ConfigNodePropertyInteger $cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName = null)
    {
        $this->cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName = $cqDamS7damVideoproxyclientserviceMultipartuploadPartsizeName;

        return $this;
    }

    /**
     * Gets cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getCqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName()
    {
        return $this->cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName;
    }

    /**
     * Sets cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName
     *
     * @return $this
     */
    public function setCqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName(ConfigNodePropertyInteger $cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName = null)
    {
        $this->cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName = $cqDamS7damVideoproxyclientserviceMultipartuploadNumthreadName;

        return $this;
    }

    /**
     * Gets cqDamS7damVideoproxyclientserviceHttpReadtimeoutName.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getCqDamS7damVideoproxyclientserviceHttpReadtimeoutName()
    {
        return $this->cqDamS7damVideoproxyclientserviceHttpReadtimeoutName;
    }

    /**
     * Sets cqDamS7damVideoproxyclientserviceHttpReadtimeoutName.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $cqDamS7damVideoproxyclientserviceHttpReadtimeoutName
     *
     * @return $this
     */
    public function setCqDamS7damVideoproxyclientserviceHttpReadtimeoutName(ConfigNodePropertyInteger $cqDamS7damVideoproxyclientserviceHttpReadtimeoutName = null)
    {
        $this->cqDamS7damVideoproxyclientserviceHttpReadtimeoutName = $cqDamS7damVideoproxyclientserviceHttpReadtimeoutName;

        return $this;
    }

    /**
     * Gets cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getCqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName()
    {
        return $this->cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName;
    }

    /**
     * Sets cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName
     *
     * @return $this
     */
    public function setCqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName(ConfigNodePropertyInteger $cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName = null)
    {
        $this->cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName = $cqDamS7damVideoproxyclientserviceHttpConnectiontimeoutName;

        return $this;
    }

    /**
     * Gets cqDamS7damVideoproxyclientserviceHttpMaxretrycountName.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getCqDamS7damVideoproxyclientserviceHttpMaxretrycountName()
    {
        return $this->cqDamS7damVideoproxyclientserviceHttpMaxretrycountName;
    }

    /**
     * Sets cqDamS7damVideoproxyclientserviceHttpMaxretrycountName.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $cqDamS7damVideoproxyclientserviceHttpMaxretrycountName
     *
     * @return $this
     */
    public function setCqDamS7damVideoproxyclientserviceHttpMaxretrycountName(ConfigNodePropertyInteger $cqDamS7damVideoproxyclientserviceHttpMaxretrycountName = null)
    {
        $this->cqDamS7damVideoproxyclientserviceHttpMaxretrycountName = $cqDamS7damVideoproxyclientserviceHttpMaxretrycountName;

        return $this;
    }

    /**
     * Gets cqDamS7damVideoproxyclientserviceUploadprogressIntervalName.
     *
     * @return OpenAPI\Server\Model\ConfigNodePropertyInteger|null
     */
    public function getCqDamS7damVideoproxyclientserviceUploadprogressIntervalName()
    {
        return $this->cqDamS7damVideoproxyclientserviceUploadprogressIntervalName;
    }

    /**
     * Sets cqDamS7damVideoproxyclientserviceUploadprogressIntervalName.
     *
     * @param OpenAPI\Server\Model\ConfigNodePropertyInteger|null $cqDamS7damVideoproxyclientserviceUploadprogressIntervalName
     *
     * @return $this
     */
    public function setCqDamS7damVideoproxyclientserviceUploadprogressIntervalName(ConfigNodePropertyInteger $cqDamS7damVideoproxyclientserviceUploadprogressIntervalName = null)
    {
        $this->cqDamS7damVideoproxyclientserviceUploadprogressIntervalName = $cqDamS7damVideoproxyclientserviceUploadprogressIntervalName;

        return $this;
    }
}


