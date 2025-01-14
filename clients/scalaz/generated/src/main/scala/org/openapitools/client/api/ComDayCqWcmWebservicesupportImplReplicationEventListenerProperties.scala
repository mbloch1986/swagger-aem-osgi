package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqWcmWebservicesupportImplReplicationEventListenerProperties._

case class ComDayCqWcmWebservicesupportImplReplicationEventListenerProperties (
  flushAgents: Option[ConfigNodePropertyArray])

object ComDayCqWcmWebservicesupportImplReplicationEventListenerProperties {
  import DateTimeCodecs._

  implicit val ComDayCqWcmWebservicesupportImplReplicationEventListenerPropertiesCodecJson: CodecJson[ComDayCqWcmWebservicesupportImplReplicationEventListenerProperties] = CodecJson.derive[ComDayCqWcmWebservicesupportImplReplicationEventListenerProperties]
  implicit val ComDayCqWcmWebservicesupportImplReplicationEventListenerPropertiesDecoder: EntityDecoder[ComDayCqWcmWebservicesupportImplReplicationEventListenerProperties] = jsonOf[ComDayCqWcmWebservicesupportImplReplicationEventListenerProperties]
  implicit val ComDayCqWcmWebservicesupportImplReplicationEventListenerPropertiesEncoder: EntityEncoder[ComDayCqWcmWebservicesupportImplReplicationEventListenerProperties] = jsonEncoderOf[ComDayCqWcmWebservicesupportImplReplicationEventListenerProperties]
}
