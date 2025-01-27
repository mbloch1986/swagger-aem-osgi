package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties

/**
 * 
 * @param pid 
 * @param title 
 * @param description 
 * @param properties 
 */
case class ComAdobeCqDamMacSyncImplDAMSyncServiceImplInfo(pid: Option[String],
                title: Option[String],
                description: Option[String],
                properties: Option[ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties]
                )

object ComAdobeCqDamMacSyncImplDAMSyncServiceImplInfo {
    /**
     * Creates the codec for converting ComAdobeCqDamMacSyncImplDAMSyncServiceImplInfo from and to JSON.
     */
    implicit val decoder: Decoder[ComAdobeCqDamMacSyncImplDAMSyncServiceImplInfo] = deriveDecoder
    implicit val encoder: ObjectEncoder[ComAdobeCqDamMacSyncImplDAMSyncServiceImplInfo] = deriveEncoder
}
