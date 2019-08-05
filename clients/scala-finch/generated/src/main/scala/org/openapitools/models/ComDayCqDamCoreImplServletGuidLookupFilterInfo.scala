package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ComDayCqDamCoreImplServletGuidLookupFilterProperties

/**
 * 
 * @param pid 
 * @param title 
 * @param description 
 * @param properties 
 * @param bundleUnderscorelocation 
 * @param serviceUnderscorelocation 
 */
case class ComDayCqDamCoreImplServletGuidLookupFilterInfo(pid: Option[String],
                title: Option[String],
                description: Option[String],
                properties: Option[ComDayCqDamCoreImplServletGuidLookupFilterProperties],
                bundleUnderscorelocation: Option[String],
                serviceUnderscorelocation: Option[String]
                )

object ComDayCqDamCoreImplServletGuidLookupFilterInfo {
    /**
     * Creates the codec for converting ComDayCqDamCoreImplServletGuidLookupFilterInfo from and to JSON.
     */
    implicit val decoder: Decoder[ComDayCqDamCoreImplServletGuidLookupFilterInfo] = deriveDecoder
    implicit val encoder: ObjectEncoder[ComDayCqDamCoreImplServletGuidLookupFilterInfo] = deriveEncoder
}