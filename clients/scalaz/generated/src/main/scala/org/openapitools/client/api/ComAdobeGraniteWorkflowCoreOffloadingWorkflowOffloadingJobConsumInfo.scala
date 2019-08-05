package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfo._

case class ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties])

object ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfo {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoCodecJson: CodecJson[ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfo] = CodecJson.derive[ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfo]
  implicit val ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoDecoder: EntityDecoder[ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfo] = jsonOf[ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfo]
  implicit val ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoEncoder: EntityEncoder[ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfo] = jsonEncoderOf[ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfo]
}