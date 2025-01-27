package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.OrgApacheSlingSettingsImplSlingSettingsServiceImplProperties

/**
 * 
 * @param pid 
 * @param title 
 * @param description 
 * @param properties 
 */
case class OrgApacheSlingSettingsImplSlingSettingsServiceImplInfo(pid: Option[String],
                title: Option[String],
                description: Option[String],
                properties: Option[OrgApacheSlingSettingsImplSlingSettingsServiceImplProperties]
                )

object OrgApacheSlingSettingsImplSlingSettingsServiceImplInfo {
    /**
     * Creates the codec for converting OrgApacheSlingSettingsImplSlingSettingsServiceImplInfo from and to JSON.
     */
    implicit val decoder: Decoder[OrgApacheSlingSettingsImplSlingSettingsServiceImplInfo] = deriveDecoder
    implicit val encoder: ObjectEncoder[OrgApacheSlingSettingsImplSlingSettingsServiceImplInfo] = deriveEncoder
}
