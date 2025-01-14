package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerInfo._

case class ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerProperties],
bundleLocation: Option[String],
serviceLocation: Option[String])

object ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerInfo {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerInfoCodecJson: CodecJson[ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerInfo] = CodecJson.derive[ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerInfo]
  implicit val ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerInfoDecoder: EntityDecoder[ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerInfo] = jsonOf[ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerInfo]
  implicit val ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerInfoEncoder: EntityEncoder[ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerInfo] = jsonEncoderOf[ComAdobeGraniteOffloadingImplTransporterOffloadingAgentManagerInfo]
}
