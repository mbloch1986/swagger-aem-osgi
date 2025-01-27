package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties

/**
 * 
 * @param pid 
 * @param title 
 * @param description 
 * @param properties 
 * @param bundleUnderscorelocation 
 * @param serviceUnderscorelocation 
 */
case class ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo(pid: Option[String],
                title: Option[String],
                description: Option[String],
                properties: Option[ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties],
                bundleUnderscorelocation: Option[String],
                serviceUnderscorelocation: Option[String]
                )

object ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo {
    /**
     * Creates the codec for converting ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo from and to JSON.
     */
    implicit val decoder: Decoder[ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo] = deriveDecoder
    implicit val encoder: ObjectEncoder[ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo] = deriveEncoder
}
