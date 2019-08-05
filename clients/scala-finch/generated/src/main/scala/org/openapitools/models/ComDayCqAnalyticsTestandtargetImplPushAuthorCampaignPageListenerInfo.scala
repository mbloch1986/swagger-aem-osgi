package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties

/**
 * 
 * @param pid 
 * @param title 
 * @param description 
 * @param properties 
 * @param bundleUnderscorelocation 
 * @param serviceUnderscorelocation 
 */
case class ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo(pid: Option[String],
                title: Option[String],
                description: Option[String],
                properties: Option[ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties],
                bundleUnderscorelocation: Option[String],
                serviceUnderscorelocation: Option[String]
                )

object ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo {
    /**
     * Creates the codec for converting ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo from and to JSON.
     */
    implicit val decoder: Decoder[ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo] = deriveDecoder
    implicit val encoder: ObjectEncoder[ComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerInfo] = deriveEncoder
}