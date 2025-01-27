package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.OrgApacheSlingDiscoveryOakConfigProperties

/**
 * 
 * @param pid 
 * @param title 
 * @param description 
 * @param properties 
 * @param bundleUnderscorelocation 
 * @param serviceUnderscorelocation 
 */
case class OrgApacheSlingDiscoveryOakConfigInfo(pid: Option[String],
                title: Option[String],
                description: Option[String],
                properties: Option[OrgApacheSlingDiscoveryOakConfigProperties],
                bundleUnderscorelocation: Option[String],
                serviceUnderscorelocation: Option[String]
                )

object OrgApacheSlingDiscoveryOakConfigInfo {
    /**
     * Creates the codec for converting OrgApacheSlingDiscoveryOakConfigInfo from and to JSON.
     */
    implicit val decoder: Decoder[OrgApacheSlingDiscoveryOakConfigInfo] = deriveDecoder
    implicit val encoder: ObjectEncoder[OrgApacheSlingDiscoveryOakConfigInfo] = deriveEncoder
}
