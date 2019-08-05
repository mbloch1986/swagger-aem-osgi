package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqMcmLandingpageParserTaghandlersCtaGraphicalClickThrougInfo._

case class ComDayCqMcmLandingpageParserTaghandlersCtaGraphicalClickThrougInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComDayCqMcmLandingpageParserTaghandlersCtaGraphicalClickThrougProperties])

object ComDayCqMcmLandingpageParserTaghandlersCtaGraphicalClickThrougInfo {
  import DateTimeCodecs._

  implicit val ComDayCqMcmLandingpageParserTaghandlersCtaGraphicalClickThrougInfoCodecJson: CodecJson[ComDayCqMcmLandingpageParserTaghandlersCtaGraphicalClickThrougInfo] = CodecJson.derive[ComDayCqMcmLandingpageParserTaghandlersCtaGraphicalClickThrougInfo]
  implicit val ComDayCqMcmLandingpageParserTaghandlersCtaGraphicalClickThrougInfoDecoder: EntityDecoder[ComDayCqMcmLandingpageParserTaghandlersCtaGraphicalClickThrougInfo] = jsonOf[ComDayCqMcmLandingpageParserTaghandlersCtaGraphicalClickThrougInfo]
  implicit val ComDayCqMcmLandingpageParserTaghandlersCtaGraphicalClickThrougInfoEncoder: EntityEncoder[ComDayCqMcmLandingpageParserTaghandlersCtaGraphicalClickThrougInfo] = jsonEncoderOf[ComDayCqMcmLandingpageParserTaghandlersCtaGraphicalClickThrougInfo]
}