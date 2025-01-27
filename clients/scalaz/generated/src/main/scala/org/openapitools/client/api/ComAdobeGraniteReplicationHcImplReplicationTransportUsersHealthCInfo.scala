package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfo._

case class ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCProperties])

object ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfo {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoCodecJson: CodecJson[ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfo] = CodecJson.derive[ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfo]
  implicit val ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoDecoder: EntityDecoder[ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfo] = jsonOf[ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfo]
  implicit val ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoEncoder: EntityEncoder[ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfo] = jsonEncoderOf[ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfo]
}
