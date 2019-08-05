package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfo._

case class ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplProperties])

object ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfo {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoCodecJson: CodecJson[ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfo] = CodecJson.derive[ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfo]
  implicit val ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoDecoder: EntityDecoder[ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfo] = jsonOf[ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfo]
  implicit val ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoEncoder: EntityEncoder[ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfo] = jsonEncoderOf[ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfo]
}