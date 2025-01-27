package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties

/**
 * 
 * @param pid 
 * @param title 
 * @param description 
 * @param properties 
 */
case class ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo(pid: Option[String],
                title: Option[String],
                description: Option[String],
                properties: Option[ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties]
                )

object ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo {
    /**
     * Creates the codec for converting ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo from and to JSON.
     */
    implicit val decoder: Decoder[ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo] = deriveDecoder
    implicit val encoder: ObjectEncoder[ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo] = deriveEncoder
}
